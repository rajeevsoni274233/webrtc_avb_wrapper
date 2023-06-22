/**
 * Copyright (C) 2023 Elektrobit Automotive GmbH
 * All rights reserved
 */

#ifndef WEBRTC_DATA_TRANSFER_BASE_H_
#define WEBRTC_DATA_TRANSFER_BASE_H_

#include "dataTransferBase.hpp"

namespace com {
namespace elektrobit {
namespace mediaserver {

class webrtc_dataTransfer : public dataTransferBase {
public:
    void sendData(void *) override;
    void* receiveData() override;
};

} // end mediaserver
} // end elektrobit
} // end com

#endif // WEBRTC_DATA_TRANSFER_BASE_H_