#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    public:
        // prevent constructor by default
        Enum& operator=(Enum const&);
        Enum(Enum const&);
        Enum();

    public:
        // NOLINTBEGIN
        // symbol: ??1Enum@CommandRegistry@@QEAA@XZ
        MCAPI ~Enum();

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
        // symbol: ??4LexicalToken@CommandRegistry@@QEAAAEAU01@AEBUToken@CommandLexer@@@Z
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
        // symbol:
        // ??0Overload@CommandRegistry@@QEAA@VCommandVersion@@P6A?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@XZ@Z
        MCAPI Overload(class CommandVersion version_, std::unique_ptr<class Command> (*alloc_)());

        // NOLINTEND
    };

    class ParamSymbols {
    public:
        // prevent constructor by default
        ParamSymbols& operator=(ParamSymbols const&);
        ParamSymbols(ParamSymbols const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0ParamSymbols@CommandRegistry@@QEAA@XZ
        MCAPI ParamSymbols();

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
        // symbol: ??4ParseRule@CommandRegistry@@QEAAAEAU01@$$QEAU01@@Z
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
        // symbol: ??0ParseTable@CommandRegistry@@QEAA@XZ
        MCAPI ParseTable();

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
        // symbol:
        // ?toString@ParseToken@CommandRegistry@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
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
        // symbol: ??0Signature@CommandRegistry@@QEAA@$$QEAU01@@Z
        MCAPI Signature(struct CommandRegistry::Signature&&);

        // symbol: ??1Signature@CommandRegistry@@QEAA@XZ
        MCAPI ~Signature();

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
        // symbol:
        // ??0SoftEnum@CommandRegistry@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
        MCAPI SoftEnum(std::string const& name, std::vector<std::string> values);

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
        // symbol: ??0Symbol@CommandRegistry@@QEAA@_K@Z
        MCAPI explicit Symbol(uint64 value);

        // symbol: ?toIndex@Symbol@CommandRegistry@@QEBA_KXZ
        MCAPI uint64 toIndex() const;

        // symbol: ?value@Symbol@CommandRegistry@@QEBAHXZ
        MCAPI int value() const;

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
        // symbol: ??0Parser@CommandRegistry@@QEAA@AEBV1@H@Z
        MCAPI Parser(class CommandRegistry const& registry, int version);

        // symbol:
        // ?createCommand@Parser@CommandRegistry@@QEAA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBVCommandOrigin@@@Z
        MCAPI std::unique_ptr<class Command> createCommand(class CommandOrigin const& origin);

        // symbol:
        // ?createSelector@Parser@CommandRegistry@@QEAA?AV?$unique_ptr@V?$CommandSelector@VActor@@@@U?$default_delete@V?$CommandSelector@VActor@@@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEBVCommandOrigin@@@Z
        MCAPI std::unique_ptr<class CommandSelector<class Actor>>
              createSelector(std::string const&, class CommandOrigin const& origin);

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
        MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
            entt::internal::
                dense_map_node<std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>, int>>>>>
              _findParsePrediction(
                  struct CommandRegistry::LexicalToken const& lexToken,
                  class CommandRegistry::Symbol const&        stackSymbol
              ) const;

        // symbol:
        // ?_parse@Parser@CommandRegistry@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool _parse(std::string const& in);

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
        char const*              description,
        ::CommandPermissionLevel requirement,
        struct CommandFlag       f1,
        struct CommandFlag       f2
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
    MCAPI class
        CommandRegistry::
            Symbol
            _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<std::string, uint>> const&, class Bedrock::typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const, struct CommandRegistry::Signature*);

    // symbol:
    // ?_addChainedSubcommandValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@_KI@std@@V?$allocator@U?$pair@_KI@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@ZPEAUSignature@1@@Z
    MCAPI class
        CommandRegistry::
            Symbol
            _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<uint64, uint>> const&, class Bedrock::typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const, struct CommandRegistry::Signature*);

    // symbol:
    // ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                                 name,
        std::vector<std::pair<std::string, uint64>> const& strings,
        class Bedrock::typeid_t<class CommandRegistry>     type,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
    );

    // symbol:
    // ?_addEnumValuesInternal@CommandRegistry@@AEAA?AVSymbol@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@_K_K@std@@V?$allocator@U?$pair@_K_K@std@@@2@@4@V?$typeid_t@VCommandRegistry@@@Bedrock@@P81@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV34@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z@Z
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&                             name,
        std::vector<std::pair<uint64, uint64>> const&  values,
        class Bedrock::typeid_t<class CommandRegistry> type,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
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
    MCAPI void addRule(
        class CommandRegistry::Symbol              symbol,
        std::vector<class CommandRegistry::Symbol> derivation,
        std::function<
            struct CommandRegistry::ParseToken*(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol)>
                             process,
        class CommandVersion versions
    );

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

private:
    // NOLINTBEGIN
    // symbol:
    // ?ParseRuleSymbols@CommandRegistry@@0QBU?$pair@P8CommandRegistry@@EBA_NPEAXAEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@ZVSymbol@1@@std@@B
    MCAPI static std::pair<
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        class CommandRegistry::Symbol> const ParseRuleSymbols[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ParseRuleSymbols() { return ParseRuleSymbols; }

    // NOLINTEND
};
