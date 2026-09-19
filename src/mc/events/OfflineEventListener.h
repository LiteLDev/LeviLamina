#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class OfflineEventListener : public ::Social::Events::IEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkb592ea;
    ::ll::UntypedStorage<8, 80>  mUnkdecaf2;
    ::ll::UntypedStorage<8, 128> mUnk6c0003;
    ::ll::UntypedStorage<8, 24>  mUnkfd3a8d;
    ::ll::UntypedStorage<8, 16>  mUnkc47823;
    ::ll::UntypedStorage<8, 96>  mUnk945e8d;
    ::ll::UntypedStorage<8, 336> mUnk7704b6;
    // NOLINTEND

public:
    // prevent constructor by default
    OfflineEventListener& operator=(OfflineEventListener const&);
    OfflineEventListener(OfflineEventListener const&);
    OfflineEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfflineEventListener() /*override*/ = default;

    virtual void recordEvent(
        ::Social::Events::Event const&                   event,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform
    ) /*override*/;

    virtual void sendEvents(bool) /*override*/;

    virtual void stopDebugEventLogging() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void
    $recordEvent(::Social::Events::Event const& event, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCNAPI void $sendEvents(bool);

    MCNAPI void $stopDebugEventLogging();
#endif


    // NOLINTEND
};

} // namespace Social::Events
