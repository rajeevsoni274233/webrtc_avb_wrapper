/**
 * Copyright (C) 2023 Elektrobit Automotive GmbH
 * All rights reserved
 */

#ifndef DATA_TRANSFER_BASE_H_
#define DATA_TRANSFER_BASE_H_

namespace com {
namespace elektrobit {
namespace mediaserver {

class dataTransferBase {
public:
    virtual void sendData(void *) = 0;
    virtual void* receiveData() = 0;
};

} // end mediaserver
} // end elektrobit
} // end com

#endif // DATA_TRANSFER_BASE_H_