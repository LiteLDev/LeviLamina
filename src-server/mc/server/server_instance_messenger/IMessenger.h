#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ServerInstanceMessenger { class IMessageConsumer; }
namespace ServerInstanceMessenger { class IMessageProducer; }
// clang-format on

namespace ServerInstanceMessenger {

class IMessenger {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMessenger() = default;

    // vIndex: 1
    virtual ::ServerInstanceMessenger::IMessageProducer& getProducer() = 0;

    // vIndex: 2
    virtual ::ServerInstanceMessenger::IMessageConsumer& getConsumer() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
