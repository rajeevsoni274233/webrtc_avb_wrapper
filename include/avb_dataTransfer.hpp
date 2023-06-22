/**
 * Copyright (C) 2023 Elektrobit Automotive GmbH
 * All rights reserved
 */

#ifndef AVB_DATA_TRANSFER_BASE_H_
#define AVB_DATA_TRANSFER_BASE_H_

#include "dataTransferBase.hpp"

namespace com {
namespace elektrobit {
namespace mediaserver {

class avb_dataTransfer : public dataTransferBase {
public:
    void sendData(void *) override;
    void* receiveData() override;
};

} // end mediaserver
} // end elektrobit
} // end com

#endif // AVB_DATA_TRANSFER_BASE_H_