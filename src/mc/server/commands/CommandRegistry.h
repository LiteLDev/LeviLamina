#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandLexer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandStatus.h"
#include "mc/server/commands/CommandTypeFlag.h"
#include "mc/server/commands/SemanticConstraint.h"
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct Enum {
    public:
        // prevent constructor by default
        Enum& operator=(Enum const&);
        Enum(Enum const&);
        Enum();

    public:
        // NOLINTBEGIN
        MCAPI ~Enum();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct LexicalToken {
    public:
        // prevent constructor by default
        LexicalToken& operator=(LexicalToken const&);
        LexicalToken(LexicalToken const&);
        LexicalToken();

    public:
        // NOLINTBEGIN
        MCAPI struct CommandRegistry::LexicalToken& operator=(struct CommandLexer::Token const& token);

        // NOLINTEND
    };

    struct Overload {
    public:
        // prevent constructor by default
        Overload& operator=(Overload const&);
        Overload(Overload const&);
        Overload();

    public:
        // NOLINTBEGIN
        MCAPI Overload(struct CommandRegistry::Overload&&);

        MCAPI Overload(class CommandVersion, std::unique_ptr<class Command> (*)());

        MCAPI ~Overload();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct CommandRegistry::Overload&&);

        MCAPI void* ctor$(class CommandVersion, std::unique_ptr<class Command> (*)());

        MCAPI void dtor$();

        // NOLINTEND
    };

    class ParamSymbols {
    public:
        // prevent constructor by default
        ParamSymbols& operator=(ParamSymbols const&);
        ParamSymbols(ParamSymbols const&);

    public:
        // NOLINTBEGIN
        MCAPI ParamSymbols();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        // NOLINTEND
    };

    struct ParseRule {
    public:
        // prevent constructor by default
        ParseRule& operator=(ParseRule const&);
        ParseRule(ParseRule const&);
        ParseRule();

    public:
        // NOLINTBEGIN
        MCAPI struct CommandRegistry::ParseRule& operator=(struct CommandRegistry::ParseRule&& rhs);

        // NOLINTEND
    };

    struct ParseTable {
    public:
        // prevent constructor by default
        ParseTable& operator=(ParseTable const&);
        ParseTable(ParseTable const&);

    public:
        // NOLINTBEGIN
        MCAPI ParseTable();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        // NOLINTEND
    };

    struct ParseToken {
    public:
        // prevent constructor by default
        ParseToken& operator=(ParseToken const&);
        ParseToken(ParseToken const&);
        ParseToken();

    public:
        // NOLINTBEGIN
        MCAPI std::string toString() const;

        // NOLINTEND
    };

    struct Signature {
    public:
        // prevent constructor by default
        Signature& operator=(Signature const&);
        Signature(Signature const&);
        Signature();

    public:
        // NOLINTBEGIN
        MCAPI Signature(struct CommandRegistry::Signature&&);

        MCAPI ~Signature();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct CommandRegistry::Signature&&);

        MCAPI void dtor$();

        // NOLINTEND
    };

    class Symbol {
    public:
        // prevent constructor by default
        Symbol& operator=(Symbol const&);
        Symbol(Symbol const&);
        Symbol();

    public:
        // NOLINTBEGIN
        MCAPI explicit Symbol(uint64 value);

        MCAPI uint64 toIndex() const;

        MCAPI int value() const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(uint64 value);

        // NOLINTEND
    };

    class Parser {
    public:
        // prevent constructor by default
        Parser& operator=(Parser const&);
        Parser(Parser const&);
        Parser();

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
        MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
            entt::internal::
                dense_map_node<std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>, int>>>>>
              _findParsePrediction(
                  struct CommandRegistry::LexicalToken const& lexToken,
                  class CommandRegistry::Symbol const&        stackSymbol
              ) const;

        MCAPI bool _parse(std::string const& in);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class CommandRegistry const& registry, int version);

        MCAPI void dtor$();

        // NOLINTEND
    };

    struct RegistryState {
    public:
        // prevent constructor by default
        RegistryState& operator=(RegistryState const&);
        RegistryState(RegistryState const&);
        RegistryState();

    public:
        // NOLINTBEGIN
        MCAPI ~RegistryState();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct SoftEnum {
    public:
        // prevent constructor by default
        SoftEnum& operator=(SoftEnum const&);
        SoftEnum(SoftEnum const&);
        SoftEnum();

    public:
        // NOLINTBEGIN
        MCAPI SoftEnum(std::string const& name, std::vector<std::string> values);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(std::string const& name, std::vector<std::string> values);

        // NOLINTEND
    };

    struct SymbolHasher {
    public:
        // prevent constructor by default
        SymbolHasher& operator=(SymbolHasher const&);
        SymbolHasher(SymbolHasher const&);
        SymbolHasher();
    };

public:
    // prevent constructor by default
    CommandRegistry& operator=(CommandRegistry const&);
    CommandRegistry(CommandRegistry const&);
    CommandRegistry();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandRegistry(bool isEduMode);

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

    MCAPI void finalizeChainedSubcommandOverloadRules(char const* command);

    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const& eventing, bool isServer) const;

    MCAPI class Json::Value generateDocumentationMetadata(bool generateInternalMetadata) const;

    MCAPI std::vector<std::string> getAliases(std::string const& command) const;

    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const& origin) const;

    MCAPI std::string getCommandName(std::string const&) const;

    MCAPI struct CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(class CommandOrigin const& origin, std::string const& commandName) const;

    MCAPI ::CommandStatus getCommandStatus(std::string const& nameIn) const;

    MCAPI bool isCommandOfType(std::string const& nameIn, ::CommandTypeFlag commandType) const;

    MCAPI bool isValidCommand(std::string const& commandName) const;

    MCAPI void registerAlias(std::string name, std::string alias);

    MCAPI void registerCommand(
        std::string const&       name,
        char const*              description,
        ::CommandPermissionLevel requirement,
        struct CommandFlag       f1,
        struct CommandFlag       f2
    );

    MCAPI void removeSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    MCAPI bool requiresCheatsEnabled(std::string const& nameIn) const;

    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;

    MCAPI void setCommandRegistrationOverride(std::function<void(struct CommandFlag&, std::string const&)> functor);

    MCAPI void setNetworkUpdateCallback(std::function<void(class Packet const&)> callback);

    MCAPI void setScoreCallback(std::function<int(bool&, std::string const&, class Actor const&)> callback);

    MCAPI void setSoftEnumValues(std::string const& enumName, std::vector<std::string> values);

    MCAPI ~CommandRegistry();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        std::string const&                               name,
        std::vector<std::pair<std::string, uint>> const& strings,
        class Bedrock::typeid_t<class CommandRegistry>   type,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        struct CommandRegistry::Signature* signature
    );

    MCAPI class CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        std::string const&                             name,
        std::vector<std::pair<uint64, uint>> const&    values,
        class Bedrock::typeid_t<class CommandRegistry> type,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        struct CommandRegistry::Signature* signature
    );

    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                                 name,
        std::vector<std::pair<std::string, uint64>> const& strings,
        class Bedrock::typeid_t<class CommandRegistry>     type,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
    );

    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                             name,
        std::vector<std::pair<uint64, uint64>> const&  values,
        class Bedrock::typeid_t<class CommandRegistry> type,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
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

    MCAPI void addChainedSubcommandValuesToExisting(uint index, std::vector<std::pair<uint64, uint>> const& values);

    MCAPI void addEnumValuesToExisting(uint index, std::vector<std::pair<uint64, uint64>> const& values);

    MCAPI class CommandRegistry::Symbol addPostfix(std::string const& name);

    MCAPI void addRule(
        class CommandRegistry::Symbol              symbol,
        std::vector<class CommandRegistry::Symbol> derivation,
        std::function<
            struct CommandRegistry::ParseToken*(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol)>
                             process,
        class CommandVersion versions
    );

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

    MCAPI void buildParseTable(uint version) const;

    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable& table, uint version) const;

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

    MCAPI std::string describe(class CommandParameterData const& param) const;

    MCAPI std::string describe(class CommandRegistry::Symbol symbol) const;

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

    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const& token
    ) const;

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

    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature& signature);

    MCAPI void setupOverloadRules(struct CommandRegistry::Signature& signature);

    MCAPI std::string symbolToString(class CommandRegistry::Symbol symbol) const;

    MCAPI static std::string _removeStringQuotes(std::string const&);

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

    MCAPI static bool readString(
        std::string&                              value,
        struct CommandRegistry::ParseToken const& token,
        std::string&                              error,
        std::vector<std::string>&                 errorParams
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(bool isEduMode);

    MCAPI void dtor$();

    MCAPI static char const* const& CODE_STATUS_PROPERTY_NAME();

    MCAPI static char const* const& COMMAND_NAME_ENUM_NAME();

    MCAPI static char const* const& FUNCTION_NAME_SOFTENUM_NAME();

    MCAPI static char const* const& HASITEM_PARAM_DATA();

    MCAPI static char const* const& HASITEM_PARAM_ITEM();

    MCAPI static char const* const& HASITEM_PARAM_LOCATION();

    MCAPI static char const* const& HASITEM_PARAM_QUANTITY();

    MCAPI static char const* const& HASITEM_PARAM_SLOT();

    MCAPI static char const* const& HASPERMISSIONCATEGORY_ENUM_CAMERA();

    MCAPI static char const* const& HASPERMISSIONCATEGORY_ENUM_MOVEMENT();

    MCAPI static char const* const& HASPERMISSIONSTATE_ENUM_DISABLED();

    MCAPI static char const* const& HASPERMISSIONSTATE_ENUM_ENABLED();

    MCAPI static char const* const& HASPROPERTY_PARAM_PROPERTY_NAME();

    MCAPI static auto ParseRuleSymbols()
        -> std::pair<
            bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
                const,
            class CommandRegistry::Symbol> const (&)[];

    MCAPI static char const* const& TAG_VALUES_SOFTENUM_NAME();

    MCAPI static char const* const& UNLOCKABLE_RECIPES_SOFTENUM_NAME();

    // NOLINTEND
};
