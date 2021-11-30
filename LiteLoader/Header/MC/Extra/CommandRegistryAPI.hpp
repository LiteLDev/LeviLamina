//Extra Part For CommandRegistry.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here
#include "Command.hpp"
#include "CommandOrigin.hpp"
#include "CommandParameterData.hpp"
#include "CommandRegHelper.hpp"
#include <memory>

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

    template <typename T>
    inline static std::unique_ptr<Command> allocateCommand() {
        return std::make_unique<T>();
    }

    inline void registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args)
    {
        Signature* signature = const_cast<Signature*>(findCommand(name));
        auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
        registerOverloadInternal(*signature, overload);
    }

    template <typename T, typename... Params>
    inline void registerOverload(std::string const& name, Params... params) {
        registerOverload(name, &allocateCommand<T>, { params... });
    }
#endif
