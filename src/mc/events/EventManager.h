#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Property; }
namespace Social::Events { struct EventManagerArguments; }
// clang-format on

namespace Social::Events {

class EventManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkabddfc;
    ::ll::UntypedStorage<8, 24> mUnk9a5b18;
    ::ll::UntypedStorage<8, 64> mUnk2488f5;
    ::ll::UntypedStorage<8, 64> mUnk429183;
    ::ll::UntypedStorage<8, 64> mUnk5f726d;
    ::ll::UntypedStorage<8, 64> mUnk2e00a0;
    ::ll::UntypedStorage<8, 64> mUnkeac8cb;
    ::ll::UntypedStorage<8, 8>  mUnk70a5fe;
    ::ll::UntypedStorage<8, 8>  mUnk5ff13c;
    ::ll::UntypedStorage<8, 8>  mUnk27720e;
    ::ll::UntypedStorage<8, 8>  mUnke742b0;
    ::ll::UntypedStorage<8, 8>  mUnkb0340f;
    ::ll::UntypedStorage<8, 8>  mUnkb904e5;
    ::ll::UntypedStorage<8, 8>  mUnk7e8048;
    ::ll::UntypedStorage<8, 64> mUnke7aafa;
    ::ll::UntypedStorage<8, 8>  mUnk646108;
    ::ll::UntypedStorage<8, 8>  mUnk4a6715;
    ::ll::UntypedStorage<4, 4>  mUnk3ce00c;
    ::ll::UntypedStorage<1, 1>  mUnk6fc9f0;
    ::ll::UntypedStorage<1, 1>  mUnk60b46f;
    ::ll::UntypedStorage<8, 8>  mUnk7ec861;
    ::ll::UntypedStorage<8, 16> mUnkc396ea;
    // NOLINTEND

public:
    // prevent constructor by default
    EventManager& operator=(EventManager const&);
    EventManager(EventManager const&);
    EventManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EventManager(::Social::Events::EventManagerArguments&& args);

#ifdef LL_PLAT_C
    MCNAPI void SendDelayedEventActions(uint primaryUserId);

    MCNAPI void SendDelayedTelemetryEvents(uint primaryUserId);

    MCNAPI void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);

    MCNAPI ::std::optional<::Social::Events::Property> getCommonProperty(::std::string const& name) const;

    MCNAPI ::Social::Events::Property getPlayerCommonProperty(uint userId, ::std::string const& name) const;
#endif

    MCNAPI ~EventManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::EventManagerArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
