//Extra Part For Social.hpp
#ifdef EXTRA_INCLUDE_PART_SOCIAL
// Include Headers or Declare Types Here

#else
// Add Member There
class Events{
    public:
    class Event;
    class AchievementEventing;
};
class GameConnectionInfo {
public:
    inline GameConnectionInfo() = delete;
    inline GameConnectionInfo(GameConnectionInfo const&) = delete;
    inline GameConnectionInfo(GameConnectionInfo const&&) = delete;
};
enum GamePublishSetting;

#endif
