#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandLexer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/server/commands/SemanticConstraint.h"
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AvailableCommandsPacket;
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
    struct ChainedSubcommand;
    struct ConstrainedValue;
    struct Enum;
    struct Factorization;
    struct LexicalToken;
    struct OptionalParameterChain;
    struct Overload;
    struct ParamSymbols;
    struct ParseRule;
    struct ParseTable;
    struct ParseToken;
    struct ParseTreeVisitor;
    class Parser;
    struct RegistryState;
    struct SemanticInfo;
    struct Signature;
    struct SoftEnum;
    class Symbol;
    struct SymbolHasher;
    struct SymbolPairHasher;
    // clang-format on

    // CommandRegistry inner types define
    using ValueTypeID = uint64;

    using EnumValueID = uint64;

    using EnumID = uint;

    using SoftEnumID = uint;

    using ChainedSubcommandValueID = uint64;

    using ChainedSubcommandID = uint;

    using SemanticConstraintID = uchar;

    using ConstrainedValueID = uint;

    using ConstrainedValueLookupKey = ::std::pair<uint64, uint>;

    using CommandOverrideFunctor =
        ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>;

    using ScoreboardScoreAccessor = ::std::function<int(bool&, ::std::string const&, ::Actor const&)>;

    using HardTerminal = ::CommandLexer::TokenType;

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

    class Symbol {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        // NOLINTEND
    };

    struct SymbolHasher {};

    struct SymbolPairHasher {};

    using NonTerminal = ::CommandRegistry::Symbol;

    using Terminal = ::CommandRegistry::Symbol;

    using SymbolVector = ::std::vector<::CommandRegistry::Symbol>;

    using SymbolSet =
        ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>;

    using ParseMap = ::std::map<
        ::CommandRegistry::Symbol,
        ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>;

    struct Overload {
    public:
        // Overload inner types define
        using AllocFunction = ::brstd::copyable_function<::std::unique_ptr<::Command>() const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::CommandVersion>                                                  version;
        ::ll::TypedStorage<8, 64, ::brstd::copyable_function<::std::unique_ptr<::Command>() const>> alloc;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandParameterData>>                            params;
        ::ll::TypedStorage<4, 4, int>                                                               versionOffset;
        ::ll::TypedStorage<1, 1, bool>                                                              isChaining;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Symbol>>                         paramsSymbol;
        // NOLINTEND
    };

    struct Signature {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                              name;
        ::ll::TypedStorage<8, 32, ::std::string>                              description;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Overload>> overloads;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>>                        chainedSubcommandIndexes;
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                    permissionLevel;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol>                   commandSymbol;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol>                   commandAliasEnum;
        ::ll::TypedStorage<2, 2, ::CommandFlag>                               flags;
        ::ll::TypedStorage<4, 4, int>                                         firstRule;
        ::ll::TypedStorage<4, 4, int>                                         firstFactorization;
        ::ll::TypedStorage<4, 4, int>                                         firstOptional;
        ::ll::TypedStorage<1, 1, bool>                                        runnable;
        ::ll::TypedStorage<8, 8, uint64>                                      ruleCounter;
        // NOLINTEND

    public:
        // prevent constructor by default
        Signature& operator=(Signature const&);
        Signature(Signature const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Signature(::CommandRegistry::Signature&&);

        MCNAPI ~Signature();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CommandRegistry::Signature&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LexicalToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>               mText;
        ::ll::TypedStorage<4, 4, uint>                      mLength;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mType;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mIdentifierInfo;
        ::ll::TypedStorage<8, 8, ::CommandRegistry const&>  mRegistry;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::CommandRegistry::LexicalToken& operator=(::CommandLexer::Token const& token);
        // NOLINTEND
    };

    struct ParseToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry::ParseToken>> child;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry::ParseToken>> next;
        ::ll::TypedStorage<8, 8, ::CommandRegistry::ParseToken*>                   parent;
        ::ll::TypedStorage<8, 8, char const*>                                      text;
        ::ll::TypedStorage<4, 4, uint>                                             length;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol>                        type;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::string toString() const;
        // NOLINTEND
    };

    using ProcessFunction =
        ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>;

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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::CommandRegistry::ParseRule& operator=(::CommandRegistry::ParseRule&& rhs);
        // NOLINTEND
    };

    using RuleIndex = int;

    struct OptionalParameterChain {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkdcc5ea;
        ::ll::UntypedStorage<4, 4> mUnk61affa;
        ::ll::UntypedStorage<4, 4> mUnka4c53c;
        // NOLINTEND

    public:
        // prevent constructor by default
        OptionalParameterChain& operator=(OptionalParameterChain const&);
        OptionalParameterChain(OptionalParameterChain const&);
        OptionalParameterChain();
    };

    struct Factorization {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6c8d20;
        // NOLINTEND

    public:
        // prevent constructor by default
        Factorization& operator=(Factorization const&);
        Factorization(Factorization const&);
        Factorization();
    };

    using ParseFunction =
        bool (::CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const;

    using EnumConversionFunction = ::std::function<void(void*, uint64)>;

    struct Enum {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                         name;
        ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::CommandRegistry>> type;
        ::ll::TypedStorage<
            8,
            8,
            bool (::CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
                const>
                                                                              parse;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint64, uint64>>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Enum();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ChainedSubcommandConversionFunction = ::std::function<void(void*, uint64)>;

    struct ChainedSubcommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                         name;
        ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::CommandRegistry>> type;
        ::ll::TypedStorage<
            8,
            8,
            bool (::CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
                const>
                                                                            parse;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint64, uint>>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ChainedSubcommand();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SoftEnum {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                mName;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mValues;
        // NOLINTEND
    };

    struct ConstrainedValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk1f98ad;
        ::ll::UntypedStorage<4, 4>  mUnk426cb0;
        ::ll::UntypedStorage<8, 24> mUnkc30381;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstrainedValue& operator=(ConstrainedValue const&);
        ConstrainedValue(ConstrainedValue const&);
        ConstrainedValue();
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
        MCNAPI ParamSymbols();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND
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
        MCNAPI ~RegistryState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PredictTable = ::entt::dense_map<
        ::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::Symbol>,
        int,
        ::CommandRegistry::SymbolPairHasher,
        ::std::equal_to<void>>;

    struct ParseTable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            16,
            ::std::map<
                ::CommandRegistry::Symbol,
                ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>>
            first;
        ::ll::TypedStorage<
            8,
            16,
            ::std::map<
                ::CommandRegistry::Symbol,
                ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>>
            follow;
        ::ll::TypedStorage<
            8,
            72,
            ::entt::dense_map<
                ::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::Symbol>,
                int,
                ::CommandRegistry::SymbolPairHasher,
                ::std::equal_to<void>>>
                                                             predict;
        ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> buildDuration;
        // NOLINTEND
    };

    struct SemanticInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnka0701b;
        ::ll::UntypedStorage<8, 24> mUnke3831e;
        ::ll::UntypedStorage<8, 32> mUnk220a81;
        ::ll::UntypedStorage<8, 32> mUnkb80526;
        ::ll::UntypedStorage<8, 16> mUnk88e4b6;
        // NOLINTEND

    public:
        // prevent constructor by default
        SemanticInfo& operator=(SemanticInfo const&);
        SemanticInfo(SemanticInfo const&);
        SemanticInfo();
    };

    using ParamVisitCallback = ::std::function<
        bool(::CommandParameterData const&, ::CommandOrigin const&, ::CommandRegistry::ParseToken const*)>;

    using CommandVisitCallback = ::std::function<bool(::CommandRegistry::ParseToken const*, ::CommandOrigin const&)>;

    using ParseTableMap = ::std::map<uint, ::CommandRegistry::ParseTable>;

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
        // member functions
        // NOLINTBEGIN
        MCNAPI Parser(::CommandRegistry const& registry, int version);

        MCNAPI bool _parse(::std::string const& in);

        MCNAPI ::std::unique_ptr<::CommandSelector<::Actor>>
        createSelector(::std::string const& selectorString, ::CommandOrigin const& origin);

        MCNAPI ::std::vector<::std::string> getErrorParams() const;

        MCNAPI bool parseCommand(::std::string const& in);

        MCNAPI bool parseSelector(::std::string const& in);

        MCNAPI ~Parser();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CommandRegistry const& registry, int version);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ParseTreeVisitor {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::Packet const&)>>                            mNetworkUpdateCallback;
    ::ll::TypedStorage<8, 64, ::std::function<int(bool&, ::std::string const&, ::Actor const&)>> mGetScoreForObjective;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsEduMode;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::ParseRule>>                       mRules;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::CommandRegistry::ParseTable>>                   mParseTables;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::OptionalParameterChain>>          mOptionals;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                      mEnumValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Enum>>                            mEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                            mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::ChainedSubcommand>>     mChainedSubcommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Factorization>>         mFactorizations;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                            mPostfixes;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, uint>>                         mEnumLookup;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, uint64>>                       mEnumValueLookup;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, uint>>                         mChainedSubcommandLookup;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, uint64>>                       mChainedSubcommandValueLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Symbol>>                mCommandSymbols;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::CommandRegistry::Signature>> mSignatures;
    ::ll::TypedStorage<8, 16, ::std::map<::Bedrock::typeid_t<::CommandRegistry>, int>> mTypeLookup;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                mAliases;
    ::ll::TypedStorage<8, 24, ::std::vector<::SemanticConstraint>>                     mSemanticConstraints;
    ::ll::TypedStorage<8, 16, ::std::map<::SemanticConstraint, uchar>>                 mSemanticConstraintLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::ConstrainedValue>>      mConstrainedValues;
    ::ll::TypedStorage<8, 16, ::std::map<::std::pair<uint64, uint>, uint>>             mConstrainedValueLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::SoftEnum>>              mSoftEnums;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, uint>>                         mSoftEnumLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::RegistryState>>         mStateStack;
    ::ll::TypedStorage<4, 100, ::CommandRegistry::ParamSymbols>                        mArgs;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>                               mSkipOnEpsAutocompleteSymbols;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>                               mAllowEmptySymbols;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>>
                                                                   mCommandOverrideFunctor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRunStats>> mCommandRunStats;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandRegistry(bool isEduMode);

    MCAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        ::std::string const&                                   name,
        ::std::vector<::std::pair<::std::string, uint>> const& strings,
        ::Bedrock::typeid_t<::CommandRegistry>                 type,
        bool (CommandRegistry::*
                  signature)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const,
        ::CommandRegistry::Signature* parse
    );

    MCAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        ::std::string const&                            name,
        ::std::vector<::std::pair<uint64, uint>> const& values,
        ::Bedrock::typeid_t<::CommandRegistry>          type,
        bool (CommandRegistry::*
                  signature)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const,
        ::CommandRegistry::Signature* parse
    );

    MCAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        ::std::string const&                                     name,
        ::std::vector<::std::pair<::std::string, uint64>> const& strings,
        ::Bedrock::typeid_t<::CommandRegistry>                   type,
        bool (CommandRegistry::*
                  parse)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const
    );

    MCAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        ::std::string const&                              name,
        ::std::vector<::std::pair<uint64, uint64>> const& values,
        ::Bedrock::typeid_t<::CommandRegistry>            type,
        bool (CommandRegistry::*
                  parse)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const
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

    MCAPI bool _isCommandElementValid(::std::string const& name) const;

    MCAPI bool _matchesEnumConstraintsSet(
        ::CommandRegistry::Symbol const& commandParamSymbol,
        ::CommandOrigin const&           origin,
        ::CommandRegistry::Symbol const& value,
        ::SemanticConstraint             requiredConstraints
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
        ::CommandRegistry::Signature const& alias,
        ::std::string const&                overload,
        ::CommandRegistry::Overload const&  highlight,
        uint                                start,
        uint*                               length,
        uint*                               command
    ) const;

    MCAPI ::CommandRegistry::Signature const* findCommand(::std::string const&) const;

    MCFOLD ::CommandRegistry::Signature* findCommand(::std::string const& name);

    MCAPI ::CommandRegistry::Symbol findEnumValue(::std::string const& name) const;

    MCAPI ::CommandRegistry::Symbol findIdentifierInfo(::std::string const& name) const;

    MCAPI ::CommandRegistry::Symbol findPostfix(::std::string const& input) const;

    MCAPI void fireCommandParseTableTelemetry(::IMinecraftEventing const& eventing, bool isServer) const;

    MCAPI void forEachNonTerminal(::std::function<void(::CommandRegistry::Symbol)> func) const;

    MCAPI ::Json::Value generateDocumentationMetadata(bool generateInternalMetadata) const;

    MCAPI ::std::vector<::std::string> getAliases(::std::string const& command) const;

    MCAPI ::std::vector<::std::string> getAlphabeticalLookup(::CommandOrigin const& origin) const;

    MCAPI ::std::string getCommandName(::std::string const& commandLine) const;

    MCAPI ::CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(::CommandOrigin const& origin, ::std::string const& commandName) const;

    MCAPI ::InvertableFilter<::std::string> getInvertableFilter(::CommandRegistry::ParseToken const& token) const;

    MCAPI bool isValid(::CommandRegistry::Symbol symbol) const;

    MCAPI bool originCanRun(::CommandOrigin const& origin, ::CommandRegistry::Signature const& command) const;

    MCAPI bool originCanRun(::CommandOrigin const& origin, ::CommandRegistry::Overload const& overload) const;

    MCAPI bool parseSelector(
        ::ActorSelectorArgs&                 args,
        ::CommandRegistry::ParseToken const& token,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    ) const;

    MCAPI void registerAlias(::std::string name, ::std::string alias);

    MCAPI void registerCommand(
        ::std::string const&     name,
        char const*              description,
        ::CommandPermissionLevel requirement,
        ::CommandFlag            f1,
        ::CommandFlag            f2
    );

    MCAPI void registerOverloadInternal(::CommandRegistry::Signature& signature, ::CommandRegistry::Overload& overload);

    MCAPI void removeSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI ::AvailableCommandsPacket serializeAvailableCommands() const;

    MCAPI void setCommandRegistrationOverride(
        ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)> functor
    );

    MCAPI void setSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI void setupChainedSubcommandOverloadRules(::CommandRegistry::Signature& signature);

    MCAPI void setupOverloadRules(::CommandRegistry::Signature& signature);

    MCAPI ::std::string symbolToString(::CommandRegistry::Symbol symbol) const;

    MCAPI ~CommandRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
        bool (CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const,
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
