#include <iostream>
#include "dataTransferBase.hpp"
#include "avb_dataTransfer.hpp"
#include "webrtc_dataTransfer.hpp"
#include "Utils.hpp"
#include "connection.hpp"
#include <memory>

using namespace com::elektrobit::mediaserver;

int main (){
    std::unique_ptr<dataTransferBase> obj = std::make_unique<webrtc_dataTransfer>();
    std::unique_ptr<connection> conn = std::make_unique<connection>("127.0.0.1", 8080, obj);
    conn->init();
    conn->connect();
    std::cout << conn->getConnectionStatus() << std::endl;
    conn->disconnect();
    std::cout << "Hello world" <<std::endl;
}
