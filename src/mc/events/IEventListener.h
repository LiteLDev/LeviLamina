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
    virtual ~IEventListener();

    virtual void recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<::AppPlatform> const&) = 0;

    virtual void sendEvents(bool) = 0;

    virtual int getEventTagsFilter() const = 0;

    virtual void stopDebugEventLogging() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
