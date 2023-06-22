/**
 * Copyright (C) 2023 Elektrobit Automotive GmbH
 * All rights reserved
 */

#ifndef CONNECTION_H
#define CONNECTION_H_

//standard cpp headers
#include <string>
#include <memory>

//unix/linux headers
#include "unistd.h"

//current project headers
#include "Utils.hpp"
#include "dataTransferBase.hpp"

namespace com {
namespace elektrobit {
namespace mediaserver {

class connection {
public:
    //construtor and distructor
    connection(const std::string& ipaddress, uint16_t port, std::unique_ptr<dataTransferBase>& dataTransfer);
    ~connection();

    void init();
    void connect();
    void disconnect();

    //setter and getter
    ConnectionStatus getConnectionStatus() const {
        return mConnectionStatus;
    }

private:
    std::string mIpAddress;
    uint16_t mPort;
    ConnectionStatus mConnectionStatus;
    std::unique_ptr<dataTransferBase> mDataTransferBase;
};

} // end mediaserver
} // end elektrobit
} // end com

#endif // CONNECTION_H_