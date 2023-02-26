/**
 * @file  Social.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Social.
 *
 */
namespace Social {

#define AFTER_EXTRA
// Add Member There
class MultiplayerServiceManager;

namespace Events {
class AchievementEventing {
public:
    AchievementEventing() = delete;
    AchievementEventing(AchievementEventing const&) = delete;
    AchievementEventing(AchievementEventing const&&) = delete;
};
class Event {
public:
    Event() = delete;
    Event(Event const&) = delete;
    Event(Event const&&) = delete;
};
class EventManager {
public:
    EventManager() = delete;
    EventManager(EventManager const&) = delete;
    EventManager(EventManager const&&) = delete;
};
class IEventListener {
public:
    IEventListener() = delete;
    IEventListener(IEventListener const&) = delete;
    IEventListener(IEventListener const&&) = delete;
};
class Property {
public:
    Property() = delete;
    Property(Property const&) = delete;
    Property(Property const&&) = delete;
};

}
class MultiplayerService {
public:
    MultiplayerService() = delete;
    MultiplayerService(MultiplayerService const&) = delete;
    MultiplayerService(MultiplayerService const&&) = delete;
};
enum class SignInResult;
enum class MultiplayerServiceIdentifier;
class GameConnectionInfo {
public:
    GameConnectionInfo() = delete;
    GameConnectionInfo(GameConnectionInfo const&) = delete;
    GameConnectionInfo(GameConnectionInfo const&&) = delete;
};
enum class GamePublishSetting;
class IUserManager {
public:
    IUserManager() = delete;
    IUserManager(IUserManager const&) = delete;
    IUserManager(IUserManager const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol  ?INVALID_CONNECTION\@Social\@\@3VGameConnectionInfo\@1\@B
     */
    MCAPI extern class Social::GameConnectionInfo const INVALID_CONNECTION;

};