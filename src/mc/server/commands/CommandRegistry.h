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

class Command;
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
    class Symbol;
    class Parser;
    struct RegistryState;
    struct SoftEnum;
    struct SymbolHasher;
    // clang-format on

    // CommandRegistry inner types define

    using ParseFn =
        bool (CommandRegistry::*)(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const;
    using FactoryFn       = std::unique_ptr<class Command>();
    using ProcessFunction = std::function<ParseToken*(ParseToken&, Symbol)>;

    enum class HardNonTerminal : int {
        Epsilon                   = 0x100000,
        Int                       = 0x100001,
        Float                     = 0x100002,
        Val                       = 0x100003,
        RVal                      = 0x100004,
        WildcardInt               = 0x100005,
        Operator                  = 0x100006,
        CompareOperator           = 0x100007,
        Selection                 = 0x100008,
        StandaloneSelection       = 0x100009,
        WildcardSelection         = 0x10000a,
        NonIdSelector             = 0x10000b,
        ScoresArg                 = 0x10000c,
        ScoresArgs                = 0x10000d,
        ScoreSelectParam          = 0x10000e,
        ScoreSelector             = 0x10000f,
        TagSelector               = 0x100010,
        FilePath                  = 0x100011,
        FilePathVal               = 0x100012,
        FilePathCont              = 0x100013,
        IntegerRangeVal           = 0x100014,
        IntegerRangePostVal       = 0x100015,
        IntegerRange              = 0x100016,
        FullIntegerRange          = 0x100017,
        RationalRangeVal          = 0x100018,
        RationalRangePostVal      = 0x100019,
        RationalRange             = 0x10001a,
        FullRationalRange         = 0x10001b,
        SelArgs                   = 0x10001c,
        Args                      = 0x10001d,
        Arg                       = 0x10001e,
        MArg                      = 0x10001f,
        MValue                    = 0x100020,
        NameArg                   = 0x100021,
        TypeArg                   = 0x100022,
        FamilyArg                 = 0x100023,
        HasPermissionArg          = 0x100024,
        HasPermissionArgs         = 0x100025,
        HasPermissionSelector     = 0x100026,
        HasPermissionElement      = 0x100027,
        HasPermissionElements     = 0x100028,
        TagArg                    = 0x100029,
        HasItemElement            = 0x10002a,
        HasItemElements           = 0x10002b,
        HasItemArg                = 0x10002c,
        HasItemArgs               = 0x10002d,
        HasItemSelector           = 0x10002e,
        EquipmentSlotEnum         = 0x10002f,
        PropertyValue             = 0x100030,
        HasPropertyParamValue     = 0x100031,
        HasPropertyParamEnumValue = 0x100032,
        HasPropertyArg            = 0x100033,
        HasPropertyArgs           = 0x100034,
        HasPropertyElement        = 0x100035,
        HasPropertyElements       = 0x100036,
        HasPropertySelector       = 0x100037,
        Id                        = 0x100038,
        IdCont                    = 0x100039,
        CoordXInt                 = 0x10003a,
        CoordYInt                 = 0x10003b,
        CoordZInt                 = 0x10003c,
        CoordXFloat               = 0x10003d,
        CoordYFloat               = 0x10003e,
        CoordZFloat               = 0x10003f,
        Position                  = 0x100040,
        PositionFloat             = 0x100041,
        MessageExp                = 0x100042,
        Message                   = 0x100043,
        MessageRoot               = 0x100044,
        PostSelector              = 0x100045,
        RawText                   = 0x100046,
        RawTextCont               = 0x100047,
        JsonValue                 = 0x100048,
        JsonField                 = 0x100049,
        JsonObject                = 0x10004a,
        JsonObjectFields          = 0x10004b,
        JsonObjectCont            = 0x10004c,
        JsonArray                 = 0x10004d,
        JsonArrayValues           = 0x10004e,
        JsonArrayCont             = 0x10004f,
        BlockState                = 0x100050,
        BlockStateKey             = 0x100051,
        BlockStateValue           = 0x100052,
        BlockStateValues          = 0x100053,
        BlockStateArray           = 0x100054,
        BlockStateArrayCont       = 0x100055,
        Command                   = 0x100056,
        SlashCommand              = 0x100057,
        Count,
    };

    struct ChainedSubcommand {
    public:
        // prevent constructor by default
        ChainedSubcommand& operator=(ChainedSubcommand const&);
        ChainedSubcommand(ChainedSubcommand const&);
        ChainedSubcommand();

    public:
        // NOLINTBEGIN
        // symbol: ??1ChainedSubcommand@CommandRegistry@@QEAA@XZ
        MCAPI ~ChainedSubcommand();

        // NOLINTEND
    };

    struct Enum {

        std::string                            name;   // this+0x0
        Bedrock::typeid_t<CommandRegistry>     type;   // this+0x20
        ParseFn                                parse;  // this+0x28
        std::vector<std::pair<uint64, uint64>> values; // this+0x30

    public:
        // NOLINTBEGIN
        // symbol: ??1Enum@CommandRegistry@@QEAA@XZ
        MCAPI ~Enum();

        // NOLINTEND
    };

    struct Overload {
        CommandVersion                    version;       // this+0x0
        FactoryFn*                        alloc;         // this+0x8
        std::vector<CommandParameterData> params;        // this+0x10
        int                               versionOffset; // this+0x28
        std::vector<Symbol>               paramsSymbol;  // this+0x30

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0Overload@CommandRegistry@@QEAA@VCommandVersion@@P6A?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@XZ@Z
        MCAPI Overload(class CommandVersion, std::unique_ptr<class Command> (*)(void));

        // NOLINTEND
    };

    class Symbol {
    public:
        int mValue{-1}; // this+0x0

        static int const NonTerminalBit   = 0x100000;
        static int const EnumBit          = 0x200000;
        static int const OptionalBit      = 0x400000;
        static int const FactorizationBit = 0x800000;
        static int const PostfixBit       = 0x1000000;
        static int const EnumValueBit     = 0x2000000;
        static int const SoftEnumBit      = 0x4000000;

        Symbol() = default;

        Symbol(Symbol const& other) : mValue(other.mValue) {}

        Symbol(HardNonTerminal data) : mValue(static_cast<int>(data)) {}

        Symbol(CommandLexer::TokenType data) : mValue(static_cast<int>(data)) {}

        Symbol& operator=(Symbol const& other) {
            mValue = other.mValue;
            return *this;
        }


        [[nodiscard]] inline bool operator==(Symbol const& other) const { return mValue == other.mValue; }

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
        Symbol haspermission; // this+0x54
        Symbol has_property;  // this+0x58

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
        MCAPI struct CommandRegistry::ParseRule& operator=(struct CommandRegistry::ParseRule&& rhs);

        // NOLINTEND
    };

    struct ParseTable {
        std::map<Symbol, std::vector<Symbol>>           first;   // this+0x0
        std::map<Symbol, std::vector<Symbol>>           follow;  // this+0x10
        entt::dense_map<std::pair<Symbol, Symbol>, int> predict; // this+0x20
        std::chrono::system_clock::duration             buildDuration;

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
        std::vector<void*>     mUnknown;             // this+0x58  // ChainedSubcommand
        CommandPermissionLevel perm;                 // this+0x70
        Symbol                 mainSymbol;           // this+0x74
        Symbol                 altSymbol;            // this+0x78
        CommandFlag            flag;                 // this+0x7C
        int                    firstRule{};          // this+0x80
        int                    firstFactorization{}; // this+0x84
        int                    firstOptional{};      // this+0x88
        bool                   runnable{};           // this+0x8C
        size_t                 ruleCounter{};        // this+0x90

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
        ParseTable const*                          mParseTable;               // this+0x8
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
        MCAPI Parser(class CommandRegistry const& registry, int version);

        // symbol:
        // ?createCommand@Parser@CommandRegistry@@QEAA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBVCommandOrigin@@@Z
        MCAPI std::unique_ptr<class Command> createCommand(class CommandOrigin const& origin);

        // symbol:
        // ?createSelector@Parser@CommandRegistry@@QEAA?AV?$unique_ptr@V?$CommandSelector@VActor@@@@U?$default_delete@V?$CommandSelector@VActor@@@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEBVCommandOrigin@@@Z
        MCAPI std::unique_ptr<class CommandSelector<class Actor>>
              createSelector(std::string const& selectorString, class CommandOrigin const& origin);

        // symbol:
        // ?getErrorMessage@Parser@CommandRegistry@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string const& getErrorMessage() const;

        // symbol:
        // ?getErrorParams@Parser@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
        MCAPI std::vector<std::string> getErrorParams() const;

        // symbol:
        // ?parseCommand@Parser@CommandRegistry@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool parseCommand(std::string const& in);

        // symbol:
        // ?parseSelector@Parser@CommandRegistry@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool parseSelector(std::string const& in);

        // symbol: ??1Parser@CommandRegistry@@QEAA@XZ
        MCAPI ~Parser();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?_findParsePrediction@Parser@CommandRegistry@@AEBA?AV?$dense_map_iterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$dense_map_node@U?$pair@VSymbol@CommandRegistry@@V12@@std@@H@internal@entt@@@std@@@std@@@std@@@internal@entt@@AEBULexicalToken@2@AEBVSymbol@2@@Z
        MCAPI entt::dense_map<std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>, int>::
            const_iterator
            _findParsePrediction(
                struct CommandRegistry::LexicalToken const& lexToken,
                class CommandRegistry::Symbol const&        stackSymbol
            ) const;

        // symbol:
        // ?_parse@Parser@CommandRegistry@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool _parse(std::string const& in);

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
    std::vector<int>                                            mUnknown1;                     // this+0xF0
    std::vector<int>                                            mUnknown2;                     // this+0x108
    std::vector<Factorization>                                  mFactorizations;               // this+0x120
    std::vector<std::string>                                    mPostfixes;                    // this+0x138
    std::map<std::string, uint>                                 mEnumLookup;                   // this+0x150
    std::map<std::string, uint64>                               mEnumValueLookup;              // this+0x160
    std::map<std::string, int>                                  mUnknown3;                     // this+0x170
    std::map<std::string, int>                                  mChainedSubcommandLookUp;      // this+0x180
    std::vector<Symbol>                                         mCommandSymbols;               // this+0x190
    std::map<std::string, Signature>                            mSignatures;                   // this+0x1A8
    std::map<Bedrock::typeid_t<CommandRegistry>, int>           mTypeLookup;                   // this+0x1B8
    std::map<std::string, std::string>                          mAliases;                      // this+0x1C8
    std::vector<SemanticConstraint>                             mSemanticConstraints;          // this+0x1D8
    std::map<SemanticConstraint, uchar>                         mSemanticConstraintLookup;     // this+0x1F0
    std::vector<ConstrainedValue>                               mConstrainedValues;            // this+0x200
    std::map<std::pair<uint64, uint>, uint>                     mConstrainedValueLookup;       // this+0x218
    std::vector<SoftEnum>                                       mSoftEnums;                    // this+0x228
    std::map<std::string, uint>                                 mSoftEnumLookup;               // this+0x240
    std::vector<RegistryState>                                  mStateStack;                   // this+0x250
    ParamSymbols                                                mArgs;                         // this+0x268
    std::unordered_map<uchar, uchar>                            mSkipOnEpsAutocompleteSymbols; // this+0x2C8
    std::unordered_map<uchar, uchar>                            mAllowEmptySymbols;            // this+0x308
    std::function<void(CommandFlag&, std::string const&)>       mCommandOverrideFunctor;       // this+0x348

    template <typename T>
    bool parse(
        void*                              storage,
        CommandRegistry::ParseToken const& token,
        CommandOrigin const& /*origin*/,
        int /*version*/,
        std::string& /*error*/,
        std::vector<std::string>& /*errorParams*/
    ) const {
        if constexpr (std::is_enum_v<T>) {
            *(T*)storage = (T)getEnumData(token);
            return true;
        } else {
            return false;
        }
    }

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
    MCAPI void addEnumValueConstraints(
        std::string const&              enumName,
        std::vector<std::string> const& values,
        ::SemanticConstraint            constraints
    );

    // symbol:
    // ?addEnumValues@CommandRegistry@@QEAAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI int addEnumValues(std::string const& name, std::vector<std::string> const& values);

    // symbol:
    // ?addSoftEnum@CommandRegistry@@QEAAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI int addSoftEnum(std::string const& name, std::vector<std::string> values);

    // symbol:
    // ?addSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void addSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    // symbol:
    // ?buildSelector@CommandRegistry@@QEBA_NAEBUActorSelectorArgs@@PEAVCommandSelectorBase@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool
    buildSelector(struct ActorSelectorArgs const& args, class CommandSelectorBase* output, std::string& error) const;

    // symbol:
    // ?enabledInEditor@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool enabledInEditor(std::string const& nameIn) const;

    // symbol: ?finalizeChainedSubcommandOverloadRules@CommandRegistry@@QEAAXPEBD@Z
    MCAPI void finalizeChainedSubcommandOverloadRules(char const*);

    // symbol: ?fireCommandParseTableTelemetry@CommandRegistry@@QEBAXAEBVIMinecraftEventing@@_N@Z
    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const& eventing, bool isServer) const;

    // symbol: ?generateDocumentationMetadata@CommandRegistry@@QEBA?AVValue@Json@@_N@Z
    MCAPI class Json::Value generateDocumentationMetadata(bool) const;

    // symbol:
    // ?getAliases@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::string> getAliases(std::string const& command) const;

    // symbol:
    // ?getAlphabeticalLookup@CommandRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCommandOrigin@@@Z
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const;

    // symbol:
    // ?getCommandName@CommandRegistry@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI std::string getCommandName(std::string const& commandLine) const;

    // symbol:
    // ?getCommandOverloadSyntaxInformation@CommandRegistry@@QEBA?AUCommandSyntaxInformation@@AEBVCommandOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(class CommandOrigin const& origin, std::string const& commandName) const;

    // symbol:
    // ?getCommandStatus@CommandRegistry@@QEBA?AW4CommandStatus@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::CommandStatus getCommandStatus(std::string const& nameIn) const;

    // symbol:
    // ?isCommandOfType@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CommandTypeFlag@@@Z
    MCAPI bool isCommandOfType(std::string const& nameIn, ::CommandTypeFlag commandType) const;

    // symbol:
    // ?isValidCommand@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isValidCommand(std::string const& commandName) const;

    // symbol: ?registerAlias@CommandRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void registerAlias(std::string name, std::string alias);

    // symbol:
    // ?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z
    MCAPI void registerCommand(
        std::string const&       name,
        char const*              description, // will copy to std::string
        ::CommandPermissionLevel requirement,
        struct CommandFlag       f,
        struct CommandFlag = CommandFlagValue::None // useless, idiot
    );

    // symbol:
    // ?removeSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void removeSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    // symbol:
    // ?requiresCheatsEnabled@CommandRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool requiresCheatsEnabled(std::string const& nameIn) const;

    // symbol: ?serializeAvailableCommands@CommandRegistry@@QEBA?AVAvailableCommandsPacket@@XZ
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;

    // symbol:
    // ?setCommandRegistrationOverride@CommandRegistry@@QEAAXV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    MCAPI void setCommandRegistrationOverride(std::function<void(struct CommandFlag&, std::string const&)> functor);

    // symbol: ?setNetworkUpdateCallback@CommandRegistry@@QEAAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
    MCAPI void setNetworkUpdateCallback(std::function<void(class Packet const&)> callback);

    // symbol:
    // ?setScoreCallback@CommandRegistry@@QEAAXV?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@std@@@Z
    MCAPI void setScoreCallback(std::function<int(bool&, std::string const&, class Actor const&)> callback);

    // symbol:
    // ?setSoftEnumValues@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void setSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

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

    // symbol: ?HASPROPERTY_PARAM_PROPERTY_NAME@CommandRegistry@@2PEBDEB
    MCAPI static char const* HASPROPERTY_PARAM_PROPERTY_NAME;

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
        std::string const&                                 name,
        std::vector<std::pair<std::string, uint64>> const& strings,
        class Bedrock::typeid_t<class CommandRegistry>     type,
        ParseFn
    );

    // symbol:
    // ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                             name,
        std::vector<std::pair<uint64, uint64>> const&  values,
        class Bedrock::typeid_t<class CommandRegistry> type,
        ParseFn
    );

    // symbol: ?_addFunctionSoftEnum@CommandRegistry@@AEAA?AVSymbol@1@XZ
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();

    // symbol: ?_getConstrainedParamEnumSymbol@CommandRegistry@@AEBA?AVSymbol@1@V21@@Z
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol symbol) const;

    // symbol:
    // ?_isCommandElementValid@CommandRegistry@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _isCommandElementValid(std::string const& name) const;

    // symbol:
    // ?_matchesEnumConstraintsSet@CommandRegistry@@AEBA_NAEBVSymbol@1@AEBVCommandOrigin@@0W4SemanticConstraint@@@Z
    MCAPI bool _matchesEnumConstraintsSet(
        class CommandRegistry::Symbol const& commandParamSymbol,
        class CommandOrigin const&           origin,
        class CommandRegistry::Symbol const& value,
        ::SemanticConstraint                 requiredConstraints
    ) const;

    // symbol:
    // ?addChainedSubcommandValuesToExisting@CommandRegistry@@AEAAXIAEBV?$vector@U?$pair@_KI@std@@V?$allocator@U?$pair@_KI@std@@@2@@std@@@Z
    MCAPI void addChainedSubcommandValuesToExisting(uint, std::vector<std::pair<uint64, uint>> const&);

    // symbol:
    // ?addEnumValuesToExisting@CommandRegistry@@AEAAXIAEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@std@@@Z
    MCAPI void addEnumValuesToExisting(uint index, std::vector<std::pair<uint64, uint64>> const& values);

    // symbol:
    // ?addPostfix@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const& name);

    // symbol:
    // ?addRule@CommandRegistry@@AEAAXVSymbol@1@V?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@std@@V?$function@$$A6APEAUParseToken@CommandRegistry@@AEAU12@VSymbol@2@@Z@4@VCommandVersion@@@Z
    MCAPI void
    addRule(Symbol symbol, std::vector<Symbol> derivation, ProcessFunction process, class CommandVersion versions = {});

    // symbol: ?addSemanticConstraint@CommandRegistry@@AEAAXW4SemanticConstraint@@@Z
    MCAPI void addSemanticConstraint(::SemanticConstraint constraintType);

    // symbol:
    // ?addSoftTerminal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const& name);

    // symbol: ?buildFirstSet@CommandRegistry@@AEBAXAEAUParseTable@1@VSymbol@1@I@Z
    MCAPI void
    buildFirstSet(struct CommandRegistry::ParseTable& table, class CommandRegistry::Symbol t, uint version) const;

    // symbol:
    // ?buildFollowSet@CommandRegistry@@AEBAXAEAUParseTable@1@VSymbol@1@IAEAV?$set@VSymbol@CommandRegistry@@U?$less@VSymbol@CommandRegistry@@@std@@V?$allocator@VSymbol@CommandRegistry@@@4@@std@@@Z
    MCAPI void buildFollowSet(
        struct CommandRegistry::ParseTable&      table,
        class CommandRegistry::Symbol            t,
        uint                                     version,
        std::set<class CommandRegistry::Symbol>& workingSet
    ) const;

    // symbol:
    // ?buildOptionalRuleChain@CommandRegistry@@AEAA?AVSymbol@1@AEBUSignature@1@AEBV?$vector@VCommandParameterData@@V?$allocator@VCommandParameterData@@@std@@@std@@AEBV?$vector@VSymbol@CommandRegistry@@V?$allocator@VSymbol@CommandRegistry@@@std@@@5@@Z
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&          signature,
        std::vector<class CommandParameterData> const&    params,
        std::vector<class CommandRegistry::Symbol> const& symbols
    );

    // symbol:
    // ?buildOptionalRuleChain@CommandRegistry@@AEAA?AVSymbol@1@AEBUSignature@1@AEBV?$vector@VCommandParameterData@@V?$allocator@VCommandParameterData@@@std@@@std@@PEBVCommandParameterData@@_K@Z
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&       signature,
        std::vector<class CommandParameterData> const& params,
        class CommandParameterData const*              firstOptional,
        uint64                                         count
    );

    // symbol: ?buildParseTable@CommandRegistry@@AEBAXI@Z
    MCAPI void buildParseTable(uint) const;

    // symbol: ?buildPredictTable@CommandRegistry@@AEBAXAEAUParseTable@1@I@Z
    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable&, uint) const;

    // symbol:
    // ?buildRules@CommandRegistry@@AEAA?AVSymbol@1@AEAUSignature@1@AEBV?$vector@V?$not_null@PEAUOverload@CommandRegistry@@@gsl@@V?$allocator@V?$not_null@PEAUOverload@CommandRegistry@@@gsl@@@std@@@std@@_K@Z
    MCAPI class CommandRegistry::Symbol buildRules(
        struct CommandRegistry::Signature&                                   signature,
        std::vector<gsl::not_null<struct CommandRegistry::Overload*>> const& overloads,
        uint64                                                               firstParam
    );

    // symbol:
    // ?checkOriginCommandFlags@CommandRegistry@@AEBA_NAEBVCommandOrigin@@UCommandFlag@@W4CommandPermissionLevel@@@Z
    MCAPI bool checkOriginCommandFlags(
        class CommandOrigin const& origin,
        struct CommandFlag         flags,
        ::CommandPermissionLevel   permissionLevel
    ) const;

    // symbol:
    // ?createCommand@CommandRegistry@@AEBA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI std::unique_ptr<class Command> createCommand(
        struct CommandRegistry::ParseToken const& root,
        class CommandOrigin const&                origin,
        int                                       version,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    ) const;

    // symbol:
    // ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandParameterData@@@Z
    MCAPI std::string describe(class CommandParameterData const&) const;

    // symbol:
    // ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSymbol@1@@Z
    MCAPI std::string describe(class CommandRegistry::Symbol) const;

    // symbol:
    // ?describe@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSignature@1@AEBV23@AEBUOverload@1@IPEAI3@Z
    MCAPI std::string describe(
        struct CommandRegistry::Signature const& command,
        std::string const&                       alias,
        struct CommandRegistry::Overload const&  overload,
        uint                                     highlight,
        uint*                                    start,
        uint*                                    length
    ) const;

    // symbol:
    // ?findCommand@CommandRegistry@@AEAAPEAUSignature@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct CommandRegistry::Signature* findCommand(std::string const& name);

    // symbol:
    // ?findCommand@CommandRegistry@@AEBAPEBUSignature@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const& name) const;

    // symbol:
    // ?findEnumValue@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const& name) const;

    // symbol:
    // ?findIdentifierInfo@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const& name) const;

    // symbol:
    // ?findPostfix@CommandRegistry@@AEBA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const& input) const;

    // symbol: ?forEachNonTerminal@CommandRegistry@@AEBAXV?$function@$$A6AXVSymbol@CommandRegistry@@@Z@std@@@Z
    MCAPI void forEachNonTerminal(std::function<void(class CommandRegistry::Symbol)> func) const;

    // symbol: ?getEnumData@CommandRegistry@@AEBA_KAEBUParseToken@1@@Z
    MCAPI uint64 getEnumData(struct CommandRegistry::ParseToken const& token) const;

    // symbol:
    // ?getInvertableFilter@CommandRegistry@@AEBA?AU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@AEBUParseToken@1@@Z
    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const&) const;

    // symbol: ?isValid@CommandRegistry@@AEBA_NVSymbol@1@@Z
    MCAPI bool isValid(class CommandRegistry::Symbol symbol) const;

    // symbol: ?originCanRun@CommandRegistry@@AEBA_NAEBVCommandOrigin@@AEBUOverload@1@@Z
    MCAPI bool originCanRun(class CommandOrigin const& origin, struct CommandRegistry::Overload const& overload) const;

    // symbol: ?originCanRun@CommandRegistry@@AEBA_NAEBVCommandOrigin@@AEBUSignature@1@@Z
    MCAPI bool originCanRun(class CommandOrigin const& origin, struct CommandRegistry::Signature const& command) const;

    // symbol:
    // ?parseSelector@CommandRegistry@@AEBA_NAEAUActorSelectorArgs@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
    MCAPI bool parseSelector(
        struct ActorSelectorArgs&                 args,
        struct CommandRegistry::ParseToken const& token,
        class CommandOrigin const&                origin,
        int                                       version,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    ) const;

    // symbol:
    // ?parseSelector@CommandRegistry@@AEBA_NPEAVCommandSelectorBase@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@_N@Z
    MCAPI bool parseSelector(
        class CommandSelectorBase*                output,
        struct CommandRegistry::ParseToken const& token,
        class CommandOrigin const&                origin,
        int                                       version,
        std::string&                              error,
        std::vector<std::string>&                 errorParams,
        bool                                      wildcard
    ) const;

    // symbol: ?registerOverloadInternal@CommandRegistry@@AEAAXAEAUSignature@1@AEAUOverload@1@@Z
    MCAPI void
    registerOverloadInternal(struct CommandRegistry::Signature& signature, struct CommandRegistry::Overload& overload);

    // symbol: ?setupChainedSubcommandOverloadRules@CommandRegistry@@AEAAXAEAUSignature@1@@Z
    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature&);

    // symbol: ?setupOverloadRules@CommandRegistry@@AEAAXAEAUSignature@1@@Z
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature& signature);

    // symbol:
    // ?symbolToString@CommandRegistry@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSymbol@1@@Z
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;

    // symbol:
    // ?_removeStringQuotes@CommandRegistry@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI static std::string _removeStringQuotes(std::string const& str);

    // symbol:
    // ?addNonEpsilonSymbols@CommandRegistry@@CAXAEAV?$dense_set@VSymbol@CommandRegistry@@USymbolHasher@2@U?$equal_to@VSymbol@CommandRegistry@@@std@@V?$allocator@VSymbol@CommandRegistry@@@5@@entt@@AEBV23@@Z
    MCAPI static void addNonEpsilonSymbols(
        entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher>&       destination,
        entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher> const& source
    );

    // symbol: ?buildOverload@CommandRegistry@@CAXAEAUOverload@1@@Z
    MCAPI static void buildOverload(struct CommandRegistry::Overload& overload);

    // symbol: ?collapse@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
    MCAPI static struct CommandRegistry::ParseToken*
    collapse(struct CommandRegistry::ParseToken& parent, class CommandRegistry::Symbol symbol);

    // symbol: ?collapseOn@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
    MCAPI static struct CommandRegistry::ParseToken* collapseOn(
        struct CommandRegistry::ParseToken& parent,
        class CommandRegistry::Symbol       symbol,
        class CommandRegistry::Symbol       boundSymbol
    );

    // symbol: ?expand@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
    MCAPI static struct CommandRegistry::ParseToken*
    expand(struct CommandRegistry::ParseToken& parent, class CommandRegistry::Symbol symbol);

    // symbol: ?expandExcept@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
    MCAPI static struct CommandRegistry::ParseToken* expandExcept(
        struct CommandRegistry::ParseToken& parent,
        class CommandRegistry::Symbol       symbol,
        class CommandRegistry::Symbol       boundSymbol
    );

    // symbol: ?fold@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@1@Z
    MCAPI static struct CommandRegistry::ParseToken* fold(
        struct CommandRegistry::ParseToken& parent,
        class CommandRegistry::Symbol       symbol,
        class CommandRegistry::Symbol       boundSymbol
    );

    // symbol: ?kill@CommandRegistry@@CAPEAUParseToken@1@AEAU21@VSymbol@1@@Z
    MCAPI static struct CommandRegistry::ParseToken*
    kill(struct CommandRegistry::ParseToken& parent, class CommandRegistry::Symbol symbol);

    // symbol:
    // ?readFloat@CommandRegistry@@CA_NAEAMAEBUParseToken@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static bool readFloat(
        float&                                    value,
        struct CommandRegistry::ParseToken const& token,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    // symbol:
    // ?readInt@CommandRegistry@@CA_NAEAHAEBUParseToken@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static bool readInt(
        int&                                      value,
        struct CommandRegistry::ParseToken const& token,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    // symbol:
    // ?readRelativeCoordinate@CommandRegistry@@CA_NAEA_NAEAMAEBUParseToken@1@_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static bool readRelativeCoordinate(
        bool&                                     relative,
        float&                                    offset,
        struct CommandRegistry::ParseToken const& token,
        bool                                      readIntegerAsCentered,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    // symbol:
    // ?readString@CommandRegistry@@CA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUParseToken@1@0AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI static bool
    readString(std::string&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ParseRuleSymbols@CommandRegistry@@0QBU?$pair@P8CommandRegistry@@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@ZVSymbol@1@@std@@B
    MCAPI static std::pair<ParseFn, class CommandRegistry::Symbol> const ParseRuleSymbols[];

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
    ::Command>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

MCTAPI bool CommandRegistry::parse<std::vector<
    BlockStateCommandParam>>(void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const;

template <>
inline bool CommandRegistry::parse<std::pair<
    std::string,
    uint64>>(void* target, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
    const {
    *(std::pair<std::string, uint64>*)target = {token.toString(), getEnumData(token)};
    return true;
}
