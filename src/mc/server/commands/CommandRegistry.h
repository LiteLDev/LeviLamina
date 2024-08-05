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
        CodeBuilderArg            = 0x100058,
        CodeBuilderArgs           = 0x100059,
        CodeBuilderSelectParam    = 0x10005a,
        CodeBuilderSelector       = 0x10005b,
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
        MCAPI Symbol(uint64);

        MCAPI uint64 toIndex() const;

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
        MCAPI Signature(struct CommandRegistry::Signature&&);

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
        MCAPI Parser(class CommandRegistry const& registry, int version);

        MCAPI std::unique_ptr<class Command> createCommand(class CommandOrigin const& origin);

        MCAPI std::unique_ptr<class CommandSelector<class Actor>>
              createSelector(std::string const& selectorString, class CommandOrigin const& origin);

        MCAPI std::string const& getErrorMessage() const;

        MCAPI std::vector<std::string> getErrorParams() const;

        MCAPI bool parseCommand(std::string const& in);

        MCAPI bool parseSelector(std::string const& in);

        MCAPI ~Parser();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI entt::dense_map<std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>, int>::
            const_iterator
            _findParsePrediction(
                struct CommandRegistry::LexicalToken const& lexToken,
                class CommandRegistry::Symbol const&        stackSymbol
            ) const;

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
        MCAPI ~RegistryState();

        // NOLINTEND
    };

    struct SoftEnum {
    public:
        std::string              mName;   // this+0x0
        std::vector<std::string> mValues; // this+0x20

    public:
        // NOLINTBEGIN
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
    bool                                                        mEduMode;                      // this+0x80
    std::vector<ParseRule>                                      mRules;                        // this+0x88
    std::map<uint, ParseTable>                                  mParseTables;                  // this+0xA0
    std::vector<OptionalParameterChain>                         mOptionals;                    // this+0xB0
    std::vector<std::string>                                    mEnumValues;                   // this+0xC8
    std::vector<Enum>                                           mEnums;                        // this+0xE0
    std::vector<int>                                            mUnknown1;                     // this+0xF8
    std::vector<int>                                            mUnknown2;                     // this+0x110
    std::vector<Factorization>                                  mFactorizations;               // this+0x128
    std::vector<std::string>                                    mPostfixes;                    // this+0x140
    std::map<std::string, uint>                                 mEnumLookup;                   // this+0x158
    std::map<std::string, uint64>                               mEnumValueLookup;              // this+0x168
    std::map<std::string, int>                                  mUnknown3;                     // this+0x178
    std::map<std::string, int>                                  mChainedSubcommandLookUp;      // this+0x188
    std::vector<Symbol>                                         mCommandSymbols;               // this+0x198
    std::map<std::string, Signature>                            mSignatures;                   // this+0x1B0
    std::map<Bedrock::typeid_t<CommandRegistry>, int>           mTypeLookup;                   // this+0x1C0
    std::map<std::string, std::string>                          mAliases;                      // this+0x1D0
    std::vector<SemanticConstraint>                             mSemanticConstraints;          // this+0x1E0
    std::map<SemanticConstraint, uchar>                         mSemanticConstraintLookup;     // this+0x1F8
    std::vector<ConstrainedValue>                               mConstrainedValues;            // this+0x208
    std::map<std::pair<uint64, uint>, uint>                     mConstrainedValueLookup;       // this+0x220
    std::vector<SoftEnum>                                       mSoftEnums;                    // this+0x230
    std::map<std::string, uint>                                 mSoftEnumLookup;               // this+0x248
    std::vector<RegistryState>                                  mStateStack;                   // this+0x258
    ParamSymbols                                                mArgs;                         // this+0x270
    std::unordered_map<uchar, uchar>                            mSkipOnEpsAutocompleteSymbols; // this+0x2D0
    std::unordered_map<uchar, uchar>                            mAllowEmptySymbols;            // this+0x310
    std::function<void(CommandFlag&, std::string const&)>       mCommandOverrideFunctor;       // this+0x350

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
    CommandRegistry();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandRegistry(bool);

    MCAPI void addEnumValueConstraints(
        std::string const&              enumName,
        std::vector<std::string> const& values,
        ::SemanticConstraint            constraints
    );

    MCAPI int addEnumValues(std::string const& name, std::vector<std::string> const& values);

    MCAPI int addSoftEnum(std::string const& name, std::vector<std::string> values);

    MCAPI void addSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    MCAPI bool
    buildSelector(struct ActorSelectorArgs const& args, class CommandSelectorBase* output, std::string& error) const;

    MCAPI bool enabledInEditor(std::string const& nameIn) const;

    MCAPI void finalizeChainedSubcommandOverloadRules(char const*);

    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const& eventing, bool isServer) const;

    MCAPI class Json::Value generateDocumentationMetadata(bool) const;

    MCAPI std::vector<std::string> getAliases(std::string const& command) const;

    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const;

    MCAPI std::string getCommandName(std::string const& commandLine) const;

    MCAPI struct CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(class CommandOrigin const& origin, std::string const& commandName) const;

    MCAPI ::CommandStatus getCommandStatus(std::string const& nameIn) const;

    MCAPI bool isCommandOfType(std::string const& nameIn, ::CommandTypeFlag commandType) const;

    MCAPI bool isValidCommand(std::string const& commandName) const;

    MCAPI void registerAlias(std::string name, std::string alias);

    MCAPI void registerCommand(
        std::string const&       name,
        char const*              description, // will copy to std::string
        ::CommandPermissionLevel requirement,
        struct CommandFlag       f,
        struct CommandFlag = CommandFlagValue::None // useless, idiot
    );

    MCAPI void removeSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    MCAPI bool requiresCheatsEnabled(std::string const& nameIn) const;

    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;

    MCAPI void setCommandRegistrationOverride(std::function<void(struct CommandFlag&, std::string const&)> functor);

    MCAPI void setNetworkUpdateCallback(std::function<void(class Packet const&)> callback);

    MCAPI void setScoreCallback(std::function<int(bool&, std::string const&, class Actor const&)> callback);

    MCAPI void setSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    MCAPI ~CommandRegistry();

    MCAPI static char const* CODE_STATUS_PROPERTY_NAME;

    MCAPI static char const* COMMAND_NAME_ENUM_NAME;

    MCAPI static char const* FUNCTION_NAME_SOFTENUM_NAME;

    MCAPI static char const* HASITEM_PARAM_DATA;

    MCAPI static char const* HASITEM_PARAM_ITEM;

    MCAPI static char const* HASITEM_PARAM_LOCATION;

    MCAPI static char const* HASITEM_PARAM_QUANTITY;

    MCAPI static char const* HASITEM_PARAM_SLOT;

    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_CAMERA;

    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_MOVEMENT;

    MCAPI static char const* HASPERMISSIONSTATE_ENUM_DISABLED;

    MCAPI static char const* HASPERMISSIONSTATE_ENUM_ENABLED;

    MCAPI static char const* HASPROPERTY_PARAM_PROPERTY_NAME;

    MCAPI static char const* TAG_VALUES_SOFTENUM_NAME;

    MCAPI static char const* UNLOCKABLE_RECIPES_SOFTENUM_NAME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class CommandRegistry::Symbol
    _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<std::string, uint>> const&, class Bedrock::typeid_t<class CommandRegistry>, ParseFn, struct CommandRegistry::Signature*);

    MCAPI class CommandRegistry::Symbol
    _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<uint64, uint>> const&, class Bedrock::typeid_t<class CommandRegistry>, ParseFn, struct CommandRegistry::Signature*);

    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                                 name,
        std::vector<std::pair<std::string, uint64>> const& strings,
        class Bedrock::typeid_t<class CommandRegistry>     type,
        ParseFn
    );

    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                             name,
        std::vector<std::pair<uint64, uint64>> const&  values,
        class Bedrock::typeid_t<class CommandRegistry> type,
        ParseFn
    );

    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();

    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol symbol) const;

    MCAPI bool _isCommandElementValid(std::string const& name) const;

    MCAPI bool _matchesEnumConstraintsSet(
        class CommandRegistry::Symbol const& commandParamSymbol,
        class CommandOrigin const&           origin,
        class CommandRegistry::Symbol const& value,
        ::SemanticConstraint                 requiredConstraints
    ) const;

    MCAPI void addChainedSubcommandValuesToExisting(uint, std::vector<std::pair<uint64, uint>> const&);

    MCAPI void addEnumValuesToExisting(uint index, std::vector<std::pair<uint64, uint64>> const& values);

    MCAPI class CommandRegistry::Symbol addPostfix(std::string const& name);

    MCAPI void
    addRule(Symbol symbol, std::vector<Symbol> derivation, ProcessFunction process, class CommandVersion versions = {});

    MCAPI void addSemanticConstraint(::SemanticConstraint constraintType);

    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const& name);

    MCAPI void
    buildFirstSet(struct CommandRegistry::ParseTable& table, class CommandRegistry::Symbol t, uint version) const;

    MCAPI void buildFollowSet(
        struct CommandRegistry::ParseTable&      table,
        class CommandRegistry::Symbol            t,
        uint                                     version,
        std::set<class CommandRegistry::Symbol>& workingSet
    ) const;

    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&          signature,
        std::vector<class CommandParameterData> const&    params,
        std::vector<class CommandRegistry::Symbol> const& symbols
    );

    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&       signature,
        std::vector<class CommandParameterData> const& params,
        class CommandParameterData const*              firstOptional,
        uint64                                         count
    );

    MCAPI void buildParseTable(uint) const;

    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable&, uint) const;

    MCAPI class CommandRegistry::Symbol buildRules(
        struct CommandRegistry::Signature&                                   signature,
        std::vector<gsl::not_null<struct CommandRegistry::Overload*>> const& overloads,
        uint64                                                               firstParam
    );

    MCAPI bool checkOriginCommandFlags(
        class CommandOrigin const& origin,
        struct CommandFlag         flags,
        ::CommandPermissionLevel   permissionLevel
    ) const;

    MCAPI std::unique_ptr<class Command> createCommand(
        struct CommandRegistry::ParseToken const& root,
        class CommandOrigin const&                origin,
        int                                       version,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    ) const;

    MCAPI std::string describe(class CommandParameterData const&) const;

    MCAPI std::string describe(class CommandRegistry::Symbol) const;

    MCAPI std::string describe(
        struct CommandRegistry::Signature const& command,
        std::string const&                       alias,
        struct CommandRegistry::Overload const&  overload,
        uint                                     highlight,
        uint*                                    start,
        uint*                                    length
    ) const;

    MCAPI struct CommandRegistry::Signature* findCommand(std::string const& name);

    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const& name) const;

    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const& name) const;

    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const& name) const;

    MCAPI class CommandRegistry::Symbol findPostfix(std::string const& input) const;

    MCAPI void forEachNonTerminal(std::function<void(class CommandRegistry::Symbol)> func) const;

    MCAPI uint64 getEnumData(struct CommandRegistry::ParseToken const& token) const;

    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const&) const;

    MCAPI bool isValid(class CommandRegistry::Symbol symbol) const;

    MCAPI bool originCanRun(class CommandOrigin const& origin, struct CommandRegistry::Overload const& overload) const;

    MCAPI bool originCanRun(class CommandOrigin const& origin, struct CommandRegistry::Signature const& command) const;

    MCAPI bool parseSelector(
        struct ActorSelectorArgs&                 args,
        struct CommandRegistry::ParseToken const& token,
        class CommandOrigin const&                origin,
        int                                       version,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    ) const;

    MCAPI bool parseSelector(
        class CommandSelectorBase*                output,
        struct CommandRegistry::ParseToken const& token,
        class CommandOrigin const&                origin,
        int                                       version,
        std::string&                              error,
        std::vector<std::string>&                 errorParams,
        bool                                      wildcard
    ) const;

    MCAPI void
    registerOverloadInternal(struct CommandRegistry::Signature& signature, struct CommandRegistry::Overload& overload);

    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature&);

    MCAPI void setupOverloadRules(struct CommandRegistry::Signature& signature);

    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;

    MCAPI static std::string _removeStringQuotes(std::string const& str);

    MCAPI static void addNonEpsilonSymbols(
        entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher>&       destination,
        entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher> const& source
    );

    MCAPI static void buildOverload(struct CommandRegistry::Overload& overload);

    MCAPI static struct CommandRegistry::ParseToken*
    collapse(struct CommandRegistry::ParseToken& parent, class CommandRegistry::Symbol symbol);

    MCAPI static struct CommandRegistry::ParseToken* collapseOn(
        struct CommandRegistry::ParseToken& parent,
        class CommandRegistry::Symbol       symbol,
        class CommandRegistry::Symbol       boundSymbol
    );

    MCAPI static struct CommandRegistry::ParseToken*
    expand(struct CommandRegistry::ParseToken& parent, class CommandRegistry::Symbol symbol);

    MCAPI static struct CommandRegistry::ParseToken* expandExcept(
        struct CommandRegistry::ParseToken& parent,
        class CommandRegistry::Symbol       symbol,
        class CommandRegistry::Symbol       boundSymbol
    );

    MCAPI static struct CommandRegistry::ParseToken* fold(
        struct CommandRegistry::ParseToken& parent,
        class CommandRegistry::Symbol       symbol,
        class CommandRegistry::Symbol       boundSymbol
    );

    MCAPI static struct CommandRegistry::ParseToken*
    kill(struct CommandRegistry::ParseToken& parent, class CommandRegistry::Symbol symbol);

    MCAPI static bool readFloat(
        float&                                    value,
        struct CommandRegistry::ParseToken const& token,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    MCAPI static bool readInt(
        int&                                      value,
        struct CommandRegistry::ParseToken const& token,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    MCAPI static bool readRelativeCoordinate(
        bool&                                     relative,
        float&                                    offset,
        struct CommandRegistry::ParseToken const& token,
        bool                                      readIntegerAsCentered,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    MCAPI static bool
    readString(std::string&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
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
