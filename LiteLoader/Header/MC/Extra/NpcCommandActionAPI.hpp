//Extra Part For NpcCommandAction.hpp
#ifdef EXTRA_INCLUDE_PART_NPCCOMMANDACTION
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct SavedCommand {
    SavedCommand() = delete;
    SavedCommand(SavedCommand const&) = delete;
    SavedCommand(SavedCommand const&&) = delete;
};

#endif
