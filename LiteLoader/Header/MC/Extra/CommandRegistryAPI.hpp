//Extra Part For CommandRegistry.hpp
#ifdef EXTRA_INCLUDE_PART_COMMANDREGISTRY
// Include Headers or Declare Types Here
#include <memory>
#include "../Command.hpp"
#include "../CommandPosition.hpp"
#include "../CommandMessage.hpp"
#include "../CommandSelector.hpp"
#include "../CommandOrigin.hpp"
class CommandParameterData;

template <typename T>
class typeid_t {
public:
    unsigned short value;
    typeid_t<T>(typeid_t<T> const& id)
        : value(id.value) {
    }
    typeid_t<T>(unsigned short value)
        : value(value) {
    }
};

#else
// Add Member There
public:
    struct ParseToken {};

    using ParseFn = bool (CommandRegistry::*)(
        void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;

    class Symbol {
    public:
        unsigned val;
    };

    struct Overload {
        using FactoryFn = std::unique_ptr<Command>(*)(void);

        CommandVersion version;                    // 0
        FactoryFn factory;                         // 8
        std::vector<CommandParameterData> params;  // 16
        unsigned char unk;                         // 40
        double  a = 0;                             // 48
        double  b = 0;                             // 56
        double  c = 0;                             // 64
        inline Overload(CommandVersion version,
            FactoryFn factory,
            std::vector<CommandParameterData>&& args)
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

    inline void registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args) {
        Signature* signature = const_cast<Signature*>(findCommand(name));
        auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
        registerOverloadInternal(*signature, overload);
    }
    template <typename T>
    inline std::unique_ptr<Command> allocateCommand() {
        return std::make_unique<T>();
    }
    template <typename T, typename... Params>
    inline void registerOverload(std::string const& name, Params... params) {
        registerOverload(name, &allocateCommand<T>, {params...});
    }
    struct ParseTable {};
    inline static std::unordered_map<string, void*> parse_ptr = {
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
             "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandPosition).name(),
         dlsym_real(
             "??$parse@VCommandPosition@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
             "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
             "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@"
             "std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    };
    template <typename T>
    inline static ParseFn getParseFn(){
        bool (CommandRegistry::*ptr)(void*, CommandRegistry::ParseToken const&,
                                     CommandOrigin const&, int, std::string&,
                                     std::vector<std::string>&) const;
        *(void**)&ptr = parse_ptr[typeid(T).name()];
        if (!ptr) {
            printf("Cant parse cmd data %s\n", typeid(T).name());
            std::this_thread::sleep_for(std::chrono::seconds(10));
            exit(1);
        }
        return ptr;
    }
    bool parseEnumInt(void* target,
                      CommandRegistry::ParseToken const& token,
                      CommandOrigin const&,
                      int,
                      std::string&,
                      std::vector<std::string>&) const {
        auto data = getEnumData(token);
        *(int*)target = (int)data;
        return true;
    }
#endif
