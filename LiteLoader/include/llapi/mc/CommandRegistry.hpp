/**
 * @file  CommandRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include <memory>
#include "typeid_t.hpp"
// Include Headers or Declare Types Here
class CommandParameterData;
#include "CommandFlag.hpp"
#include "CommandPosition.hpp"
#include "CommandPositionFloat.hpp"
#include "CommandMessage.hpp"
#include "CommandSelector.hpp"
#include "CommandOrigin.hpp"
#include "CommandVersion.hpp"
#include "CommandRawText.hpp"
#include "CommandItem.hpp"
#include "CommandIntegerRange.hpp"
#include "ActorDamageSource.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandRegistry.
 *
 */
class CommandRegistry {

#define AFTER_EXTRA
    // Add Member There

public:
    struct ParseTable;
    class Symbol {
    public:
        unsigned val;
        MCAPI Symbol(unsigned __int64 = -1);
        MCAPI Symbol(class Symbol const&);
        MCAPI unsigned __int64 toIndex() const;
        MCAPI int value() const;
        inline bool operator==(Symbol const& right) const {
            return val == right.val;
        }
        [[nodiscard]] inline std::string toString() const {
            return Global<CommandRegistry>->symbolToString(*this);
        }
        [[nodiscard]] inline std::string toDebugString() const {
            return fmt::format("<Symbol {}({})>", toString(), val);
        }
    };

    struct ParseToken {
        std::unique_ptr<CommandRegistry::ParseToken> child;
        std::unique_ptr<CommandRegistry::ParseToken> next;
        CommandRegistry::ParseToken* parent;
        const char* text; // 24
        uint32_t length;  // 32
        Symbol type;      // 36
        MCAPI std::string toString() const;
        //{
        //    if (text)
        //        return std::string(text, length);
        //    auto v6 = child.get();
        //    auto v8 = child.get();
        //    while (v8->child)
        //    {
        //        v8 = v8->child.get();
        //    }
        //    while (v6->child || v6->next)
        //    {
        //        v6 = v6->next ? v6->next.get() : v6->child.get();
        //    }
        //    auto v10 = v6->text + v6->length;
        //    auto v11 = v8->text;
        //    return std::string(v11, v10 - v11);
        //};
        [[nodiscard]] inline std::string toDebugString() const {
            return fmt::format("<ParseToken {}>", toString());
        }
    };
    static_assert(sizeof(ParseToken) == 40);
    using ParseFn = bool (CommandRegistry::*)(
        void*, ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;

    struct Overload {
        using FactoryFn = std::unique_ptr<class Command> (*)();

        CommandVersion version;                   // 0
        FactoryFn factory;                        // 8
        std::vector<CommandParameterData> params; // 16
        unsigned char unk;                        // 40
        std::vector<Symbol> syms = {};            // 48

        LIAPI Overload(CommandVersion version,
                       FactoryFn factory,
                       std::vector<CommandParameterData>&& args);

        LIAPI ~Overload();

        inline std::string toDebugString() {
            return fmt::format("<Overload>");
        }
    };

    struct Signature {
        std::string name;                // 0
        std::string desc;                // 32
        std::vector<Overload> overloads; // 64
        CommandPermissionLevel perm;     // 88
        Symbol main_symbol;              // 92
        Symbol alt_symbol;               // 96
        CommandFlag flag;                // 100
        int unk72;
        int unk76;
        int unk80;
        bool b84;

        inline Signature(std::string_view name,
                         std::string_view desc,
                         CommandPermissionLevel perm,
                         Symbol symbol,
                         CommandFlag flag)
        : name(name), desc(desc), perm(perm), main_symbol(symbol), flag(flag) {
        }

        inline std::string toDebugString() const {
            return fmt::format("<Signature {}>", name);
        }
    };

    struct SoftEnum {
        std::string name;              // 0
        std::vector<std::string> list; // 32
    };

    struct Enum {
        std::string name;                                                                           // 0
        typeid_t<CommandRegistry> type;                                                             // 32
        ParseFn parse;                                                                              // 40
        std::vector<std::tuple<unsigned long, unsigned long, unsigned long, unsigned long>> values; // 48

        inline std::string toDebugString() const {
            return fmt::format("<Enum {}>", name);
        }
    };

    LIAPI static std::vector<std::string> getEnumNames();
    LIAPI static std::vector<std::string> getSoftEnumNames();
    LIAPI static std::vector<std::string> getEnumValues(std::string const& name);
    LIAPI static std::vector<std::string> getSoftEnumValues(std::string const& name);
    LIAPI static std::string getCommandFullName(std::string const& name);
    // Experiment
    LIAPI bool unregisterCommand(std::string const& name);

    template <typename Type>
    struct DefaultIdConverter {
        template <typename Target, typename Source>
        static Target convert(Source source) {
            return (Target)source;
        }
        uint64_t operator()(Type value) const {
            return convert<uint64_t, Type>(value);
        }
        Type operator()(uint64_t value) const {
            return convert<Type, uint64_t>(value);
        }
    };

#ifdef COMMAND_REGISTRY_EXTRA
    inline static std::string toString(std::vector<Symbol> const& syms) {
        std::ostringstream oss;
        bool first = true;
        for (auto& sym : syms) {
            if (!first)
                oss << ", ";
            oss << sym.toString();
            first = false;
        }
        return oss.str();
    }
    struct ParseRule {
        Symbol sym;
        std::function<ParseToken*(ParseToken&, Symbol)> func;
        std::vector<Symbol> syms;
        CommandVersion version;
        inline std::string toDebugString() const {

            return fmt::format("<ParseRule {} - [{}]>", sym.toDebugString(), toString(syms));
        }
    };
    struct ParseTable {
        std::map<Symbol, std::vector<Symbol>> first;
        std::map<Symbol, std::vector<Symbol>> follow;
        std::map<std::pair<Symbol, Symbol>, int> predict;
        inline std::string toDebugString() const {
            std::ostringstream oss;
            bool f = true;
            for (auto& [k, v] : first) {
                if (!f)
                    oss << ", ";
                oss << k.toString() << ":[" << toString(v) << "]";
                f = false;
            }
            oss << "\n";
            for (auto& [k, v] : follow) {
                if (!f)
                    oss << ", ";
                oss << k.toString() << ":[" << toString(v) << "]";
                f = false;
            }
            return fmt::format("<ParseTable>[{}]", oss.str());
        }
    };
    struct OptionalParameterChain {
        int parameterCount;
        int followingRuleIndex;
        Symbol paramSymbol;
        inline std::string toDebugString() const {
            return fmt::format("<OptionalParameterChain {},{},{}>", parameterCount, followingRuleIndex, paramSymbol.toDebugString());
        }
    };
    struct Factorization {
        Symbol sym;
        inline std::string toDebugString() const {
            return fmt::format("<Factorization {}>", sym.toDebugString());
        }
    };
    struct RegistryState {
        int signatureCount;
        int enumValueCount;
        int postfixCount;
        int enumCount;
        int factorizationCount;
        int optionalCount;
        int ruleCount;
        int softEnumCount;
        int constraintCount;
        std::vector<unsigned int> constrainedValueCount;
        std::vector<unsigned int> softEnumValuesCount;
    };
    struct ConstrainedValue {
        Symbol mValue;
        Symbol mEnum;
        std::vector<unsigned char> mConstraints;
        inline std::string toDebugString() const {
            std::ostringstream oss;
            bool first = true;
            for (auto& i : mConstraints) {
                if (!first)
                    oss << ", ";
                oss << (int)i;
                first = false;
            }
            return fmt::format("<ConstrainedValue {} - {} - [{}]>", mValue.toDebugString(), mEnum.toDebugString(), oss.str());
        }
    };

    using CommandOverrideFunctor = std::function<void __cdecl(struct CommandFlag&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&)>;
    using ParamSymbols = std::array<Symbol, 21>;

    std::function<void(const class Packet&)> mGetScoreForObjective;  // 0
    std::function<void(const class Packet&)> mNetworkUpdateCallback; // 64
    std::vector<ParseRule> mRules;                                   // 128
    // map<command version, ParseTable>
    std::map<unsigned int, ParseTable> mParseTableMap;                                      // 152
    std::vector<OptionalParameterChain> mOptionals;                                         // 168
    std::vector<std::string> mEnumValues;                                                   // 192
    std::vector<Enum> mEnums;                                                               // 216
    std::vector<Factorization> mFactorizations;                                             // 240
    std::vector<std::string> mPostfixes;                                                    // 264
    std::map<std::string, unsigned int> mEnumLookup;                                        // 288
    std::map<std::string, unsigned long> mEnumValueLookup;                                  // 304
    std::vector<Symbol> mCommandSymbols;                                                    // 320
    std::map<std::string, Signature> mSignatures;                                           // 344
    std::map<typeid_t<CommandRegistry>, int> mTypeLookup;                                   // 360
    std::map<char, char> unk376;                                                            // 376
    std::map<std::string, std::string> mAliases;                                            // 392
    std::vector<SemanticConstraint> mSemanticConstraints;                                   // 408
    std::map<SemanticConstraint, unsigned char> mSemanticConstraintLookup;                  // 432
    std::vector<ConstrainedValue> mConstrainedValues;                                       // 448
    std::map<std::pair<unsigned long, unsigned int>, unsigned int> mConstrainedValueLookup; // 472
    std::vector<SoftEnum> mSoftEnums;                                                       // 488
    std::map<std::string, unsigned int> mSoftEnumLookup;                                    // 512
    std::vector<RegistryState> mStateStack;                                                 // 528
    ParamSymbols mArgs;                                                                     // 552
    CommandOverrideFunctor mCommandOverrideFunctor;                                         // 640
    // 704

    inline void printAll() const;
    inline void printSize() const;

    void test() {
        auto mParseTableMapCopy = mParseTableMap;
        auto mEnumLookupCopy = mEnumLookup;
        auto mEnumValueLookupCopy = mEnumValueLookup;
        auto mSignaturesCopy = mSignatures;
        auto mTypeLookupCopy = mTypeLookup;
        auto unk376Copy = unk376;
        auto mAliasesCopy = mAliases;
        auto mSemanticConstraintLookupCopy = mSemanticConstraintLookup;
        auto mConstrainedValueLookupCopy = mConstrainedValueLookup;
        auto mSoftEnumLookupCopy = mSoftEnumLookup;

        constexpr auto size = sizeof(CommandRegistry);

        static_assert(sizeof(Enum) == 72);
        static_assert(sizeof(ParseTable) == 48);
        static_assert(sizeof(ParseRule) == 104);
        static_assert(sizeof(CommandRegistry) == 0x2c0);
        static_assert(offsetof(CommandRegistry, mGetScoreForObjective) == 0);
        static_assert(offsetof(CommandRegistry, mNetworkUpdateCallback) == 64);
        static_assert(offsetof(CommandRegistry, mRules) == 128);
        static_assert(offsetof(CommandRegistry, mParseTableMap) == 152);
        static_assert(offsetof(CommandRegistry, mOptionals) == 168);
        static_assert(offsetof(CommandRegistry, mEnumValues) == 192);
        static_assert(offsetof(CommandRegistry, mEnums) == 216);
        static_assert(offsetof(CommandRegistry, mFactorizations) == 240);
        static_assert(offsetof(CommandRegistry, mPostfixes) == 264);
        static_assert(offsetof(CommandRegistry, mEnumLookup) == 288);
        static_assert(offsetof(CommandRegistry, mEnumValueLookup) == 304);
        static_assert(offsetof(CommandRegistry, mCommandSymbols) == 320);
        static_assert(offsetof(CommandRegistry, mSignatures) == 344);
        static_assert(offsetof(CommandRegistry, mTypeLookup) == 360);
        static_assert(offsetof(CommandRegistry, unk376) == 376);
        static_assert(offsetof(CommandRegistry, mAliases) == 392);
        static_assert(offsetof(CommandRegistry, mSemanticConstraints) == 408);
        static_assert(offsetof(CommandRegistry, mSemanticConstraintLookup) == 432);
        static_assert(offsetof(CommandRegistry, mConstrainedValues) == 448);
        static_assert(offsetof(CommandRegistry, mConstrainedValueLookup) == 472);
        static_assert(offsetof(CommandRegistry, mSoftEnums) == 488);
        static_assert(offsetof(CommandRegistry, mSoftEnumLookup) == 512);
        static_assert(offsetof(CommandRegistry, mStateStack) == 528);
        static_assert(offsetof(CommandRegistry, mArgs) == 552);
        static_assert(offsetof(CommandRegistry, mCommandOverrideFunctor) == 640);
    }
#endif // COMMAND_REGISTRY_EXTRA

    template <typename T>
    inline static std::unique_ptr<class Command> allocateCommand() {
        return std::make_unique<T>();
    }

    LIAPI void registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args);

    template <typename T, typename... Params>
    inline void registerOverload(std::string const& name, Params... params) {
        registerOverload(name, &allocateCommand<T>, {params...});
    }

    template <typename Type>
    bool
        fakeParse(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&) const {
        return false;
    }
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
        {typeid(bool).name(),
         dlsym_real("??$parse@_N@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
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
        {typeid(CommandPositionFloat).name(),
         dlsym_real(
             "??$parse@VCommandPositionFloat@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
             "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
             "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@"
             "V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(Json::Value).name(),
         dlsym_real(
             "??$parse@VValue@Json@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
             "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
             "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
             "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(std::unique_ptr<class Command>).name(),
         dlsym_real(
             "??$parse@V?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(RelativeFloat).name(),
         dlsym_real(
             "??$parse@VRelativeFloat@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandRawText).name(),
         dlsym_real(
             "??$parse@VCommandRawText@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(class Block const*).name(),
         dlsym_real(
             "??$parse@PEBVBlock@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(class MobEffect const*).name(),
         dlsym_real(
             "??$parse@PEBVMobEffect@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandItem).name(),
         dlsym_real(
             "??$parse@VCommandItem@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(WildcardCommandSelector<Actor>).name(),
         dlsym_real(
             "??$parse@V?$WildcardCommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(ActorDefinitionIdentifier const*).name(),
         dlsym_real(
             "??$parse@PEBUActorDefinitionIdentifier@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    };

private:
    template <typename T>
    bool parse(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&) const {

    };

public:
    template <typename T>
    inline static ParseFn getParseFn() {
        if constexpr (!std::is_same_v<enum class CommandOperator, T> && std::is_enum_v<T>)
            return &fakeParse<T>;
        // else
        //     return &parse<T>;
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
    bool parseEnumString(void* target,
                         CommandRegistry::ParseToken const& token,
                         CommandOrigin const&,
                         int,
                         std::string&,
                         std::vector<std::string>&) const {
        auto data = token.toString();
        *(std::string*)target = data;
        return true;
    }
    bool parseEnumStringAndInt(void* target,
                               CommandRegistry::ParseToken const& token,
                               CommandOrigin const&,
                               int,
                               std::string&,
                               std::vector<std::string>&) const {
        auto str = token.toString();
        auto data = getEnumData(token);
        *(std::pair<std::string, int>*)target = {str, (int)data};
        return true;
    }

    template <typename Type, typename IDConverter = CommandRegistry::DefaultIdConverter<Type>>
    bool parseEnum(
        void* target, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const {
        // fmt::print(token.toString() + '\n');
        auto data = getEnumData(token);
        *(Type*)target = IDConverter{}(data);
        return true;
    }

    template <typename Type, typename IDConverter = CommandRegistry::DefaultIdConverter<Type>>
    unsigned addEnumValues(
        std::string const& name, typeid_t<CommandRegistry> tid,
        std::vector<std::pair<std::string, Type>> const& values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        IDConverter converter;
        for (auto& value : values)
            converted.emplace_back(value.first, converter(value.second));
        return _addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnum<Type, IDConverter>).val;
    }
    unsigned addEnumValues(std::string const& name,
                           typeid_t<CommandRegistry> tid,
                           std::initializer_list<std::string> const& values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        uint64_t idx = 0;
        for (auto& value : values)
            converted.emplace_back(value, ++idx);
        return _addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnumInt).val;
    }

    // inline static typeid_t<CommandRegistry> getNextTypeId() {
    //     return typeid_t<CommandRegistry>::count++;
    // }

    template <typename T>
    CommandRegistry* addEnum(char const* name, std::vector<std::pair<std::string, T>> const& values) {
        this->addEnumValues<T>(name, type_id<CommandRegistry, T>(), values);
        return this;
    }

    friend class DynamicCommand;
    friend class DynamicCommandInstance;


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDREGISTRY
public:
    class CommandRegistry& operator=(class CommandRegistry const &) = delete;
    CommandRegistry(class CommandRegistry const &) = delete;
#endif

public:
    /**
     * @hash   1471528836
     * @symbol ??0CommandRegistry@@QEAA@XZ
     */
    MCAPI CommandRegistry();
    /**
     * @hash   217149377
     * @symbol ?addEnumValueConstraints@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@W4SemanticConstraint@@@Z
     */
    MCAPI void addEnumValueConstraints(std::string const &, std::vector<std::string> const &, enum SemanticConstraint);
    /**
     * @hash   -1898541035
     * @symbol ?addEnumValues@CommandRegistry@@QEAAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI int addEnumValues(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   -651447119
     * @symbol ?addSoftEnum@CommandRegistry@@QEAAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI int addSoftEnum(std::string const &, std::vector<std::string>);
    /**
     * @hash   -1553871136
     * @symbol ?addSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI void addSoftEnumValues(std::string const &, std::vector<std::string>);
    /**
     * @hash   1550769347
     * @symbol ?addSpectatorModeEnumValue@CommandRegistry@@QEAAXXZ
     */
    MCAPI void addSpectatorModeEnumValue();
    /**
     * @hash   -1554095446
     * @symbol ?buildSelector@CommandRegistry@@QEBA_NAEBUActorSelectorArgs@@PEAVCommandSelectorBase@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool buildSelector(struct ActorSelectorArgs const &, class CommandSelectorBase *, std::string &) const;
    /**
     * @hash   1324164824
     * @symbol ?getAliases@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::vector<std::string> getAliases(std::string const &) const;
    /**
     * @hash   1538680428
     * @symbol ?getAlphabeticalLookup@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCommandOrigin@@@Z
     */
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const &) const;
    /**
     * @hash   -113344439
     * @symbol ?getCommandName@CommandRegistry@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string getCommandName(std::string const &) const;
    /**
     * @hash   1350391548
     * @symbol ?getCommandOverloadSyntaxInformation@CommandRegistry@@QEBA?AUCommandSyntaxInformation@@AEBVCommandOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct CommandSyntaxInformation getCommandOverloadSyntaxInformation(class CommandOrigin const &, std::string const &) const;
    /**
     * @hash   111398003
     * @symbol ?getCommandStatus@CommandRegistry@@QEBA?AW4CommandStatus@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI enum CommandStatus getCommandStatus(std::string const &) const;
    /**
     * @hash   -705011682
     * @symbol ?isCommandOfType@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CommandTypeFlag@@@Z
     */
    MCAPI bool isCommandOfType(std::string const &, enum CommandTypeFlag) const;
    /**
     * @hash   187274015
     * @symbol ?isValidCommand@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isValidCommand(std::string const &) const;
    /**
     * @hash   -1291457596
     * @symbol ?registerAlias@CommandRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI void registerAlias(std::string, std::string);
    /**
     * @hash   48780604
     * @symbol ?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z
     */
    MCAPI void registerCommand(std::string const &, char const *, enum CommandPermissionLevel, struct CommandFlag, struct CommandFlag);
    /**
     * @hash   -444001900
     * @symbol ?removeSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI void removeSoftEnumValues(std::string const &, std::vector<std::string>);
    /**
     * @hash   2118972369
     * @symbol ?requiresCheatsEnabled@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool requiresCheatsEnabled(std::string const &) const;
    /**
     * @hash   2105299264
     * @symbol ?serializeAvailableCommands@CommandRegistry@@QEBA?AVAvailableCommandsPacket@@XZ
     */
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;
    /**
     * @hash   1990111902
     * @symbol ?setCommandRegistrationOverride@CommandRegistry@@QEAAXV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     */
    MCAPI void setCommandRegistrationOverride(class std::function<void (struct CommandFlag &, std::string const &)>);
    /**
     * @hash   -1601289655
     * @symbol ?setNetworkUpdateCallback@CommandRegistry@@QEAAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
     */
    MCAPI void setNetworkUpdateCallback(class std::function<void (class Packet const &)>);
    /**
     * @hash   384146525
     * @symbol ?setScoreCallback@CommandRegistry@@QEAAXV?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@std@@@Z
     */
    MCAPI void setScoreCallback(class std::function<int (bool &, std::string const &, class Actor const &)>);
    /**
     * @hash   1561843842
     * @symbol ?setSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI void setSoftEnumValues(std::string const &, std::vector<std::string>);
    /**
     * @hash   -1194033564
     * @symbol ??1CommandRegistry@@QEAA@XZ
     */
    MCAPI ~CommandRegistry();
    /**
     * @hash   634810018
     * @symbol ?COMMAND_NAME_ENUM_NAME@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * COMMAND_NAME_ENUM_NAME;
    /**
     * @hash   1434550350
     * @symbol ?FUNCTION_NAME_SOFTENUM_NAME@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * FUNCTION_NAME_SOFTENUM_NAME;
    /**
     * @hash   1200135676
     * @symbol ?HASITEM_PARAM_DATA@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_DATA;
    /**
     * @hash   -890251002
     * @symbol ?HASITEM_PARAM_ITEM@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_ITEM;
    /**
     * @hash   -1045517982
     * @symbol ?HASITEM_PARAM_LOCATION@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_LOCATION;
    /**
     * @hash   1547483782
     * @symbol ?HASITEM_PARAM_QUANTITY@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_QUANTITY;
    /**
     * @hash   -107044420
     * @symbol ?HASITEM_PARAM_SLOT@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_SLOT;
    /**
     * @hash   801013070
     * @symbol ?TAG_VALUES_SOFTENUM_NAME@CommandRegistry@@2PEBDEB
     */
    MCAPI static char const * TAG_VALUES_SOFTENUM_NAME;

//private:
    /**
     * @hash   1090872952
     * @symbol ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const &, std::vector<struct std::pair<std::string, unsigned __int64>> const &, class typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const);
    /**
     * @hash   -1010351160
     * @symbol ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const &, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const &, class typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const);
    /**
     * @hash   1976818034
     * @symbol ?_addFunctionSoftEnum@CommandRegistry@@AEAA?AVSymbol@1@XZ
     */
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();
    /**
     * @hash   1041151006
     * @symbol ?_getConstrainedParamEnumSymbol@CommandRegistry@@AEBA?AVSymbol@1@V21@@Z
     */
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const;
    /**
     * @hash   1289408699
     * @symbol ?_isCommandElementValid@CommandRegistry@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool _isCommandElementValid(std::string const &) const;
    /**
     * @hash   -851089027
     * @symbol ?_matchesEnumConstraintsSet@CommandRegistry@@AEBA_NAEBVSymbol@1@AEBVCommandOrigin@@0W4SemanticConstraint@@@Z
     */
    MCAPI bool _matchesEnumConstraintsSet(class CommandRegistry::Symbol const &, class CommandOrigin const &, class CommandRegistry::Symbol const &, enum SemanticConstraint) const;
    /**
     * @hash   -1419483221
     * @symbol ?addEnumValuesToExisting@CommandRegistry@@AEAAXIAEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@std@@@Z
     */
    MCAPI void addEnumValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const &);
    /**
     * @hash   337895067
     * @symbol ?addPostfix@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const &);
    /**
     * @hash   -65463169
     * @symbol ?addRule@CommandRegistry@@AEAAXVSymbol@1@$$QEAV?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@std@@V?$function@$$A6APEAUParseToken@CommandRegistry@@AEAU12@VSymbol@2@@Z@4@VCommandVersion@@@Z
     */
    MCAPI void addRule(class CommandRegistry::Symbol, std::vector<class CommandRegistry::Symbol> &&, class std::function<struct CommandRegistry::ParseToken * (struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol)>, class CommandVersion);
    /**
     * @hash   927616881
     * @symbol ?addSemanticConstraint@CommandRegistry@@AEAAXW4SemanticConstraint@@@Z
     */
    MCAPI void addSemanticConstraint(enum SemanticConstraint);
    /**
     * @hash   1776235944
     * @symbol ?addSoftTerminal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const &);
    /**
     * @hash   1376320078
     * @symbol ?buildFirstSet@CommandRegistry@@AEBAXAEAUParseTable@1@VSymbol@1@I@Z
     */
    MCAPI void buildFirstSet(struct CommandRegistry::ParseTable &, class CommandRegistry::Symbol, unsigned int) const;
    /**
     * @hash   710775549
     * @symbol ?buildFollowSet@CommandRegistry@@AEBAXAEAUParseTable@1@VSymbol@1@IAEAV?$set@VSymbol@CommandRegistry@@U?$less@VSymbol@CommandRegistry@@@std@@V?$allocator@VSymbol@CommandRegistry@@@4@@std@@@Z
     */
    MCAPI void buildFollowSet(struct CommandRegistry::ParseTable &, class CommandRegistry::Symbol, unsigned int, class std::set<class CommandRegistry::Symbol, struct std::less<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>> &) const;
    /**
     * @hash   -2113139198
     * @symbol ?buildOptionalRuleChain@CommandRegistry@@AEAA?AVSymbol@1@AEBUSignature@1@AEBV?$vector@VCommandParameterData@@V?$allocator@VCommandParameterData@@@std@@@std@@AEBV?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@5@@Z
     */
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(struct CommandRegistry::Signature const &, std::vector<class CommandParameterData> const &, std::vector<class CommandRegistry::Symbol> const &);
    /**
     * @hash   2094074705
     * @symbol ?buildOverload@CommandRegistry@@AEAAXAEAUOverload@1@@Z
     */
    MCAPI void buildOverload(struct CommandRegistry::Overload &);
    /**
     * @hash   1731230972
     * @symbol ?buildParseTable@CommandRegistry@@AEBAXI@Z
     */
    MCAPI void buildParseTable(unsigned int) const;
    /**
     * @hash   1339403848
     * @symbol ?buildRules@CommandRegistry@@AEAA?AVSymbol@1@AEAUSignature@1@AEBV?$vector@PEAUOverload@CommandRegistry@@V?$allocator@PEAUOverload@CommandRegistry@@@std@@@std@@_K@Z
     */
    MCAPI class CommandRegistry::Symbol buildRules(struct CommandRegistry::Signature &, std::vector<struct CommandRegistry::Overload *> const &, unsigned __int64);
    /**
     * @hash   2085605810
     * @symbol ?checkOriginCommandFlags@CommandRegistry@@AEBA_NAEBVCommandOrigin@@UCommandFlag@@W4CommandPermissionLevel@@@Z
     */
    MCAPI bool checkOriginCommandFlags(class CommandOrigin const &, struct CommandFlag, enum CommandPermissionLevel) const;
    /**
     * @hash   -1544501703
     * @symbol ?createCommand@CommandRegistry@@AEBA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI std::unique_ptr<class Command> createCommand(struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const;
    /**
     * @hash   -331261280
     * @symbol ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSignature@1@AEBV23@AEBUOverload@1@IPEAI3@Z
     */
    MCAPI std::string describe(struct CommandRegistry::Signature const &, std::string const &, struct CommandRegistry::Overload const &, unsigned int, unsigned int *, unsigned int *) const;
    /**
     * @hash   1807046021
     * @symbol ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandParameterData@@@Z
     */
    MCAPI std::string describe(class CommandParameterData const &) const;
    /**
     * @hash   -765773593
     * @symbol ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSymbol@1@@Z
     */
    MCAPI std::string describe(class CommandRegistry::Symbol) const;
    /**
     * @hash   -319025317
     * @symbol ?findCommand@CommandRegistry@@AEAAPEAUSignature@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct CommandRegistry::Signature * findCommand(std::string const &);
    /**
     * @hash   -558092483
     * @symbol ?findCommand@CommandRegistry@@AEBAPEBUSignature@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct CommandRegistry::Signature const * findCommand(std::string const &) const;
    /**
     * @hash   1282761047
     * @symbol ?findEnumValue@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const &) const;
    /**
     * @hash   1722663614
     * @symbol ?findIdentifierInfo@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const &) const;
    /**
     * @hash   -59909550
     * @symbol ?findPostfix@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const &) const;
    /**
     * @hash   -393481723
     * @symbol ?first@CommandRegistry@@AEBA?AV?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@std@@AEAUParseTable@1@AEBV23@@Z
     */
    MCAPI std::vector<class CommandRegistry::Symbol> first(struct CommandRegistry::ParseTable &, std::vector<class CommandRegistry::Symbol> const &) const;
    /**
     * @hash   636599599
     * @symbol ?forEachNonTerminal@CommandRegistry@@AEBAXV?$function@$$A6AXVSymbol@CommandRegistry@@@Z@std@@@Z
     */
    MCAPI void forEachNonTerminal(class std::function<void (class CommandRegistry::Symbol)>) const;
    /**
     * @hash   1687213958
     * @symbol ?getEnumData@CommandRegistry@@AEBA_KAEBUParseToken@1@@Z
     */
    MCAPI unsigned __int64 getEnumData(struct CommandRegistry::ParseToken const &) const;
    /**
     * @hash   284981834
     * @symbol ?getInvertableFilter@CommandRegistry@@AEBA?AU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@AEBUParseToken@1@@Z
     */
    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const &) const;
    /**
     * @hash   582543394
     * @symbol ?isValid@CommandRegistry@@AEBA_NVSymbol@1@@Z
     */
    MCAPI bool isValid(class CommandRegistry::Symbol) const;
    /**
     * @hash   1159854720
     * @symbol ?originCanRun@CommandRegistry@@AEBA_NAEBVCommandOrigin@@AEBUOverload@1@@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const &, struct CommandRegistry::Overload const &) const;
    /**
     * @hash   1583481004
     * @symbol ?originCanRun@CommandRegistry@@AEBA_NAEBVCommandOrigin@@AEBUSignature@1@@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const &, struct CommandRegistry::Signature const &) const;
    /**
     * @hash   311313937
     * @symbol ?parseSelector@CommandRegistry@@AEBA_NAEAUActorSelectorArgs@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
     */
    MCAPI bool parseSelector(struct ActorSelectorArgs &, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const;
    /**
     * @hash   1493443120
     * @symbol ?parseSelector@CommandRegistry@@AEBA_NPEAVCommandSelectorBase@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@_N@Z
     */
    MCAPI bool parseSelector(class CommandSelectorBase *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &, bool) const;
    /**
     * @hash   -2009086366
     * @symbol ?registerOverloadInternal@CommandRegistry@@AEAAXAEAUSignature@1@AEAUOverload@1@@Z
     */
    MCAPI void registerOverloadInternal(struct CommandRegistry::Signature &, struct CommandRegistry::Overload &);
    /**
     * @hash   1887031592
     * @symbol ?setupOverloadRules@CommandRegistry@@AEAAXAEAUSignature@1@AEAUOverload@1@@Z
     */
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature &, struct CommandRegistry::Overload &);
    /**
     * @hash   1607089470
     * @symbol ?symbolToString@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSymbol@1@@Z
     */
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;
    /**
     * @hash   -950425311
     * @symbol ?_removeStringQuotes@CommandRegistry@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI static std::string _removeStringQuotes(std::string const &);
    /**
     * @hash   1093995306
     * @symbol ?collapse@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * collapse(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol);
    /**
     * @hash   523515230
     * @symbol ?collapseOn@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * collapseOn(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @hash   1491073655
     * @symbol ?expand@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * expand(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol);
    /**
     * @hash   596589383
     * @symbol ?expandExcept@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * expandExcept(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @hash   1200559993
     * @symbol ?fold@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * fold(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @hash   1623764107
     * @symbol ?kill@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * kill(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol);
    /**
     * @hash   1884890169
     * @symbol ?readFloat@CommandRegistry@@CA_NAEAMAEBUParseToken@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    MCAPI static bool readFloat(float &, struct CommandRegistry::ParseToken const &, std::string &, std::vector<std::string> &);
    /**
     * @hash   1886848703
     * @symbol ?readInt@CommandRegistry@@CA_NAEAHAEBUParseToken@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    MCAPI static bool readInt(int &, struct CommandRegistry::ParseToken const &, std::string &, std::vector<std::string> &);
    /**
     * @hash   -2109434373
     * @symbol ?readRelativeCoordinate@CommandRegistry@@CA_NAEA_NAEAMAEBUParseToken@1@_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    MCAPI static bool readRelativeCoordinate(bool &, float &, struct CommandRegistry::ParseToken const &, bool, std::string &, std::vector<std::string> &);

private:
    /**
     * @hash   -206423100
     * @symbol ?ParseRuleSymbols@CommandRegistry@@0QBU?$pair@P8CommandRegistry@@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@ZVSymbol@1@@std@@B
     */
    MCAPI static struct std::pair<bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, class CommandRegistry::Symbol> const ParseRuleSymbols[];

};