//Extra Part For Command.hpp
#ifdef EXTRA_INCLUDE_PART_COMMAND
// Include Headers or Declare Types Here

enum CommandPermissionLevel : char {
    Normal = 0,
    Privileged = 1,
    AutomationPlayer = 2,
    OperatorOnly = 3,
    ConsoleOnly = 4
};

enum class CommandFlagValue : char {
    None = 0,
    Usage = 1,
    Visibility2 = 2,
    Visibility4 = 4,
    Visibility6 = 6,
    Sync = 8,
    Execute = 16,
    Type = 32,
    Cheat = 64,
};

enum class OriginType : char {
    Player = 0,
    Block = 1,
    MinecartBlock = 2,
    DevConsole = 3,
    Test = 4,
    AutomationPlayer = 5,
    ClientAutomation = 6,
    DedicatedServer = 7,
    Actor = 8,
    Virtual = 9,
    GameArgument = 10,
    ActorServer = 11
};

struct CommandFlag {
    CommandFlagValue value;

    constexpr bool operator==(CommandFlag const& rhs) const noexcept {
        return value == rhs.value;
    }
    constexpr bool operator!=(CommandFlag const& rhs) const noexcept {
        return value != rhs.value;
    }
    CommandFlag& operator|=(CommandFlag const& rhs) {
        value = (CommandFlagValue)((char)rhs.value | (char)value);
        return *this;
    }
};

class CommandOutput;

#else
// Add Member There

protected:
    int unk8;          // 8
    void* unk16;       // 16
    int unk24;         // 24
    unsigned char b28; // 28
    CommandFlag flag;  // 30

public:
    template <typename T>
    static bool checkHasTargets(CommandSelectorResults<T> const& a, CommandOutput& b)
    {
        bool (*sym)(CommandSelectorResults<T> const& a, CommandOutput& b);
        if constexpr (std::is_same<T, class Actor>()) {
            sym = (decltype(sym))dlsym("??$checkHasTargets@VActor@@@Command@@KA_NAEBV?$CommandSelectorResults@VActor@@@@AEAVCommandOutput@@@Z");
        } else {
            sym = (decltype(sym))dlsym("??$checkHasTargets@VPlayer@@@Command@@KA_NAEBV?$CommandSelectorResults@VPlayer@@@@AEAVCommandOutput@@@Z");
        }
        return sym(a, b);
    }
#endif
