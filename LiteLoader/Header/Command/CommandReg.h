#pragma once
#include <unordered_map>
#include "Command.h"
#include <MC/CommandMessage.hpp>
#include <utils/optional.h>

static std::unordered_map<string, void *> parse_ptr = {
    {typeid(CommandMessage).name(),
     dlsym_real(
         "??$parse@VCommandMessage@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@"
         "@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
         "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
         "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(std::string).name(),
     dlsym_real("??$parse@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@"
                "CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_"
                "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(float).name(),
     dlsym_real("??$parse@M@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(int).name(),
     dlsym_real("??$parse@H@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(CommandSelector<Actor>).name(),
     dlsym_real(
         "??$parse@V?$CommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
         "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
         "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
         "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(CommandSelector<Player>).name(),
     dlsym_real(
         "??$parse@V?$CommandSelector@VPlayer@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
         "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
         "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
         "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")}};
template <typename T>
class typeid_t {
  public:
    unsigned short value;
    typeid_t(typeid_t const &id) : value(id.value) {}
    typeid_t(unsigned short value) : value(value) {}
};

class CommandVersion {
  public:
    int Min = 1, Max = 0x7FFFFFFF;
};

class CommandRegistry;
struct CommandParameterData;
class CommandRegistry {
  public:
#pragma region struct
    struct ParseToken;
    class Symbol {
      public:
        unsigned val;
    };
    struct Overload {
        using FactoryFn = std::unique_ptr<Command> (*)(void);
        CommandVersion version;                    // 0
        FactoryFn factory;                         // 8
        std::vector<CommandParameterData> params;  // 16
        unsigned char unk;                         // 40
        double  a = 0;                             // 48
        double  b = 0;                             // 56
        double  c = 0;                             // 64
        inline Overload(CommandVersion version,
                        FactoryFn factory,
                        std::vector<CommandParameterData> &&args)
            : version(version),
              factory(factory),
              params(std::forward<std::vector<CommandParameterData>>(args)),
              unk(255) {}
    };
    struct Signature {
        std::string name;                                  // 0
        std::string desc;                                  // 32
        std::vector<CommandRegistry::Overload> overloads;  // 64
        CommandPermissionLevel perm;                       // 88
        CommandRegistry::Symbol main_symbol;               // 92
        CommandRegistry::Symbol alt_symbol;                // 96
        CommandFlag flag;                                  // 100
        int unk72;
        int unk76;
        int unk80;
        bool b84;

        inline Signature(std::string_view name,
                         std::string_view desc,
                         CommandPermissionLevel perm,
                         CommandRegistry::Symbol symbol,
                         CommandFlag flag)
            : name(name), desc(desc), perm(perm), main_symbol(symbol), flag(flag) {}
    };

    struct SoftEnum {
        std::string name;               // 0
        std::vector<std::string> list;  // 32
    };
#pragma endregion struct definition
    MCINLINE void registerAlias(std::string const &a, std::string const &b) {
        SymCall(
            "?registerAlias@CommandRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@0@Z",
            void, void *, std::string const &, std::string const &)(this, a, b);
    }
    MCINLINE Signature *findCommand(class std::basic_string<char,
                                                            struct std::char_traits<char>,
                                                            class std::allocator<char>> const &a0) {
        Signature *(CommandRegistry::*rv)(
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &);
        *((void **)&rv) = dlsym_real(
            "?findCommand@CommandRegistry@@AEAAPEAUSignature@1@AEBV?$basic_string@DU?$char_traits@"
            "D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void registerOverloadInternal(struct CommandRegistry::Signature &a0,
                                           struct CommandRegistry::Overload &a1) {
        void (CommandRegistry::*rv)(struct CommandRegistry::Signature &,
                                    struct CommandRegistry::Overload &);
        *((void **)&rv) = dlsym_real(
            "?registerOverloadInternal@CommandRegistry@@AEAAXAEAUSignature@1@AEAUOverload@1@@Z");
        return (this->*rv)(a0, a1);
    }
    Symbol addEnumValuesInternal(std::string const &a0,
                                 std::vector<std::pair<std::string, uint64_t>> const &a1,
                                 typeid_t<CommandRegistry> a2,
                                 bool (CommandRegistry::*a3)(void *,
                                                             CommandRegistry::ParseToken const &,
                                                             CommandOrigin const &,
                                                             int,
                                                             std::string &,
                                                             std::vector<std::string> &) const) {
        decltype(&CommandRegistry::addEnumValuesInternal) rv;
        *(void **)&rv = dlsym_real(
            "?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_"
            "traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_"
            "traits@D@std@@V?$allocator@D@2@@std@@_K@std@@V?$allocator@U?$pair@V?$basic_string@DU?$"
            "char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@"
            "@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_"
            "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
            "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE unsigned __int64 getEnumData(struct CommandRegistry::ParseToken const &a0) const {
        unsigned __int64 (CommandRegistry::*rv)(struct CommandRegistry::ParseToken const &) const;
        *((void **)&rv) = dlsym("?getEnumData@CommandRegistry@@AEBA_KAEBUParseToken@1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void registerCommand(std::string const& a0, char const* a1, enum CommandPermissionLevel a2, int a3, int a4) {
        void (CommandRegistry::*rv)(std::string const&, char const*, enum CommandPermissionLevel, int, int);
        *((void**)&rv) = dlsym("?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<char const*>(a1), std::forward<enum CommandPermissionLevel>(a2), std::forward<int>(a3), std::forward<int>(a4));
    }
  public:
    template <typename T>
    inline static auto getParseFn() {
        bool (CommandRegistry::*ptr)(void *, CommandRegistry::ParseToken const &,
                                     CommandOrigin const &, int, std::string &,
                                     std::vector<std::string> &) const;
        *(void **)&ptr = parse_ptr[typeid(T).name()];
        if (!ptr) {
            printf("Cant parse cmd data %s\n", typeid(T).name());
            std::this_thread::sleep_for(std::chrono::seconds(10));
            exit(1);
        }
        return ptr;
    }

    template <typename Type>
    bool fakeparse(void *,
                   ParseToken const &,
                   CommandOrigin const &,
                   int,
                   std::string &,
                   std::vector<std::string> &) const {
        return false;
    }
    bool parseEnumInt(void *target,
                      CommandRegistry::ParseToken const &token,
                      CommandOrigin const &,
                      int,
                      std::string &,
                      std::vector<std::string> &) const {
        auto data      = getEnumData(token);
        *(int *)target = (int)data;
        return true;
    }
    unsigned addEnumValues(std::string const &name,
                           typeid_t<CommandRegistry> tid,
                           std::initializer_list<std::string> const &values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        uint64_t idx = 0;
        for (auto &value : values)
            converted.emplace_back(value, ++idx);
        return addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnumInt).val;
    }
    inline void registerOverload(std::string const &name,
                                 Overload::FactoryFn factory,
                                 std::vector<CommandParameterData> &&args) {
        Signature *signature = const_cast<Signature *>(findCommand(name));
        if (!signature) {
            printf("no command found %s", name.c_str());
            exit(0);
        }
        auto &overload = signature->overloads.emplace_back(
            CommandVersion{}, factory, std::forward<std::vector<CommandParameterData>>(args));
        registerOverloadInternal(*signature, overload);
    }
};

struct CommandParameterData {
    using ParseFn = bool (CommandRegistry::*)(void *,
                                              CommandRegistry::ParseToken const &,
                                              CommandOrigin const &,
                                              int,
                                              std::string &,
                                              std::vector<std::string> &) const;
    typeid_t<CommandRegistry> tid;  // 0
    ParseFn parser;                 // 8
    std::string name;               // 16
    char const *desc;               // 48
    int unk56;                      // 56
    CommandParameterDataType type;  // 60
    int offset;                     // 64
    int flag_offset;                // 68
    bool mand;                      // 72
    bool pad73;                     // 73
    CommandParameterData() : tid(0) {}
    CommandParameterData(typeid_t<CommandRegistry> tid,
                         ParseFn parser,
                         std::string_view desc_,
                         CommandParameterDataType type,
                         char const *enumname,
                         int offset,
                         bool optional,
                         int flag_offset)
        : tid(tid),
          parser(parser),
          name(desc_),
          desc(enumname),
          unk56(-1),
          type(type),
          offset(offset),
          flag_offset(flag_offset),
          mand(optional),
          pad73(false) {}
};
static_assert(offsetof(CommandParameterData, pad73) == 73);
static_assert(offsetof(CommandParameterData, name) == 16);
static_assert(offsetof(CommandParameterData, unk56) == 56);
