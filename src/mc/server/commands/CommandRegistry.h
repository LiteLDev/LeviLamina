#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/AvailableCommandsPacket.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/CommandChainedSubcommand.h"
#include "mc/server/commands/CommandCompareOperator.h"
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/server/commands/CommandWildcardInt.h"
#include "mc/server/commands/WildcardCommandSelector.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandLexer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandTypeFlag.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/server/commands/SemanticConstraint.h"
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AvailableCommandsPacket;
class BlockType;
class Command;
class CommandOrigin;
class CommandParameterData;
class CommandRunStats;
class CommandSelectorBase;
class IMinecraftEventing;
class Packet;
struct ActorSelectorArgs;
struct AutoCompleteInformation;
struct CommandSyntaxInformation;
namespace Json { class Value; }
// clang-format on

class CommandRegistry {
public:
    // CommandRegistry inner types declare
    // clang-format off
    struct RegistryState;
    struct SoftEnum;
    class Symbol;
    struct ConstrainedValue;
    struct Factorization;
    struct LexicalToken;
    struct OptionalParameterChain;
    struct Overload;
    struct ParamSymbols;
    struct ParseToken;
    struct ChainedSubcommand;
    struct Enum;
    struct ParseRule;
    struct SemanticInfo;
    struct Signature;
    struct SymbolHasher;
    struct SymbolPairHasher;
    struct ParseTable;
    class Parser;
    // clang-format on

    // CommandRegistry inner types define

    using ParseFunction = bool (::CommandRegistry::*)(
        void*,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        ::std::string&,
        ::std::vector<::std::string>&
    ) const;

    enum class HardNonTerminal : int {
        Epsilon                   = 1048576,
        Int                       = 1048577,
        Float                     = 1048578,
        Val                       = 1048579,
        RVal                      = 1048580,
        WildcardInt               = 1048581,
        Operator                  = 1048582,
        CompareOperator           = 1048583,
        Selection                 = 1048584,
        StandaloneSelection       = 1048585,
        WildcardSelection         = 1048586,
        NonIdSelector             = 1048587,
        ScoresArg                 = 1048588,
        ScoresArgs                = 1048589,
        ScoreSelectParam          = 1048590,
        ScoreSelector             = 1048591,
        TagSelector               = 1048592,
        FilePath                  = 1048593,
        FilePathVal               = 1048594,
        FilePathCont              = 1048595,
        IntegerRangeVal           = 1048596,
        IntegerRangePostVal       = 1048597,
        IntegerRange              = 1048598,
        FullIntegerRange          = 1048599,
        RationalRangeVal          = 1048600,
        RationalRangePostVal      = 1048601,
        RationalRange             = 1048602,
        FullRationalRange         = 1048603,
        SelArgs                   = 1048604,
        Args                      = 1048605,
        Arg                       = 1048606,
        MArg                      = 1048607,
        MValue                    = 1048608,
        NameArg                   = 1048609,
        TypeArg                   = 1048610,
        FamilyArg                 = 1048611,
        HasPermissionArg          = 1048612,
        HasPermissionArgs         = 1048613,
        HasPermissionSelector     = 1048614,
        HasPermissionElement      = 1048615,
        HasPermissionElements     = 1048616,
        TagArg                    = 1048617,
        HasItemElement            = 1048618,
        HasItemElements           = 1048619,
        HasItemArg                = 1048620,
        HasItemArgs               = 1048621,
        HasItemSelector           = 1048622,
        EquipmentSlotEnum         = 1048623,
        PropertyValue             = 1048624,
        HasPropertyParamValue     = 1048625,
        HasPropertyParamEnumValue = 1048626,
        HasPropertyArg            = 1048627,
        HasPropertyArgs           = 1048628,
        HasPropertyElement        = 1048629,
        HasPropertyElements       = 1048630,
        HasPropertySelector       = 1048631,
        Id                        = 1048632,
        IdCont                    = 1048633,
        CoordXInt                 = 1048634,
        CoordYInt                 = 1048635,
        CoordZInt                 = 1048636,
        CoordXFloat               = 1048637,
        CoordYFloat               = 1048638,
        CoordZFloat               = 1048639,
        Position                  = 1048640,
        PositionFloat             = 1048641,
        MessageExp                = 1048642,
        Message                   = 1048643,
        MessageRoot               = 1048644,
        PostSelector              = 1048645,
        RawText                   = 1048646,
        RawTextCont               = 1048647,
        JsonValue                 = 1048648,
        JsonField                 = 1048649,
        JsonObject                = 1048650,
        JsonObjectFields          = 1048651,
        JsonObjectCont            = 1048652,
        JsonArray                 = 1048653,
        JsonArrayValues           = 1048654,
        JsonArrayCont             = 1048655,
        BlockState                = 1048656,
        BlockStateKey             = 1048657,
        BlockStateValue           = 1048658,
        BlockStateValues          = 1048659,
        BlockStateArray           = 1048660,
        BlockStateArrayCont       = 1048661,
        Command                   = 1048662,
        SlashCommand              = 1048663,
        CodeBuilderArg            = 1048664,
        CodeBuilderArgs           = 1048665,
        CodeBuilderSelectParam    = 1048666,
        CodeBuilderSelector       = 1048667,
    };

    struct RegistryState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                 signatureCount;
        ::ll::TypedStorage<4, 4, uint>                 enumValueCount;
        ::ll::TypedStorage<4, 4, uint>                 postfixCount;
        ::ll::TypedStorage<4, 4, uint>                 enumCount;
        ::ll::TypedStorage<4, 4, uint>                 enumLookupCount;
        ::ll::TypedStorage<4, 4, uint>                 typeLookupCount;
        ::ll::TypedStorage<4, 4, uint>                 factorizationCount;
        ::ll::TypedStorage<4, 4, uint>                 optionalCount;
        ::ll::TypedStorage<4, 4, uint>                 ruleCount;
        ::ll::TypedStorage<4, 4, uint>                 softEnumCount;
        ::ll::TypedStorage<4, 4, uint>                 constraintCount;
        ::ll::TypedStorage<4, 4, uint>                 chainedSubcommandCount;
        ::ll::TypedStorage<4, 4, uint>                 chainedSubcommandValueCount;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> enumValuesCount;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> constrainedValueCount;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> softEnumValuesCount;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~RegistryState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SoftEnum {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                mName;
        ::std::vector<::std::string> mValues;
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

        Symbol(int val) : mValue(val) {}

        // not trivially copyable
        Symbol(Symbol const& other) : mValue(other.mValue) {}

        Symbol(HardNonTerminal data) : mValue(static_cast<int>(data)) {}

        Symbol(CommandLexer::TokenType data) : mValue(static_cast<int>(data)) {}

        Symbol& operator=(Symbol const& other) {
            mValue = other.mValue;
            return *this;
        }

        [[nodiscard]] inline bool operator==(Symbol const& other) const { return mValue == other.mValue; }

        uint64 toIndex() const { return mValue & 0xffffffffe00fffffull; }
    };

    struct ConstrainedValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mValue;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mEnum;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>>     mConstraints;
        // NOLINTEND
    };

    struct Factorization {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> commandSymbol;
        // NOLINTEND
    };

    struct LexicalToken {
    public:
        // member variables
        // NOLINTBEGIN
        char const*               mText;
        uint                      mLength;
        ::CommandRegistry::Symbol mType;
        ::CommandRegistry::Symbol mIdentifierInfo;
        ::CommandRegistry const&  mRegistry;
        // NOLINTEND

    public:
        // prevent constructor by default
        LexicalToken& operator=(LexicalToken const&);
        LexicalToken(LexicalToken const&);
        LexicalToken();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::CommandRegistry::LexicalToken& operator=(::CommandLexer::Token const& token);
        // NOLINTEND
    };

    struct OptionalParameterChain {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                       parameterCount;
        ::ll::TypedStorage<4, 4, int>                       followingRuleIndex;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> paramSymbol;
        // NOLINTEND
    };

    struct Overload {
    public:
        // Overload inner types define
        using AllocFunction = ::brstd::copyable_function<::std::unique_ptr<::Command>() const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::CommandVersion                         version;
        AllocFunction                            alloc;
        ::std::vector<::CommandParameterData>    params;
        int                                      versionOffset;
        bool                                     isChaining;
        ::std::vector<::CommandRegistry::Symbol> paramsSymbol;
        // NOLINTEND
    };

    struct ParamSymbols {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> x;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> y;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> z;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> dx;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> dy;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> dz;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> r;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rm;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rx;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rxm;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> ry;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rym;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> l;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> lm;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> c;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> m;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> name;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> type;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> family;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> score;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> tag;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> hasitem;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> haspermission;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> hasproperty;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> codebuilder;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ParamSymbols();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

    struct ParseToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::unique_ptr<::CommandRegistry::ParseToken> child;
        ::std::unique_ptr<::CommandRegistry::ParseToken> next;
        ::CommandRegistry::ParseToken*                   parent;
        char const*                                      text;
        uint                                             length;
        ::CommandRegistry::Symbol                        type;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::string toString() const;
        // NOLINTEND
    };

    struct ChainedSubcommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                            name;
        ::Bedrock::typeid_t<::CommandRegistry>   type;
        ParseFunction                            parse;
        ::std::vector<::std::pair<uint64, uint>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ChainedSubcommand();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct Enum {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                              name;
        ::Bedrock::typeid_t<::CommandRegistry>     type;
        ParseFunction                              parse;
        ::std::vector<::std::pair<uint64, uint64>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Enum();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ParseRule {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> nonTerminal;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>>
                                                                            process;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Symbol>> derivation;
        ::ll::TypedStorage<4, 8, ::CommandVersion>                          versions;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseRule& operator=(ParseRule const&);
        ParseRule(ParseRule const&);
        ParseRule();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::CommandRegistry::ParseRule& operator=(::CommandRegistry::ParseRule&& rhs);
        // NOLINTEND
    };

    struct SemanticInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                      mIsValid;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Symbol>> mConstrainedParams;
        ::ll::TypedStorage<8, 32, ::std::string>                            mSoftEnumText;
        ::ll::TypedStorage<8, 32, ::std::string>                            mSoftEnumEscapeCharExceptions;
        ::ll::TypedStorage<8, 16, ::std::set<::CommandRegistry::Symbol>>    mAlreadyCompletedSymbols;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI_C void $dtor();
        // NOLINTEND
    };

    struct Signature {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                              name;
        ::std::string                              description;
        ::std::vector<::CommandRegistry::Overload> overloads;
        ::std::vector<uint>                        chainedSubcommandIndexes;
        ::CommandPermissionLevel                   permissionLevel;
        ::CommandRegistry::Symbol                  commandSymbol;
        ::CommandRegistry::Symbol                  commandAliasEnum;
        ::CommandFlag                              flags;
        int                                        firstRule;
        int                                        firstFactorization;
        int                                        firstOptional;
        bool                                       runnable;
        uint64                                     ruleCounter;
        // NOLINTEND

    public:
        // prevent constructor by default
        Signature& operator=(Signature const&);
        Signature(Signature const&);
        Signature();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Signature(::CommandRegistry::Signature&&);

        MCAPI ~Signature();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::CommandRegistry::Signature&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SymbolHasher {};

    struct SymbolPairHasher {};

    struct ParseTable {
    public:
        // member variables
        // NOLINTBEGIN
          ::std::map<
            ::CommandRegistry::Symbol,
            ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>

            first;
        ::std::map<
            ::CommandRegistry::Symbol,
            ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>

            follow;
        ::entt::dense_map<
            ::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::Symbol>,
            int,
            ::CommandRegistry::SymbolPairHasher,
            ::std::equal_to<void>>

                                   predict;
        ::std::chrono::nanoseconds buildDuration;
        // NOLINTEND
    };

    class Parser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::CommandRegistry const&>             mRegistry;
        ::ll::TypedStorage<8, 8, ::CommandRegistry::ParseTable const*> mParseTable;
        ::ll::TypedStorage<8, 40, ::std::deque<::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::ParseToken*>>>
                                                                                   mStack;
        ::ll::TypedStorage<8, 32, ::CommandRegistry::LexicalToken>                 mNext;
        ::ll::TypedStorage<8, 32, ::std::string>                                   mInput;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry::ParseToken>> mRoot;
        ::ll::TypedStorage<8, 32, ::std::string>                                   mError;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    mErrorParams;
        ::ll::TypedStorage<4, 4, int>                                              mVersion;
        ::ll::TypedStorage<1, 1, bool>                                             mGenerateParams;
        ::ll::TypedStorage<1, 1, bool>                                             mBreakAtEnd;
        // NOLINTEND

    public:
        // prevent constructor by default
        Parser& operator=(Parser const&);
        Parser(Parser const&);
        Parser();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Parser(::CommandRegistry const& registry, int version);

        MCAPI bool _parse(::std::string const& in);

        MCAPI ::std::unique_ptr<::CommandSelector<::Actor>>
        createSelector(::std::string const& selectorString, ::CommandOrigin const& origin);

        MCAPI ::std::vector<::std::string> getErrorParams() const;

        MCAPI bool parseCommand(::std::string const& in);

        MCAPI bool parseSelector(::std::string const& in);

        MCAPI ~Parser();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::CommandRegistry const& registry, int version);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using ChainedSubcommandConversionFunction = ::std::function<void(void*, uint64)>;

    using ChainedSubcommandID = uint;

    using ChainedSubcommandValueID = uint64;

    using CommandOverrideFunctor =
        ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>;

    using CommandVisitCallback = ::std::function<bool(::CommandRegistry::ParseToken const*, ::CommandOrigin const&)>;

    using ConstrainedValueID = uint;

    using ConstrainedValueLookupKey = ::std::pair<uint64, uint>;

    using CustomStorageGetFn = void* (*)(::Command*, int);

    using CustomStorageIsSetFn = bool* (*)(::Command*, int);

    using EnumConversionFunction = ::std::function<void(void*, uint64)>;

    using EnumID = uint;

    using EnumValueID = uint64;

    using HardTerminal = ::CommandLexer::TokenType;

    using NonTerminal = ::CommandRegistry::Symbol;

    using ParamVisitCallback = ::std::function<
        bool(::CommandParameterData const&, ::CommandOrigin const&, ::CommandRegistry::ParseToken const*)>;

    using ParseMap = ::std::map<
        ::CommandRegistry::Symbol,
        ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>;

    using ParseTableMap = ::std::map<uint, ::CommandRegistry::ParseTable>;

    using PredictTable = ::entt::dense_map<
        ::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::Symbol>,
        int,
        ::CommandRegistry::SymbolPairHasher,
        ::std::equal_to<void>>;

    using ProcessFunction =
        ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>;

    using RuleIndex = int;

    using ScoreboardScoreAccessor = ::std::function<int(bool&, ::std::string const&, ::Actor const&)>;

    using SemanticConstraintID = uchar;

    using SoftEnumID = uint;

    using SymbolSet =
        ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>;

    using SymbolVector = ::std::vector<::CommandRegistry::Symbol>;

    using Terminal = ::CommandRegistry::Symbol;

    using ValueTypeID = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::std::function<void(::Packet const&)>                   mNetworkUpdateCallback;
    ScoreboardScoreAccessor                                  mGetScoreForObjective;
    bool                                                     mIsEduMode;
    ::std::vector<::CommandRegistry::ParseRule>              mRules;
    ::std::map<uint, ::CommandRegistry::ParseTable>          mParseTables;
    ::std::vector<::CommandRegistry::OptionalParameterChain> mOptionals;
    ::std::vector<::std::string>                             mEnumValues;
    ::std::vector<::CommandRegistry::Enum>                   mEnums;
    ::std::vector<::std::string>                             mChainedSubcommandValues;
    ::std::vector<::CommandRegistry::ChainedSubcommand>      mChainedSubcommands;
    ::std::vector<::CommandRegistry::Factorization>          mFactorizations;
    ::std::vector<::std::string>                             mPostfixes;
    ::std::map<::std::string, uint>                          mEnumLookup;
    ::std::map<::std::string, uint64>                        mEnumValueLookup;
    ::std::map<::std::string, uint>                          mChainedSubcommandLookup;
    ::std::map<::std::string, uint64>                        mChainedSubcommandValueLookup;
    ::std::vector<::CommandRegistry::Symbol>                 mCommandSymbols;
    ::std::map<::std::string, ::CommandRegistry::Signature>  mSignatures;
    ::std::map<::Bedrock::typeid_t<::CommandRegistry>, int>  mTypeLookup;
    ::std::map<::std::string, ::std::string>                 mAliases;
    ::std::vector<::SemanticConstraint>                      mSemanticConstraints;
    ::std::map<::SemanticConstraint, uchar>                  mSemanticConstraintLookup;
    ::std::vector<::CommandRegistry::ConstrainedValue>       mConstrainedValues;
    ::std::map<::std::pair<uint64, uint>, uint>              mConstrainedValueLookup;
    ::std::vector<::CommandRegistry::SoftEnum>               mSoftEnums;
    ::std::map<::std::string, uint>                          mSoftEnumLookup;
    ::std::vector<::CommandRegistry::RegistryState>          mStateStack;
    ::CommandRegistry::ParamSymbols                          mArgs;
    ::std::unordered_set<int>                                mSkipOnEpsAutocompleteSymbols;
    ::std::unordered_set<int>                                mAllowEmptySymbols;
    CommandOverrideFunctor                                   mCommandOverrideFunctor;
    ::std::unique_ptr<::CommandRunStats>                     mCommandRunStats;
    // NOLINTEND

    template <class T>
    bool parse(
        void*                              storage,
        CommandRegistry::ParseToken const& token,
        CommandOrigin const&               origin,
        int                                version,
        std::string&                       error,
        std::vector<std::string>&          errorParams
    ) const;

    template <class E, class C>
    bool parseEnum(
        void*                              storage,
        CommandRegistry::ParseToken const& token,
        CommandOrigin const&               origin,
        int                                version,
        std::string&                       error,
        std::vector<std::string>&          errorParams
    ) const;

    uint64 getEnumData(ParseToken const& token) const {
        auto& values = mEnums[token.type.toIndex()].values;
        return std::lower_bound(
                   values.begin(),
                   values.end(),
                   token.child->type.toIndex(),
                   [](auto& pair, auto& child) { return pair.first < child; }
        )->second;
    }

public:
    // prevent constructor by default
    CommandRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandRegistry(bool isEduMode);

    MCAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        ::std::string const&                                   name,
        ::std::vector<::std::pair<::std::string, uint>> const& strings,
        ::Bedrock::typeid_t<::CommandRegistry>                 type,
        bool (CommandRegistry::*parse)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            ::std::string&,
            ::std::vector<::std::string>&
        ) const,
        ::CommandRegistry::Signature* signature
    );

    MCAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        ::std::string const&                            name,
        ::std::vector<::std::pair<uint64, uint>> const& values,
        ::Bedrock::typeid_t<::CommandRegistry>          type,
        bool (CommandRegistry::*parse)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            ::std::string&,
            ::std::vector<::std::string>&
        ) const,
        ::CommandRegistry::Signature* signature
    );

    MCAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        ::std::string const&                                     name,
        ::std::vector<::std::pair<::std::string, uint64>> const& strings,
        ::Bedrock::typeid_t<::CommandRegistry>                   type,
        bool (CommandRegistry::*parse)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            ::std::string&,
            ::std::vector<::std::string>&
        ) const
    );

    MCAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        ::std::string const&                              name,
        ::std::vector<::std::pair<uint64, uint64>> const& values,
        ::Bedrock::typeid_t<::CommandRegistry>            type,
        bool (CommandRegistry::*parse)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            ::std::string&,
            ::std::vector<::std::string>&
        ) const
    );

    MCAPI ::CommandRegistry::Symbol _addFunctionSoftEnum();

    MCAPI ::std::unique_ptr<::CommandSelector<::Actor>> _createSelector(
        ::CommandRegistry::ParseToken const& root,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    ) const;

    MCAPI ::CommandRegistry::Symbol _getConstrainedParamEnumSymbol(::CommandRegistry::Symbol symbol) const;

    MCAPI bool _matchesEnumConstraintsSet(
        ::CommandRegistry::Symbol const& commandParamSymbol,
        ::CommandOrigin const&           origin,
        ::CommandRegistry::Symbol const& value,
        ::SemanticConstraint             requiredConstraints
    ) const;

    MCAPI_C ::std::vector<::CommandRegistry::Symbol> _reconstructParseStack(
        ::CommandRegistry::ParseToken const* paramTree,
        ::CommandRegistry::SemanticInfo&     semanticInfo
    ) const;

    MCAPI_C ::std::vector<::CommandRegistry::Symbol> _reconstructParseStack(
        ::std::vector<::CommandParameterData> const& params,
        uint                                         matchedParams,
        ::CommandRegistry::ParseToken const*         commandParseTree,
        ::CommandRegistry::SemanticInfo&             semanticInfo
    ) const;

    MCAPI void addChainedSubcommandValuesToExisting(uint index, ::std::vector<::std::pair<uint64, uint>> const& values);

    MCAPI void addEnumValueConstraints(
        ::std::string const&                enumName,
        ::std::vector<::std::string> const& values,
        ::SemanticConstraint                constraints
    );

    MCAPI int addEnumValues(::std::string const& name, ::std::vector<::std::string> const& values);

    MCAPI void addEnumValuesToExisting(uint index, ::std::vector<::std::pair<uint64, uint64>> const& values);

    MCAPI ::CommandRegistry::Symbol addPostfix(::std::string const& name);

    MCAPI void addRule(
        ::CommandRegistry::Symbol                symbol,
        ::std::vector<::CommandRegistry::Symbol> derivation,
        ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>
                         process,
        ::CommandVersion versions
    );

    MCAPI void addSemanticConstraint(::SemanticConstraint constraintType);

    MCAPI int addSoftEnum(::std::string const& name, ::std::vector<::std::string> values);

    MCAPI void addSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI ::CommandRegistry::Symbol addSoftTerminal(::std::string const& name);

    MCAPI_C void autoComplete(
        ::CommandRegistry::Symbol        symbol,
        ::std::string const&             cmdLine,
        ::std::string const&             partialMatch,
        bool                             newWord,
        ::CommandOrigin const&           origin,
        ::AutoCompleteInformation&       info,
        ::CommandRegistry::SemanticInfo& semanticInfo
    ) const;

    MCAPI_C void autoCompleteCommand(
        ::std::string const&       partialMatch,
        ::CommandOrigin const&     origin,
        ::AutoCompleteInformation& info
    ) const;

    MCAPI void buildFirstSet(::CommandRegistry::ParseTable& table, ::CommandRegistry::Symbol t, uint version) const;

    MCAPI void buildFollowSet(
        ::CommandRegistry::ParseTable&         table,
        ::CommandRegistry::Symbol              t,
        uint                                   version,
        ::std::set<::CommandRegistry::Symbol>& workingSet
    ) const;

    MCAPI ::CommandRegistry::Symbol buildOptionalRuleChain(
        ::CommandRegistry::Signature const&             signature,
        ::std::vector<::CommandParameterData> const&    params,
        ::std::vector<::CommandRegistry::Symbol> const& symbols
    );

    MCAPI ::CommandRegistry::Symbol buildOptionalRuleChain(
        ::CommandRegistry::Signature const&          signature,
        ::std::vector<::CommandParameterData> const& params,
        ::CommandParameterData const*                firstOptional,
        uint64                                       count
    );

    MCAPI void buildParseTable(uint version) const;

    MCAPI void buildPredictTable(::CommandRegistry::ParseTable& table, uint version) const;

    MCAPI ::CommandRegistry::Symbol buildRules(
        ::CommandRegistry::Signature&                                       signature,
        ::std::vector<::gsl::not_null<::CommandRegistry::Overload*>> const& overloads,
        uint64                                                              firstParam
    );

    MCAPI bool
    buildSelector(::ActorSelectorArgs const& args, ::CommandSelectorBase* output, ::std::string& error) const;

    MCAPI ::std::unique_ptr<::Command> createCommand(
        ::CommandRegistry::ParseToken const& root,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    ) const;

    MCAPI ::std::string describe(::CommandParameterData const& param) const;

    MCAPI ::std::string describe(::CommandRegistry::Symbol symbol) const;

    MCAPI ::std::string describe(
        ::CommandRegistry::Signature const& command,
        ::std::string const&                alias,
        ::CommandRegistry::Overload const&  overload,
        uint                                highlight,
        uint*                               start,
        uint*                               length
    ) const;

    MCAPI ::CommandRegistry::Signature const* findCommand(::std::string const&) const;

    MCFOLD ::CommandRegistry::Signature* findCommand(::std::string const& name);

    MCAPI ::CommandRegistry::Symbol findEnumValue(::std::string const& name) const;

    MCAPI ::CommandRegistry::Symbol findIdentifierInfo(::std::string const& name) const;

    MCAPI ::CommandRegistry::Symbol findPostfix(::std::string const& input) const;

    MCAPI void fireCommandParseTableTelemetry(::IMinecraftEventing const& eventing, bool isServer) const;

    MCAPI void forEachNonTerminal(::std::function<void(::CommandRegistry::Symbol)> func) const;

    MCAPI ::Json::Value generateDocumentationMetadata(bool generateInternalMetadata) const;

    MCAPI ::std::vector<::std::string> getAlphabeticalLookup(::CommandOrigin const& origin) const;

    MCAPI_C ::std::unique_ptr<::AutoCompleteInformation> getAutoCompleteOptions(
        ::CommandOrigin const& origin,
        ::std::string const&   _cmdLine,
        uint                   cursorPositionUnsafe
    ) const;

    MCAPI ::std::string getCommandName(::std::string const& commandLine) const;

    MCAPI ::CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(::CommandOrigin const& origin, ::std::string const& commandName) const;

    MCAPI ::InvertableFilter<::std::string> getInvertableFilter(::CommandRegistry::ParseToken const& token) const;

    MCAPI_C ::CommandSyntaxInformation getOverloadSyntaxInformation(
        ::CommandOrigin const& origin,
        ::std::string const&   cmdLine,
        uint                   cursorPosition
    ) const;

    MCAPI_C bool isCommandOfType(::std::string const& nameIn, ::CommandTypeFlag commandType) const;

    MCAPI bool isValid(::CommandRegistry::Symbol symbol) const;

    MCAPI_C void loadRemoteCommands(::AvailableCommandsPacket const& packet);

    MCAPI bool originCanRun(::CommandOrigin const& origin, ::CommandRegistry::Signature const& command) const;

    MCAPI bool originCanRun(::CommandOrigin const& origin, ::CommandRegistry::Overload const& overload) const;

    MCAPI_C bool
    originCanRunOverloadWithParam(::CommandOrigin const& origin, ::CommandParameterData const& param) const;

    MCAPI_C ::std::string parsePartialCommand(
        ::CommandRegistry::Parser& parser,
        ::std::string const&       _cmdLine,
        uint                       cursorPosition,
        bool                       cutLastToken
    ) const;

    MCAPI bool parseSelector(
        ::ActorSelectorArgs&                 args,
        ::CommandRegistry::ParseToken const& token,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    ) const;

    MCAPI_C void popState();

    MCAPI_C void pushState();

    MCAPI void registerAlias(::std::string name, ::std::string alias);

    MCAPI void registerCommand(
        ::std::string const&     name,
        char const*              description,
        ::CommandPermissionLevel requirement,
        ::CommandFlag            f1,
        ::CommandFlag            f2 = {}
    );

    MCAPI void registerOverload(
        char const*                                     command,
        ::CommandVersion                                version,
        ::std::function<::std::unique_ptr<::Command>()> allocFn,
        ::std::vector<::CommandParameterData>           params
    );

    MCAPI void registerOverloadInternal(::CommandRegistry::Signature& signature, ::CommandRegistry::Overload& overload);

    MCAPI void removeSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI ::AvailableCommandsPacket serializeAvailableCommands() const;

    MCAPI void setCommandRegistrationOverride(CommandOverrideFunctor functor);

    MCAPI void setSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI void setupChainedSubcommandOverloadRules(::CommandRegistry::Signature& signature);

    MCAPI void setupOverloadRules(::CommandRegistry::Signature& signature);

    MCAPI ::std::string symbolToString(::CommandRegistry::Symbol symbol) const;

    MCAPI ~CommandRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::BlockType const* _getBlockFromCmdParameters(::std::string const& parameters);

    MCAPI static ::std::string _removeStringQuotes(::std::string const& str);

    MCFOLD static ::CommandRegistry::ParseToken*
    collapse(::CommandRegistry::ParseToken& parent, ::CommandRegistry::Symbol symbol);

    MCAPI static ::CommandRegistry::ParseToken* collapseOn(
        ::CommandRegistry::ParseToken& parent,
        ::CommandRegistry::Symbol      symbol,
        ::CommandRegistry::Symbol      boundSymbol
    );

    MCAPI static ::CommandRegistry::ParseToken*
    expand(::CommandRegistry::ParseToken& parent, ::CommandRegistry::Symbol symbol);

    MCAPI static ::CommandRegistry::ParseToken* expandExcept(
        ::CommandRegistry::ParseToken& parent,
        ::CommandRegistry::Symbol      symbol,
        ::CommandRegistry::Symbol      boundSymbol
    );

    MCAPI static ::CommandRegistry::ParseToken* fold(
        ::CommandRegistry::ParseToken& parent,
        ::CommandRegistry::Symbol      symbol,
        ::CommandRegistry::Symbol      boundSymbol
    );

    MCAPI static ::CommandRegistry::ParseToken*
    kill(::CommandRegistry::ParseToken& parent, ::CommandRegistry::Symbol symbol);

    MCAPI static bool readFloat(
        float&                               value,
        ::CommandRegistry::ParseToken const& token,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );

    MCAPI static bool readInt(
        int&                                 value,
        ::CommandRegistry::ParseToken const& token,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );

    MCAPI static bool readRelativeCoordinate(
        bool&                                relative,
        float&                               offset,
        ::CommandRegistry::ParseToken const& token,
        bool                                 readIntegerAsCentered,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );

    MCAPI static bool readString(
        ::std::string&                       value,
        ::CommandRegistry::ParseToken const& token,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& CODE_STATUS_PROPERTY_NAME();

    MCAPI static char const*& COMMAND_NAME_ENUM_NAME();

    MCAPI static char const*& FUNCTION_NAME_SOFTENUM_NAME();

    MCAPI static char const*& HASITEM_PARAM_DATA();

    MCAPI static char const*& HASITEM_PARAM_ITEM();

    MCAPI static char const*& HASITEM_PARAM_LOCATION();

    MCAPI static char const*& HASITEM_PARAM_QUANTITY();

    MCAPI static char const*& HASITEM_PARAM_SLOT();

    MCAPI static char const*& HASPERMISSIONSTATE_ENUM_DISABLED();

    MCAPI static char const*& HASPERMISSIONSTATE_ENUM_ENABLED();

    MCAPI static char const*& HASPROPERTY_PARAM_PROPERTY_NAME();

    MCAPI static ::std::add_lvalue_reference_t<::std::pair<
        bool (CommandRegistry::*)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            ::std::string&,
            ::std::vector<::std::string>&
        ) const,
        ::CommandRegistry::Symbol> const[]>
    ParseRuleSymbols();

    MCAPI static char const*& TAG_VALUES_SOFTENUM_NAME();

    MCAPI static char const*& UNLOCKABLE_RECIPES_SOFTENUM_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isEduMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

// following are the functions required by CommandParameterData's ParseFunction
MCTAPI bool CommandRegistry::parse<std::string>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<int>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<float>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<Json::Value>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandCompareOperator>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandFilePath>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandIntegerRange>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandMessage>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandOperator>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandPosition>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandPositionFloat>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandRawText>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandSelector<Actor>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandSelector<Player>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandWildcardInt>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<class RelativeFloat>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<WildcardCommandSelector<Actor>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<std::unique_ptr<::Command>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<std::vector<BlockStateCommandParam>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parseEnum<CommandChainedSubcommand, void>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;
