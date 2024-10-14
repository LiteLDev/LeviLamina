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
    // prevent constructor by default
    EventManager& operator=(EventManager const&);
    EventManager(EventManager const&);
    EventManager();

public:
    // NOLINTBEGIN
    MCAPI explicit EventManager(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    MCAPI void UpdateDnAPlatString();

    MCAPI void addListener(std::unique_ptr<class Social::Events::IEventListener> listener);

    MCAPI std::unordered_map<std::string, class Social::Events::Property>
          buildCommonProperties(uint userId, std::vector<std::string> const& exclude) const;

    MCAPI void buildCommonProperties(
        std::unordered_map<std::string, class Social::Events::Property>& props,
        uint                                                             userId,
        std::vector<std::string> const&                                  exclude
    ) const;

    MCAPI void disableEventRecording();

    MCAPI void enableEventRecording();

    MCAPI std::optional<class Social::Events::Property> getCommonProperty(std::string const& name) const;

    MCAPI class Social::Events::Property getGlobalProperty(std::string const& name) const;

    MCAPI class Social::Events::Property getPlayerCommonProperty(uint userId, std::string const& name) const;

    MCAPI class Social::Events::Property getPlayerGlobalProperty(uint userId, std::string const& name) const;

    MCAPI bool isEventRecordingEnabled();

    MCAPI void recordDelayedEventAction(std::string const& action);

    MCAPI void recordEvent(class Social::Events::Event& event);

    MCAPI void removeCommonProperty(std::string const& name);

    MCAPI void removeDynamicCommonProperty(std::string const& containerName);

    MCAPI void removeGlobalProperty(std::string const& name);

    MCAPI void removePlayerCommonProperty(uint userId, std::string const& name);

    MCAPI void removePlayerCommonPropertyForAllPlayers(std::string const& name);

    MCAPI std::shared_ptr<void*> requestEventDeferment();

    MCAPI void sendEvents(bool forceSend);

    MCAPI void setAcceptNewEvents(bool acceptNewEvents);

    MCAPI void shutdown();

    MCAPI void stopDebugEventLoggingForAllListeners();

    MCAPI void tick();

    MCAPI ~EventManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _buildDnAPlatformString();

    MCAPI void setupCommonProperties();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Social::Events
