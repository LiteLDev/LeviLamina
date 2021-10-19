#pragma once
#include <api/types/types.h>
#include <loader/Loader.h>
#include <mc/Core.h>
#include <cstdio>
#include <cstring>
#include <memory>
#include <string>
#include <string_view>
// MC_COMMAND_EXTRA
class CommandRegistry;
class CommandOrigin;
class CommandOutput;
class Actor;
class Player;
// enum CommandPermissionLevel : char;
enum CommandPermissionLevel : char {
    Normal           = 0,
    Privileged       = 1,
    AutomationPlayer = 2,
    OperatorOnly     = 3,
    ConsoleOnly      = 4
};
template <typename T>
class CommandSelectorResults;

enum class CommandFlagValue : char {
    None        = 0,
    Usage       = 1,
    Visibility2 = 2,
    Visibility4 = 4,
    Visibility6 = 6,
    Sync        = 8,
    Execute     = 16,
    Type        = 32,
    Cheat       = 64,
};

struct CommandFlag {
    CommandFlagValue value;
};
class CommandOutputParameter {
    std::string str;
    int type;

  public:
    /*
    __declspec(dllimport) CommandOutputParameter(std::string const&);
    __declspec(dllimport) CommandOutputParameter(int);
    __declspec(dllimport) CommandOutputParameter(BlockPos);
    __declspec(dllimport) CommandOutputParameter(std::vector<Player const*> const&);
    __declspec(dllimport) CommandOutputParameter(std::vector<std::string> const&);
*/
    MCINLINE CommandOutputParameter(std::string str, int type) : str(str), type(type) {}
};
class CommandOutput {
  public:
    MCINLINE void error(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a0,
        class std::vector<class CommandOutputParameter,
                          class std::allocator<class CommandOutputParameter>> const &a1 = {}) {
        void (CommandOutput::*rv)(
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &,
            class std::vector<class CommandOutputParameter,
                              class std::allocator<class CommandOutputParameter>> const &);
        *((void **)&rv) = dlsym(
            "?error@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
            "@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@"
            "std@@@3@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void success(
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a0                   = "",
        class std::vector<class CommandOutputParameter,
                          class std::allocator<class CommandOutputParameter>> const &a1 = {}) {
        void (CommandOutput::*rv)(
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &,
            class std::vector<class CommandOutputParameter,
                              class std::allocator<class CommandOutputParameter>> const &);
        *((void **)&rv) = dlsym(
            "?success@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@"
            "2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@"
            "std@@@3@@Z");
        return (this->*rv)(a0, a1);
    }

    void addMessage(std::string const &str) {
        SymCall(
            "?addMessage@CommandOutput@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@"
            "VCommandOutputParameter@@@std@@@3@W4CommandOutputMessageType@@@Z",
            void, void *, std::string const &, std::vector<CommandOutputParameter> const &,
            int)(this, str, {}, 0);
    }
};

enum class OriginType : char {
    Player           = 0,
    Block            = 1,
    MinecartBlock    = 2,
    DevConsole       = 3,
    Test             = 4,
    AutomationPlayer = 5,
    ClientAutomation = 6,
    DedicatedServer  = 7,
    Actor            = 8,
    Virtual          = 9,
    GameArgument     = 10,
    ActorServer      = 11
};

class CommandOrigin {
  public:
    CommandOrigin(CommandOrigin const &)                            = delete;
    virtual ~CommandOrigin()                                        = 0;
    virtual std::string &getRequestId() const                       = 0;
    virtual std::string getName() const                             = 0;
    virtual BlockPos getBlockPosition() const                       = 0;
    virtual Vec3 getWorldPosition() const                           = 0;
    virtual Level *getLevel() const                                 = 0;
    virtual class Dimension *getDimension() const                   = 0;
    virtual Actor *getEntity() const                                = 0;
    virtual enum CommandPermissionLevel getPermissionsLevel() const = 0;
    virtual std::unique_ptr<CommandOrigin> clone() const            = 0;
    virtual bool unk1() const                                       = 0;
    virtual bool unk2() const                                       = 0;
    virtual bool hasChatPerms() const                               = 0;
    virtual bool hasTellPerms() const                               = 0;
    virtual bool canUseAbility(AbilitiesIndex) const                = 0;
    virtual bool isWorldBuilder() const                             = 0;
    virtual bool canUseCommandsWithoutCheatsEnabled() const         = 0;
    virtual bool isSelectorExpansionAllowed() const                 = 0;
    virtual NetworkIdentifier getSourceId_net() const               = 0;
    virtual char getSourceSubId() const                             = 0;
    virtual CommandOrigin *getOutputReceiver() const                = 0;
    virtual OriginType getOriginType() const                        = 0;
    virtual mce::UUID const &getUUID() const                        = 0;
    virtual void toCommandOriginData_stub() const                   = 0;
    virtual void handleCommandOutputCallback_stub(void *)           = 0;
    virtual void _setUUID(mce::UUID const &)                        = 0;
};
class Actor;
class HashedString {
    uint64_t hash;
    std::string str;
    int64_t unk;

  public:
    std::string const &getString() const { return str; }
    MCINLINE static unsigned __int64 computeHash(char const *a0) {
        return ((unsigned __int64 (*)(char const *))dlsym(
            "?computeHash@HashedString@@SA_KPEBD@Z"))(a0);
    }
    MCINLINE bool operator==(class HashedString const &a0) {
        bool (HashedString::*rv)(class HashedString const &);
        *((void **)&rv) = dlsym("??8HashedString@@QEBA_NAEBV0@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool operator!=(class HashedString const &a0) {
        bool (HashedString::*rv)(class HashedString const &);
        *((void **)&rv) = dlsym("??9HashedString@@QEBA_NAEBV0@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE HashedString(const char *ch) {
        str  = ch;
        hash = computeHash(ch);
        unk  = 0;
    }
};
struct ActorDefinitionIdentifier {
  public:
    std::string ns;              // 0
    std::string identifier;      // 32
    std::string event;           // 64
    std::string fullname;        // 96
    HashedString canonicalHash;  // 128

    MCINLINE HashedString const &getCanonicalHash() const { return canonicalHash; }
    MCINLINE std::string const &getCanonicalName() const { return canonicalHash.getString(); }
    MCINLINE std::string const &getFullName() const { return fullname; }
    MCINLINE std::string const &getIdentifier() const { return identifier; }
    MCINLINE std::string const &getInitEvent() const { return event; }
    MCINLINE std::string const &getNamespace() const { return ns; }
    MCINLINE bool isEmpty() const { return ns.empty() && identifier.empty(); }
    MCINLINE bool isVanilla() const { return ns == "minecraft"; }
    MCINLINE void setIdentifier(std::string const &id) { identifier = id; }
    MCINLINE void setInitEvent(std::string const &e) { event = e; }

    MCINLINE void initialize(class std::basic_string<char,
                                                     struct std::char_traits<char>,
                                                     class std::allocator<char>> const &a0,
                             class std::basic_string<char,
                                                     struct std::char_traits<char>,
                                                     class std::allocator<char>> const &a1,
                             class std::basic_string<char,
                                                     struct std::char_traits<char>,
                                                     class std::allocator<char>> const &a2) {
        void (ActorDefinitionIdentifier::*rv)(
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &,
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &,
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@"
            "V?$allocator@D@2@@std@@00@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool operator==(struct ActorDefinitionIdentifier const &a0) {
        bool (ActorDefinitionIdentifier::*rv)(struct ActorDefinitionIdentifier const &);
        *((void **)&rv) = dlsym("??8ActorDefinitionIdentifier@@QEBA_NAEBU0@@Z");
        return (this->*rv)(a0);
    }
};
static_assert(offsetof(ActorDefinitionIdentifier, canonicalHash) == 128);

template <typename T>
struct InvertableFilter {
    T value;
    bool inverted;
};
class CommandSelectorBase {
  public:
    void *filler[200 / 8];
#ifdef MC_COMMAND_EXTRA
    MCINLINE bool isExplicitIdSelector() const { return explicitIdSelector; }
    MCINLINE void addNameFilter(InvertableFilter<std::string> const &filter) {
        namefilters.emplace_back(filter);
    }
    MCINLINE void addTagFilter(InvertableFilter<std::string> const &filter) {
        if (isExplicitIdSelector())
            explicitIdSelector = false;
        tagfilters.emplace_back(filter);
        MCINLINE void setResultCount(uint64_t value) { resultCount = value; }
        MCINLINE void addTypeFilter(
            struct InvertableFilter<class std::basic_string<
                char, struct std::char_traits<char>, class std::allocator<char>>> const &a0) {
            void (CommandSelectorBase::*rv)(
                struct InvertableFilter<class std::basic_string<
                    char, struct std::char_traits<char>, class std::allocator<char>>> const &);
            *((void **)&rv) = dlsym(
                "?addTypeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z");
            return (this->*rv)(a0);
        }
        MCINLINE bool compile(
            class CommandOrigin const &a0,
            class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>
                &a1) {
            bool (CommandSelectorBase::*rv)(
                class CommandOrigin const &,
                class std::basic_string<char, struct std::char_traits<char>,
                                        class std::allocator<char>> &);
            *((void **)&rv) = dlsym(
                "?compile@CommandSelectorBase@@QEAA_NAEBVCommandOrigin@@AEAV?$basic_string@DU?$"
                "char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
            return (this->*rv)(a0, a1);
        }
        MCINLINE void setRadiusMin(float a0) {
            void (CommandSelectorBase::*rv)(float);
            *((void **)&rv) = dlsym("?setRadiusMin@CommandSelectorBase@@QEAAXM@Z");
            return (this->*rv)(a0);
        }
        MCINLINE bool matchType(class Actor const &a0) {
            bool (CommandSelectorBase::*rv)(class Actor const &);
            *((void **)&rv) = dlsym("?matchType@CommandSelectorBase@@AEBA_NAEBVActor@@@Z");
            return (this->*rv)(a0);
        }
        MCINLINE bool matchTag(class Actor const &a0) {
            bool (CommandSelectorBase::*rv)(class Actor const &);
            *((void **)&rv) = dlsym("?matchTag@CommandSelectorBase@@AEBA_NAEBVActor@@@Z");
            return (this->*rv)(a0);
        }
        MCINLINE bool filter(class CommandOrigin const &a0, class Actor &a1, float a2) {
            bool (CommandSelectorBase::*rv)(class CommandOrigin const &, class Actor &, float);
            *((void **)&rv) =
                dlsym("?filter@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@AEAVActor@@M@Z");
            return (this->*rv)(a0, a1, a2);
        }
        MCINLINE void setRadiusMax(float a0) {
            void (CommandSelectorBase::*rv)(float);
            *((void **)&rv) = dlsym("?setRadiusMax@CommandSelectorBase@@QEAAXM@Z");
            return (this->*rv)(a0);
        }
        MCINLINE bool matchName(class Actor const &a0) {
            bool (CommandSelectorBase::*rv)(class Actor const &);
            *((void **)&rv) = dlsym("?matchName@CommandSelectorBase@@AEBA_NAEBVActor@@@Z");
            return (this->*rv)(a0);
        }
    }
#endif
    MCINLINE ~CommandSelectorBase() {
        SymCall("??1CommandSelectorBase@@QEAA@XZ", void, void *)(this);
    }
    // CommandSelectorBase() {}
  protected:
    CommandSelectorBase(bool isPlayer) {
        SymCall("??0CommandSelectorBase@@IEAA@_N@Z", void, void *, bool)(this, isPlayer);
    }
};
// static_assert(offsetof(CommandSelectorBase, explicitIdSelector) == 165);
template <typename T>
class CommandSelector : public CommandSelectorBase {
  public:
    MCINLINE CommandSelector() : CommandSelectorBase(std::is_same_v<T, Player>) {}
    CommandSelectorResults<T> results(CommandOrigin const &a0) {
        CommandSelectorResults<T> (CommandSelector<T>::*rv)(CommandOrigin const &a0);
        if constexpr (std::is_same_v<class Actor, T>) {
            *((void **)&rv) = dlsym(
                "?results@?$CommandSelector@VActor@@@@QEBA?AV?$CommandSelectorResults@VActor@@@@"
                "AEBVCommandOrigin@@@Z");
            return (this->*rv)(a0);
        } else {
            *((void **)&rv) = dlsym(
                "?results@?$CommandSelector@VPlayer@@@@QEBA?AV?$CommandSelectorResults@VPlayer@@@@"
                "AEBVCommandOrigin@@@Z");
            return (this->*rv)(a0);
        }
    }
};
template <typename T>
class CommandSelectorResults {
    std::shared_ptr<std::vector<T *>> data;

  public:
    auto begin() { return data->begin(); }
    auto end() { return data->end(); }
    auto count() const { return data->size(); }
    auto empty() const { return data->empty(); }
};