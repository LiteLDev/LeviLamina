#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Social { class IUserManager; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class PlayStreamEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc208cc;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayStreamEventListener& operator=(PlayStreamEventListener const&);
    PlayStreamEventListener(PlayStreamEventListener const&);
    PlayStreamEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayStreamEventListener() /*override*/ = default;

    virtual void sendEvent(::Social::Events::Event const& event) /*override*/;

    virtual int getEventTagsFilter() const /*override*/;

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;

    virtual bool _isListenerReadyForEvents() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PlayStreamEventListener(
        ::Core::Path                                          logFileName,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Core::Path logFileName, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $sendEvent(::Social::Events::Event const& event);

    MCNAPI int $getEventTagsFilter() const;

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;

    MCNAPI bool $_isListenerReadyForEvents() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
