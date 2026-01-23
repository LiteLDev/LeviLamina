#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
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
    ::ll::UntypedStorage<8, 24> mUnkd72b3b;
    ::ll::UntypedStorage<8, 64> mUnk1501bd;
    ::ll::UntypedStorage<8, 64> mUnk58a82c;
    ::ll::UntypedStorage<8, 64> mUnkf7e314;
    ::ll::UntypedStorage<8, 64> mUnke48a90;
    ::ll::UntypedStorage<8, 64> mUnk14f226;
    ::ll::UntypedStorage<8, 8>  mUnk70a5fe;
    ::ll::UntypedStorage<8, 8>  mUnk5ff13c;
    ::ll::UntypedStorage<8, 8>  mUnk27720e;
    ::ll::UntypedStorage<8, 8>  mUnke742b0;
    ::ll::UntypedStorage<8, 8>  mUnkb0340f;
    ::ll::UntypedStorage<8, 8>  mUnk7e8048;
    ::ll::UntypedStorage<8, 8>  mUnk4a6715;
    ::ll::UntypedStorage<4, 4>  mUnk4f8cc4;
    ::ll::UntypedStorage<1, 1>  mUnk6fc9f0;
    ::ll::UntypedStorage<1, 1>  mUnk60b46f;
    ::ll::UntypedStorage<8, 8>  mUnk893c04;
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

    MCNAPI void UpdateDnAPlatString();

    MCNAPI ::std::string _buildDnAPlatformString();

    MCNAPI void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);

    MCNAPI ::std::unordered_map<::std::string, ::Social::Events::Property>
    buildCommonProperties(uint userId, ::std::vector<::std::string> const& exclude) const;

    MCNAPI void buildCommonProperties(
        ::std::unordered_map<::std::string, ::Social::Events::Property>& props,
        uint                                                             userId,
        ::std::vector<::std::string> const&                              exclude
    ) const;

    MCNAPI_C ::std::optional<::Social::Events::Property> getCommonProperty(::std::string const& name) const;

    MCNAPI ::Social::Events::Property getGlobalProperty(::std::string const& name) const;

    MCNAPI ::Social::Events::Property getPlayerCommonProperty(uint userId, ::std::string const& name) const;

    MCNAPI ::Social::Events::Property getPlayerGlobalProperty(uint userId, ::std::string const& name) const;

    MCNAPI void recordDelayedEventAction(::std::string const& action);

    MCNAPI void recordEvent(::Social::Events::Event& event);

    MCNAPI void removePlayerCommonProperty(uint userId, ::std::string const& name);

    MCNAPI void setupCommonProperties();

    MCNAPI ~EventManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::string getPlatformCategory(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
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
