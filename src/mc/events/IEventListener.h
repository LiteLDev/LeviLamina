#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class IEventListener {
public:
    // prevent constructor by default
    IEventListener& operator=(IEventListener const&);
    IEventListener(IEventListener const&);
    IEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEventListener();

    // vIndex: 1
    virtual void recordEvent(
        class Social::Events::Event const&                       event,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform
    ) = 0;

    // vIndex: 2
    virtual void sendEvents(bool forceSend) = 0;

    // vIndex: 3
    virtual int getEventTagsFilter() const = 0;

    // vIndex: 4
    virtual void stopDebugEventLogging() = 0;

    // NOLINTEND
};

}; // namespace Social::Events
