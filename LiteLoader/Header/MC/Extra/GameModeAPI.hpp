//Extra Part For GameMode.hpp
#ifdef EXTRA_INCLUDE_PART_GAMEMODE
// Include Headers or Declare Types Here
class ServerPlayer;
#else
// Add Member There
public:
LIAPI ServerPlayer* getPlayer();
#endif
