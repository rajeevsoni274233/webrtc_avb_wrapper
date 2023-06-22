/**
 * Copyright (C) 2023 Elektrobit Automotive GmbH
 * All rights reserved
 */

#include "connection.hpp"

namespace com {
namespace elektrobit {
namespace mediaserver {

connection::connection(const std::string &ipaddress, uint16_t port, std::unique_ptr<dataTransferBase>& dataTransfer)
    : mIpAddress(ipaddress), mPort(port){
        mDataTransferBase = std::move(dataTransfer);
        mConnectionStatus = ConnectionStatus::UNINITIALISED;
}

connection::~connection()
{
    mConnectionStatus = ConnectionStatus::UNINITIALISED;
}

void connection::init()
{
    mConnectionStatus = ConnectionStatus::INITIALISING;

    mConnectionStatus = ConnectionStatus::INITIALISED;
}

void connection::connect()
{
    mConnectionStatus = ConnectionStatus::CONNECTING;

    mConnectionStatus = ConnectionStatus::CONNECTED;
}

void connection::disconnect()
{
    mConnectionStatus = ConnectionStatus::DISCONNECTING;

    mConnectionStatus = ConnectionStatus::DISCONNECTED;
}

} // end mediaserver
} // end elektrobit
} // end com
