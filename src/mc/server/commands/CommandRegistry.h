#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/AvailableCommandsPacket.h"
#include "mc/server/commands/CommandCompareOperator.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/server/commands/WildcardCommandSelector.h"

// auto generated inclusion list
#include "mc/common/InvertableFilter.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/enums/SemanticConstraint.h"
#include "mc/server/commands/CommandLexer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandStatus.h"
#include "mc/server/commands/flags/CommandTypeFlag.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CommandParameterData;
class CommandFilePath;
class CommandIntegerRange;
class CommandMessage;
class CommandPositionFloat;
class CommandRawText;
class CommandWildcardInt;
class BlockStateCommandParam;
class Packet;
class RelativeFloat;

class CommandRegistry {
public:
    // CommandRegistry inner types declare
    // clang-format off
    struct ChainedSubcommand;
    struct Enum;
    struct LexicalToken;
    struct Overload;
    class ParamSymbols;
    struct ParseRule;
    struct ParseTable;
    struct ParseToken;
    struct Signature;
    struct SoftEnum;
    class Symbol;
    class Parser;
    struct SymbolHasher;
    // clang-format on

    // CommandRegistry inner types define

    using ParseFn =
        bool (CommandRegistry::*)(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const;
    using FactoryFn       = std::unique_ptr<class Command> (*)();
    using ProcessFunction = std::function<ParseToken*(ParseToken&, Symbol)>;

    struct ChainedSubcommand {
    public:
        // prevent constructor by default
        ChainedSubcommand& operator=(ChainedSubcommand const&) = delete;
        ChainedSubcommand(ChainedSubcommand const&)            = delete;
        ChainedSubcommand()                                    = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??1ChainedSubcommand@CommandRegistry@@QEAA@XZ
        MCAPI ~ChainedSubcommand();

        // NOLINTEND
    };

    struct Enum {

        std::string                                         name;   // this+0x0
        Bedrock::typeid_t<CommandRegistry>                  type;   // this+0x20
        ParseFn                                             parse;  // this+0x28
        std::vector<std::tuple<ulong, ulong, ulong, ulong>> values; // this+0x30

    public:
        // NOLINTBEGIN
        // symbol: ??1Enum@CommandRegistry@@QEAA@XZ
        MCAPI ~Enum();

        // NOLINTEND
    };

    struct Overload {
        CommandVersion                    version;       // this+0x0
        FactoryFn                         alloc;         // this+0x8
        std::vector<CommandParameterData> params;        // this+0x10
        int                               versionOffset; // this+0x28
        std::vector<Symbol>               paramsSymbol;  // this+0x30

        LLAPI Overload(CommandVersion version, FactoryFn factory, std::vector<CommandParameterData> args);

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0Overload@CommandRegistry@@QEAA@VCommandVersion@@P6A?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@XZ@Z
        MCAPI Overload(class CommandVersion, std::unique_ptr<class Command> (*)(void));

        // NOLINTEND
    };

    class Symbol {
    public:
        int mValue{}; // this+0x0

        Symbol() = default;

        [[nodiscard]] inline bool operator==(Symbol const& right) const { return mValue == right.mValue; }

    public:
        // NOLINTBEGIN
        // symbol: ??0Symbol@CommandRegistry@@QEAA@_K@Z
        MCAPI Symbol(uint64);

        // symbol: ?toIndex@Symbol@CommandRegistry@@QEBA_KXZ
        MCAPI uint64 toIndex() const;

        // symbol: ?value@Symbol@CommandRegistry@@QEBAHXZ
        MCAPI int value() const;

        // NOLINTEND
    };

    struct LexicalToken {
        char const*            mText;           // this+0x0
        uint                   mLength;         // this+0x8
        Symbol                 mType;           // this+0xC
        Symbol                 mIdentifierInfo; // this+0x10
        CommandRegistry const& mRegistry;       // this+0x18

        LexicalToken(CommandRegistry& registry) : mRegistry(registry) {}

    public:
        // NOLINTBEGIN
        // symbol: ??4LexicalToken@CommandRegistry@@QEAAAEAU01@AEBUToken@CommandLexer@@@Z
        MCAPI struct CommandRegistry::LexicalToken& operator=(struct CommandLexer::Token const&);

        // NOLINTEND
    };

    class ParamSymbols {
    public:
        Symbol x;             // this+0x0
        Symbol y;             // this+0x4
        Symbol z;             // this+0x8
        Symbol dx;            // this+0xC
        Symbol dy;            // this+0x10
        Symbol dz;            // this+0x14
        Symbol r;             // this+0x18
        Symbol rm;            // this+0x1C
        Symbol rx;            // this+0x20
        Symbol rxm;           // this+0x24
        Symbol ry;            // this+0x28
        Symbol rym;           // this+0x2C
        Symbol l;             // this+0x30
        Symbol lm;            // this+0x34
        Symbol c;             // this+0x38
        Symbol m;             // this+0x3C
        Symbol name;          // this+0x40
        Symbol type;          // this+0x44
        Symbol family;        // this+0x48
        Symbol score;         // this+0x4C
        Symbol tag;           // this+0x50
        Symbol hasitem;       // this+0x54
        Symbol haspermission; // this+0x58

    public:
        // NOLINTBEGIN
        // symbol: ??0ParamSymbols@CommandRegistry@@QEAA@XZ
        MCAPI ParamSymbols();

        // NOLINTEND
    };

    struct ParseRule {
        Symbol              sym;     // this+0x0
        ProcessFunction     func;    // this+0x8
        std::vector<Symbol> syms;    // this+0x48
        CommandVersion      version; // this+0x60

    public:
        // NOLINTBEGIN
        // symbol: ??4ParseRule@CommandRegistry@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct CommandRegistry::ParseRule& operator=(struct CommandRegistry::ParseRule&&);

        // NOLINTEND
    };

    struct ParseTable {
        std::map<Symbol, std::vector<Symbol>>    first;   // this+0x0
        std::map<Symbol, std::vector<Symbol>>    follow;  // this+0x10
        std::map<std::pair<Symbol, Symbol>, int> predict; // this+0x20

    public:
        // NOLINTBEGIN
        // symbol: ??0ParseTable@CommandRegistry@@QEAA@XZ
        MCAPI ParseTable();

        // NOLINTEND
    };

    struct ParseToken {
        std::unique_ptr<ParseToken> child;  // this+0x0
        std::unique_ptr<ParseToken> next;   // this+0x8
        ParseToken*                 parent; // this+0x10
        char const*                 text;   // this+0x18
        uint                        length; // this+0x20
        Symbol                      type;   // this+0x24


    public:
        // NOLINTBEGIN
        // symbol:
        // ?toString@ParseToken@CommandRegistry@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string toString() const;

        // NOLINTEND
    };

    struct Signature {
        // size 160
        std::string            name;                 // this+0x0
        std::string            desc;                 // this+0x20
        std::vector<Overload>  overloads;            // this+0x40
        std::vector<void*>     unk88;                // this+0x58
        CommandPermissionLevel perm;                 // this+0x70
        Symbol                 main_symbol;          // this+0x74
        Symbol                 alt_symbol;           // this+0x78
        CommandFlag            flag;                 // this+0x7C
        int                    firstRule{};          // this+0x80
        int                    firstFactorization{}; // this+0x84
        int                    firstOptional{};      // this+0x88
        bool                   runnable{};           // this+0x8C
        size_t                 ruleCounter{};        // this+0x90

        LLAPI Signature(
            std::string_view       name,
            std::string_view       desc,
            CommandPermissionLevel perm,
            Symbol                 symbol,
            CommandFlag            flag
        );

    public:
        // NOLINTBEGIN
        // symbol: ??0Signature@CommandRegistry@@QEAA@$$QEAU01@@Z
        MCAPI Signature(struct CommandRegistry::Signature&&);

        // symbol: ??1Signature@CommandRegistry@@QEAA@XZ
        MCAPI ~Signature();

        // NOLINTEND
    };

    class Parser {
    public:
        CommandRegistry const&                     mRegistry;                 // this+0x0
        const ParseTable*                          mParseTable;               // this+0x8
        std::deque<std::pair<Symbol, ParseToken*>> mStack;                    // this+0x10
        LexicalToken                               mNext;                     // this+0x38
        std::string                                mInput;                    // this+0x58
        std::unique_ptr<ParseToken>                mRoot;                     // this+0x78
        std::string                                mError;                    // this+0x80
        std::vector<std::string>                   mErrorParams;              // this+0xA0
        int                                        mVersion;                  // this+0xB8
        bool                                       mGenerateParams;           // this+0xBC
        bool                                       mBreakAtEnd;               // this+0xBD
        std::unique_ptr<std::vector<std::string>>  mParseStepRecordingBuffer; // this+0xC0


    public:
        // NOLINTBEGIN
        // symbol: ??0Parser@CommandRegistry@@QEAA@AEBV1@H@Z
        MCAPI Parser(class CommandRegistry const&, int);

        // symbol:
        // ?createCommand@Parser@CommandRegistry@@QEAA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBVCommandOrigin@@@Z
        MCAPI std::unique_ptr<class Command> createCommand(class CommandOrigin const&);

        // symbol:
        // ?createSelector@Parser@CommandRegistry@@QEAA?AV?$unique_ptr@V?$CommandSelector@VActor@@@@U?$default_delete@V?$CommandSelector@VActor@@@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEBVCommandOrigin@@@Z
        MCAPI std::unique_ptr<class CommandSelector<class Actor>>
              createSelector(std::string const&, class CommandOrigin const&);

        // symbol:
        // ?getErrorMessage@Parser@CommandRegistry@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string const& getErrorMessage() const;

        // symbol:
        // ?getErrorParams@Parser@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
        MCAPI std::vector<std::string> getErrorParams() const;

        // symbol:
        // ?parseCommand@Parser@CommandRegistry@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool parseCommand(std::string const&);

        // symbol:
        // ?parseSelector@Parser@CommandRegistry@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool parseSelector(std::string const&);

        // symbol: ??1Parser@CommandRegistry@@QEAA@XZ
        MCAPI ~Parser();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?_findParsePrediction@Parser@CommandRegistry@@AEBA?AV?$dense_map_iterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$dense_map_node@U?$pair@VSymbol@CommandRegistry@@V12@@std@@H@internal@entt@@@std@@@std@@@std@@@internal@entt@@AEBULexicalToken@2@AEBVSymbol@2@@Z
        MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
            entt::internal::
                dense_map_node<std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>, int>>>>>
        _findParsePrediction(struct CommandRegistry::LexicalToken const&, class CommandRegistry::Symbol const&) const;

        // symbol:
        // ?_parse@Parser@CommandRegistry@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool _parse(std::string const&);

        // NOLINTEND
    };

    struct RegistryState {
    public:
        uint              signatureCount;        // this+0x0
        uint              enumValueCount;        // this+0x4
        uint              postfixCount;          // this+0x8
        uint              enumCount;             // this+0xC
        uint              factorizationCount;    // this+0x10
        uint              optionalCount;         // this+0x14
        uint              ruleCount;             // this+0x18
        uint              softEnumCount;         // this+0x1C
        uint              constraintCount;       // this+0x20
        std::vector<uint> constrainedValueCount; // this+0x28
        std::vector<uint> softEnumValuesCount;   // this+0x40

    public:
        // NOLINTBEGIN
        // symbol: ??1RegistryState@CommandRegistry@@QEAA@XZ
        MCAPI ~RegistryState();

        // NOLINTEND
    };

    struct SoftEnum {
    public:
        std::string              mName;   // this+0x0
        std::vector<std::string> mValues; // this+0x20

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0SoftEnum@CommandRegistry@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
        MCAPI SoftEnum(std::string const&, std::vector<std::string>);

        // NOLINTEND
    };

    struct SymbolHasher {
    public:
        // prevent constructor by default
        SymbolHasher& operator=(SymbolHasher const&) = delete;
        SymbolHasher(SymbolHasher const&)            = delete;
        SymbolHasher()                               = delete;
    };

    struct OptionalParameterChain {
        int    parameterCount;     // this+0x0
        int    followingRuleIndex; // this+0x4
        Symbol paramSymbol;        // this+0x8
    };

    struct Factorization {
        Symbol commandSymbol; // this+0x0
    };
    struct ConstrainedValue {
        Symbol             mValue;
        Symbol             mEnum;
        std::vector<uchar> mConstraints;
    };

    std::function<void(Packet const&)>                          mNetworkUpdateCallback;        // this+0x0
    std::function<int(bool&, std::string const&, Actor const&)> mGetScoreForObjective;         // this+0x40
    std::vector<ParseRule>                                      mRules;                        // this+0x80
    std::map<uint, ParseTable>                                  mParseTables;                  // this+0x98
    std::vector<OptionalParameterChain>                         mOptionals;                    // this+0xA8
    std::vector<std::string>                                    mEnumValues;                   // this+0xC0
    std::vector<Enum>                                           mEnums;                        // this+0xD8
    std::vector<int>                                            mUnknow_1;                     // this+0xF0
    std::vector<int>                                            mUnknow_2;                     // this+0x108
    std::vector<Factorization>                                  mFactorizations;               // this+0x120
    std::vector<std::string>                                    mPostfixes;                    // this+0x138
    std::map<std::string, uint>                                 mEnumLookup;                   // this+0x150
    std::map<std::string, ulong>                                mEnumValueLookup;              // this+0x160
    std::map<std::string, int>                                  mUnknow_3;                     // this+0x170
    std::map<std::string, int>                                  mChainedSubcommandLookUp;      // this+0x180
    std::vector<Symbol>                                         mCommandSymbols;               // this+0x190
    std::map<std::string, Signature>                            mSignatures;                   // this+0x1A8
    std::map<Bedrock::typeid_t<CommandRegistry>, int>           mTypeLookup;                   // this+0x1B8
    std::map<std::string, std::string>                          mAliases;                      // this+0x1C8
    std::vector<SemanticConstraint>                             mSemanticConstraints;          // this+0x1D8
    std::map<SemanticConstraint, uchar>                         mSemanticConstraintLookup;     // this+0x1F0
    std::vector<ConstrainedValue>                               mConstrainedValues;            // this+0x200
    std::map<std::pair<ulong, uint>, uint>                      mConstrainedValueLookup;       // this+0x218
    std::vector<SoftEnum>                                       mSoftEnums;                    // this+0x228
    std::map<std::string, uint>                                 mSoftEnumLookup;               // this+0x240
    std::vector<RegistryState>                                  mStateStack;                   // this+0x250
    ParamSymbols                                                mArgs;                         // this+0x268
    std::unordered_map<uchar, uchar>                            mSkipOnEpsAutocompleteSymbols; // this+0x2C8
    std::unordered_map<uchar, uchar>                            mAllowEmptySymbols;            // this+0x308
    std::function<void(CommandFlag&, std::string const&)>       mCommandOverrideFunctor;       // this+0x348

    // following is the command parameter overloading

    template <typename T>
    [[nodiscard]] inline static std::unique_ptr<Command> allocateCommand() {
        return std::make_unique<T>();
    };

    LLAPI void registerOverload(std::string const& name, FactoryFn factory, std::vector<CommandParameterData>&& args);

    template <typename T, typename... Params>
    inline void registerOverload(std::string const& name, Params... params) {
        registerOverload(name, &allocateCommand<T>, {params...});
    };

    // following sections add sections for directive parameter enumeration
    bool
    parseEnumStringAndInt(void* target, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const {
        auto str                              = token.toString();
        auto data                             = getEnumData(token);
        *(std::pair<std::string, int>*)target = {str, (int)data};
        return true;
    };

    template <typename Type>
    bool
    parseEnum(void* target, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const {
        auto data      = getEnumData(token);
        *(Type*)target = (Type)(data);
        return true;
    };

    template <typename T>
    CommandRegistry* addEnum(std::string const& name, std::vector<std::pair<std::string, T>> const& values) {
        std::vector<std::pair<std::string, uint64>> converted;
        converted.reserve(values.size());
        for (auto& value : values) converted.emplace_back(value.first, (uint64)(value.second));
        _addEnumValuesInternal(name, converted, Bedrock::type_id<CommandRegistry, T>(), &CommandRegistry::parseEnum<T>);
        return this;
    }

    template <typename T>
    bool
    parse(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const {
        return false;
    };

    // API
    LLNDAPI std::vector<std::string> getEnumNames();
    LLNDAPI std::vector<std::string> getSoftEnumNames();
    LLNDAPI std::vector<std::string> getEnumValues(std::string const& name);
    LLNDAPI std::vector<std::string> getSoftEnumValues(std::string const& name);
    LLNDAPI std::string getCommandFullName(std::string const& name);
    // Experiment
    LLAPI bool unregisterCommand(std::string const& name);

public:
    // prevent constructor by default
    CommandRegistry& operator=(CommandRegistry const&) = delete;
    CommandRegistry(CommandRegistry const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandRegistry@@QEAA@XZ
    MCAPI CommandRegistry();

    // symbol:
    // ?addEnumValueConstraints@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@W4SemanticConstraint@@@Z
    MCAPI void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, ::SemanticConstraint);

    // symbol:
    // ?addEnumValues@CommandRegistry@@QEAAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI int addEnumValues(std::string const&, std::vector<std::string> const&);

    // symbol:
    // ?addSoftEnum@CommandRegistry@@QEAAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI int addSoftEnum(std::string const&, std::vector<std::string>);

    // symbol:
    // ?addSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void addSoftEnumValues(std::string const&, std::vector<std::string>);

    // symbol:
    // ?buildSelector@CommandRegistry@@QEBA_NAEBUActorSelectorArgs@@PEAVCommandSelectorBase@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool buildSelector(struct ActorSelectorArgs const&, class CommandSelectorBase*, std::string&) const;

    // symbol:
    // ?enabledInEditor@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool enabledInEditor(std::string const&) const;

    // symbol: ?finalizeChainedSubcommandOverloadRules@CommandRegistry@@QEAAXPEBD@Z
    MCAPI void finalizeChainedSubcommandOverloadRules(char const*);

    // symbol: ?fireCommandParseTableTelemetry@CommandRegistry@@QEBAXAEBVIMinecraftEventing@@_N@Z
    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const&, bool) const;

    // symbol: ?generateDocumentationMetadata@CommandRegistry@@QEBA?AVValue@Json@@_N@Z
    MCAPI class Json::Value generateDocumentationMetadata(bool) const;

    // symbol:
    // ?getAliases@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::string> getAliases(std::string const&) const;

    // symbol:
    // ?getAlphabeticalLookup@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCommandOrigin@@@Z
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const;

    // symbol:
    // ?getCommandName@CommandRegistry@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI std::string getCommandName(std::string const&) const;

    // symbol:
    // ?getCommandOverloadSyntaxInformation@CommandRegistry@@QEBA?AUCommandSyntaxInformation@@AEBVCommandOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(class CommandOrigin const&, std::string const&) const;

    // symbol:
    // ?getCommandStatus@CommandRegistry@@QEBA?AW4CommandStatus@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::CommandStatus getCommandStatus(std::string const&) const;

    // symbol:
    // ?isCommandOfType@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CommandTypeFlag@@@Z
    MCAPI bool isCommandOfType(std::string const&, ::CommandTypeFlag) const;

    // symbol:
    // ?isValidCommand@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isValidCommand(std::string const&) const;

    // symbol: ?registerAlias@CommandRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void registerAlias(std::string, std::string);

    // symbol:
    // ?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z
    MCAPI void registerCommand(
        std::string const& name,
        char const*        description,
        ::CommandPermissionLevel,
        struct CommandFlag = {CommandFlagValue::None},
        struct CommandFlag = {CommandFlagValue::None} // useless, idiot
    );

    // symbol:
    // ?removeSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>);

    // symbol:
    // ?requiresCheatsEnabled@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool requiresCheatsEnabled(std::string const&) const;

    // symbol: ?serializeAvailableCommands@CommandRegistry@@QEBA?AVAvailableCommandsPacket@@XZ
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;

    // symbol:
    // ?setCommandRegistrationOverride@CommandRegistry@@QEAAXV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    MCAPI void setCommandRegistrationOverride(std::function<void(struct CommandFlag&, std::string const&)>);

    // symbol: ?setNetworkUpdateCallback@CommandRegistry@@QEAAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
    MCAPI void setNetworkUpdateCallback(std::function<void(class Packet const&)>);

    // symbol:
    // ?setScoreCallback@CommandRegistry@@QEAAXV?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@std@@@Z
    MCAPI void setScoreCallback(std::function<int(bool&, std::string const&, class Actor const&)>);

    // symbol:
    // ?setSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void setSoftEnumValues(std::string const&, std::vector<std::string>);

    // symbol: ??1CommandRegistry@@QEAA@XZ
    MCAPI ~CommandRegistry();

    // symbol: ?COMMAND_NAME_ENUM_NAME@CommandRegistry@@2PEBDEB
    MCAPI static char const* COMMAND_NAME_ENUM_NAME;

    // symbol: ?FUNCTION_NAME_SOFTENUM_NAME@CommandRegistry@@2PEBDEB
    MCAPI static char const* FUNCTION_NAME_SOFTENUM_NAME;

    // symbol: ?HASITEM_PARAM_DATA@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASITEM_PARAM_DATA;

    // symbol: ?HASITEM_PARAM_ITEM@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASITEM_PARAM_ITEM;

    // symbol: ?HASITEM_PARAM_LOCATION@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASITEM_PARAM_LOCATION;

    // symbol: ?HASITEM_PARAM_QUANTITY@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASITEM_PARAM_QUANTITY;

    // symbol: ?HASITEM_PARAM_SLOT@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASITEM_PARAM_SLOT;

    // symbol: ?HASPERMISSIONCATEGORY_ENUM_CAMERA@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_CAMERA;

    // symbol: ?HASPERMISSIONCATEGORY_ENUM_MOVEMENT@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_MOVEMENT;

    // symbol: ?HASPERMISSIONSTATE_ENUM_DISABLED@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASPERMISSIONSTATE_ENUM_DISABLED;

    // symbol: ?HASPERMISSIONSTATE_ENUM_ENABLED@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASPERMISSIONSTATE_ENUM_ENABLED;

    // symbol: ?TAG_VALUES_SOFTENUM_NAME@CommandRegistry@@2PEBDEB
    MCAPI static char const* TAG_VALUES_SOFTENUM_NAME;

    // symbol: ?UNLOCKABLE_RECIPES_SOFTENUM_NAME@CommandRegistry@@2PEBDEB
    MCAPI static char const* UNLOCKABLE_RECIPES_SOFTENUM_NAME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addChainedSubcommandValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@ZPEAUSignature@1@@Z
    MCAPI class CommandRegistry::Symbol
    _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<std::string, uint>> const&, class Bedrock::typeid_t<class CommandRegistry>, ParseFn, struct CommandRegistry::Signature*);

    // symbol:
    // ?_addChainedSubcommandValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@_KI@std@@V?$allocator@U?$pair@_KI@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@ZPEAUSignature@1@@Z
    MCAPI class CommandRegistry::Symbol
    _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<uint64, uint>> const&, class Bedrock::typeid_t<class CommandRegistry>, ParseFn, struct CommandRegistry::Signature*);

    // symbol:
    // ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<std::string, uint64>> const&,
        class Bedrock::typeid_t<class CommandRegistry>,
        ParseFn
    );

    // symbol:
    // ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<uint64, uint64>> const&,
        class Bedrock::typeid_t<class CommandRegistry>,
        ParseFn
    );

    // symbol: ?_addFunctionSoftEnum@CommandRegistry@@AEAA?AVSymbol@1@XZ
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();

    // symbol: ?_getConstrainedParamEnumSymbol@CommandRegistry@@AEBA?AVSymbol@1@V21@@Z
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const;

    // symbol:
    // ?_isCommandElementValid@CommandRegistry@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _isCommandElementValid(std::string const&) const;

    // symbol:
    // ?_matchesEnumConstraintsSet@CommandRegistry@@AEBA_NAEBVSymbol@1@AEBVCommandOrigin@@0W4SemanticConstraint@@@Z
    MCAPI bool _matchesEnumConstraintsSet(
        class CommandRegistry::Symbol const&,
        class CommandOrigin const&,
        class CommandRegistry::Symbol const&,
        ::SemanticConstraint
    ) const;

    // symbol:
    // ?addChainedSubcommandValuesToExisting@CommandRegistry@@AEAAXIAEBV?$vector@U?$pair@_KI@std@@V?$allocator@U?$pair@_KI@std@@@2@@std@@@Z
    MCAPI void addChainedSubcommandValuesToExisting(uint, std::vector<std::pair<uint64, uint>> const&);

    // symbol:
    // ?addEnumValuesToExisting@CommandRegistry@@AEAAXIAEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@std@@@Z
    MCAPI void addEnumValuesToExisting(uint, std::vector<std::pair<uint64, uint64>> const&);

    // symbol:
    // ?addPostfix@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const&);

    // symbol:
    // ?addRule@CommandRegistry@@AEAAXVSymbol@1@V?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@std@@V?$function@$$A6APEAUParseToken@CommandRegistry@@AEAU12@VSymbol@2@@Z@4@VCommandVersion@@@Z
    MCAPI void addRule(
        class CommandRegistry::Symbol,
        std::vector<class CommandRegistry::Symbol>,
        std::function<
            struct CommandRegistry::ParseToken*(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol)>,
        class CommandVersion
    );

    // symbol: ?addSemanticConstraint@CommandRegistry@@AEAAXW4SemanticConstraint@@@Z
    MCAPI void addSemanticConstraint(::SemanticConstraint);

    // symbol:
    // ?addSoftTerminal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const&);

    // symbol: ?buildFirstSet@CommandRegistry@@AEBAXAEAUParseTable@1@VSymbol@1@I@Z
    MCAPI void buildFirstSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, uint) const;

    // symbol:
    // ?buildFollowSet@CommandRegistry@@AEBAXAEAUParseTable@1@VSymbol@1@IAEAV?$set@VSymbol@CommandRegistry@@U?$less@VSymbol@CommandRegistry@@@std@@V?$allocator@VSymbol@CommandRegistry@@@4@@std@@@Z
    MCAPI void
    buildFollowSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, uint, std::set<class CommandRegistry::Symbol>&)
        const;

    // symbol:
    // ?buildOptionalRuleChain@CommandRegistry@@AEAA?AVSymbol@1@AEBUSignature@1@AEBV?$vector@VCommandParameterData@@V?$allocator@VCommandParameterData@@@std@@@std@@AEBV?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@5@@Z
    MCAPI class CommandRegistry::Symbol
    buildOptionalRuleChain(struct CommandRegistry::Signature const&, std::vector<class CommandParameterData> const&, std::vector<class CommandRegistry::Symbol> const&);

    // symbol:
    // ?buildOptionalRuleChain@CommandRegistry@@AEAA?AVSymbol@1@AEBUSignature@1@AEBV?$vector@VCommandParameterData@@V?$allocator@VCommandParameterData@@@std@@@std@@PEBVCommandParameterData@@_K@Z
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&,
        std::vector<class CommandParameterData> const&,
        class CommandParameterData const*,
        uint64
    );

    // symbol: ?buildParseTable@CommandRegistry@@AEBAXI@Z
    MCAPI void buildParseTable(uint) const;

    // symbol: ?buildPredictTable@CommandRegistry@@AEBAXAEAUParseTable@1@I@Z
    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable&, uint) const;

    // symbol:
    // ?buildRules@CommandRegistry@@AEAA?AVSymbol@1@AEAUSignature@1@AEBV?$vector@V?$not_null@PEAUOverload@CommandRegistry@@@gsl@@V?$allocator@V?$not_null@PEAUOverload@CommandRegistry@@@gsl@@@std@@@std@@_K@Z
    MCAPI class CommandRegistry::Symbol buildRules(
        struct CommandRegistry::Signature&,
        std::vector<gsl::not_null<struct CommandRegistry::Overload*>> const&,
        uint64
    );

    // symbol:
    // ?checkOriginCommandFlags@CommandRegistry@@AEBA_NAEBVCommandOrigin@@UCommandFlag@@W4CommandPermissionLevel@@@Z
    MCAPI bool checkOriginCommandFlags(class CommandOrigin const&, struct CommandFlag, ::CommandPermissionLevel) const;

    // symbol:
    // ?createCommand@CommandRegistry@@AEBA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI std::unique_ptr<class Command>
    createCommand(struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const;

    // symbol:
    // ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandParameterData@@@Z
    MCAPI std::string describe(class CommandParameterData const&) const;

    // symbol:
    // ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSymbol@1@@Z
    MCAPI std::string describe(class CommandRegistry::Symbol) const;

    // symbol:
    // ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSignature@1@AEBV23@AEBUOverload@1@IPEAI3@Z
    MCAPI std::string
    describe(struct CommandRegistry::Signature const&, std::string const&, struct CommandRegistry::Overload const&, uint, uint*, uint*)
        const;

    // symbol:
    // ?findCommand@CommandRegistry@@AEAAPEAUSignature@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct CommandRegistry::Signature* findCommand(std::string const&);

    // symbol:
    // ?findCommand@CommandRegistry@@AEBAPEBUSignature@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const&) const;

    // symbol:
    // ?findEnumValue@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const&) const;

    // symbol:
    // ?findIdentifierInfo@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const&) const;

    // symbol:
    // ?findPostfix@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const&) const;

    // symbol: ?forEachNonTerminal@CommandRegistry@@AEBAXV?$function@$$A6AXVSymbol@CommandRegistry@@@Z@std@@@Z
    MCAPI void forEachNonTerminal(std::function<void(class CommandRegistry::Symbol)>) const;

    // symbol: ?getEnumData@CommandRegistry@@AEBA_KAEBUParseToken@1@@Z
    MCAPI uint64 getEnumData(struct CommandRegistry::ParseToken const&) const;

    // symbol:
    // ?getInvertableFilter@CommandRegistry@@AEBA?AU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@AEBUParseToken@1@@Z
    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const&) const;

    // symbol: ?isValid@CommandRegistry@@AEBA_NVSymbol@1@@Z
    MCAPI bool isValid(class CommandRegistry::Symbol) const;

    // symbol: ?originCanRun@CommandRegistry@@AEBA_NAEBVCommandOrigin@@AEBUOverload@1@@Z
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Overload const&) const;

    // symbol: ?originCanRun@CommandRegistry@@AEBA_NAEBVCommandOrigin@@AEBUSignature@1@@Z
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Signature const&) const;

    // symbol:
    // ?parseSelector@CommandRegistry@@AEBA_NAEAUActorSelectorArgs@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
    MCAPI bool
    parseSelector(struct ActorSelectorArgs&, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const;

    // symbol:
    // ?parseSelector@CommandRegistry@@AEBA_NPEAVCommandSelectorBase@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@_N@Z
    MCAPI bool parseSelector(
        class CommandSelectorBase*,
        struct CommandRegistry::ParseToken const&,
        class CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&,
        bool
    ) const;

    // symbol: ?registerOverloadInternal@CommandRegistry@@AEAAXAEAUSignature@1@AEAUOverload@1@@Z
    MCAPI void registerOverloadInternal(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&);

    // symbol: ?setupChainedSubcommandOverloadRules@CommandRegistry@@AEAAXAEAUSignature@1@@Z
    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature&);

    // symbol: ?setupOverloadRules@CommandRegistry@@AEAAXAEAUSignature@1@@Z
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature&);

    // symbol:
    // ?symbolToString@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSymbol@1@@Z
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;

    // symbol:
    // ?_removeStringQuotes@CommandRegistry@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI static std::string _removeStringQuotes(std::string const&);

    // symbol:
    // ?addNonEpsilonSymbols@CommandRegistry@@CAXAEAV?$dense_set@VSymbol@CommandRegistry@@USymbolHasher@2@U?$equal_to@VSymbol@CommandRegistry@@@std@@V?$allocator@VSymbol@CommandRegistry@@@5@@entt@@AEBV23@@Z
    MCAPI static void
    addNonEpsilonSymbols(entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher>&, entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher> const&);

    // symbol: ?buildOverload@CommandRegistry@@CAXAEAUOverload@1@@Z
    MCAPI static void buildOverload(struct CommandRegistry::Overload&);

    // symbol: ?collapse@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
    MCAPI static struct CommandRegistry::ParseToken*
    collapse(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);

    // symbol: ?collapseOn@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
    MCAPI static struct CommandRegistry::ParseToken*
    collapseOn(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);

    // symbol: ?expand@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
    MCAPI static struct CommandRegistry::ParseToken*
    expand(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);

    // symbol: ?expandExcept@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
    MCAPI static struct CommandRegistry::ParseToken*
    expandExcept(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);

    // symbol: ?fold@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
    MCAPI static struct CommandRegistry::ParseToken*
    fold(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);

    // symbol: ?kill@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
    MCAPI static struct CommandRegistry::ParseToken*
    kill(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);

    // symbol:
    // ?readFloat@CommandRegistry@@CA_NAEAMAEBUParseToken@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static bool
    readFloat(float&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);

    // symbol:
    // ?readInt@CommandRegistry@@CA_NAEAHAEBUParseToken@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static bool readInt(int&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);

    // symbol:
    // ?readRelativeCoordinate@CommandRegistry@@CA_NAEA_NAEAMAEBUParseToken@1@_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static bool
    readRelativeCoordinate(bool&, float&, struct CommandRegistry::ParseToken const&, bool, std::string&, std::vector<std::string>&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?ParseRuleSymbols@CommandRegistry@@0QBU?$pair@P8CommandRegistry@@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@ZVSymbol@1@@std@@B
    MCAPI static std::pair<ParseFn, class CommandRegistry::Symbol> const ParseRuleSymbols[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ParseRuleSymbols() { return ParseRuleSymbols; }

    // NOLINTEND
};


// following are the functions required by CommandParameterData's ParseFunction
MCTAPI bool CommandRegistry::parse<
    std::
        string>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    int>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    float>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    Json::
        Value>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandCompareOperator>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandFilePath>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandIntegerRange>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandMessage>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandOperator>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandPosition>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandPositionFloat>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandRawText>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<CommandSelector<
    Actor>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<CommandSelector<
    Player>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    CommandWildcardInt>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<
    class
    RelativeFloat>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<WildcardCommandSelector<
    Actor>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<std::unique_ptr<
    Command>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<std::vector<
    BlockStateCommandParam>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;