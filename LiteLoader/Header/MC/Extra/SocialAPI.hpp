//Extra Part For Social.hpp
#ifdef EXTRA_INCLUDE_PART_SOCIAL
// Include Headers or Declare Types Here

#else
// Add Member There
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
enum SignInResult;
enum MultiplayerServiceIdentifier;
class GameConnectionInfo {
public:
    GameConnectionInfo() = delete;
    GameConnectionInfo(GameConnectionInfo const&) = delete;
    GameConnectionInfo(GameConnectionInfo const&&) = delete;
};
enum GamePublishSetting;
class IUserManager {
public:
    IUserManager() = delete;
    IUserManager(IUserManager const&) = delete;
    IUserManager(IUserManager const&&) = delete;
};

#endif
