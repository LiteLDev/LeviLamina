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
    MCAPI explicit EventManager(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCAPI void UpdateDnAPlatString();

    MCAPI ::std::string _buildDnAPlatformString();

    MCAPI void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);

    MCAPI ::std::unordered_map<::std::string, ::Social::Events::Property>
    buildCommonProperties(uint userId, ::std::vector<::std::string> const& exclude) const;

    MCAPI void buildCommonProperties(
        ::std::unordered_map<::std::string, ::Social::Events::Property>& props,
        uint                                                             userId,
        ::std::vector<::std::string> const&                              exclude
    ) const;

    MCAPI void clearListeners();

    MCAPI void disableEventRecording();

    MCAPI void enableEventRecording();

    MCAPI ::std::optional<::Social::Events::Property> getCommonProperty(::std::string const& name) const;

    MCAPI ::Social::Events::Property getGlobalProperty(::std::string const& name) const;

    MCAPI ::Social::Events::Property getPlayerCommonProperty(uint userId, ::std::string const& name) const;

    MCAPI ::Social::Events::Property getPlayerGlobalProperty(uint userId, ::std::string const& name) const;

    MCAPI bool isEventRecordingEnabled();

    MCAPI void recordDelayedEventAction(::std::string const& action);

    MCAPI void recordEvent(::Social::Events::Event& event);

    MCAPI void removeCommonProperty(::std::string const& name);

    MCAPI void removeDynamicCommonProperty(::std::string const& containerName);

    MCAPI void removeGlobalProperty(::std::string const& name);

    MCAPI void removePlayerCommonProperty(uint userId, ::std::string const& name);

    MCAPI void removePlayerCommonPropertyForAllPlayers(::std::string const& name);

    MCAPI ::std::shared_ptr<void*> requestEventDeferment();

    MCAPI void sendEvents(bool forceSend);

    MCAPI void setAcceptNewEvents(bool acceptNewEvents);

    MCAPI void setupCommonProperties();

    MCAPI void shutdown();

    MCAPI void stopDebugEventLoggingForAllListeners();

    MCAPI void tick();

    MCAPI ~EventManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
