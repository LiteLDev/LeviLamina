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
    virtual ~IMessenger() = default;

    virtual ::ServerInstanceMessenger::IMessageProducer& getProducer() = 0;

    virtual ::ServerInstanceMessenger::IMessageConsumer& getConsumer() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ServerInstanceMessenger
