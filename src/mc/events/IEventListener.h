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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEventListener();

    // vIndex: 1
    virtual void recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<::AppPlatform> const&) = 0;

    // vIndex: 2
    virtual void sendEvents(bool) = 0;

    // vIndex: 3
    virtual int getEventTagsFilter() const = 0;

    // vIndex: 4
    virtual void stopDebugEventLogging() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
