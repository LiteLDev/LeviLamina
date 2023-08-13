#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/InvertableFilter.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandLexer.h"
#include "mc/server/commands/CommandSelector.h"

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
    class Parser;
    struct RegistryState;
    struct Signature;
    struct SoftEnum;
    class Symbol;
    struct SymbolHasher;
    // clang-format on

    // CommandRegistry inner types define
    struct ChainedSubcommand {

    public:
        // prevent constructor by default
        ChainedSubcommand& operator=(ChainedSubcommand const&) = delete;
        ChainedSubcommand(ChainedSubcommand const&)            = delete;
        ChainedSubcommand()                                    = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1ChainedSubcommand\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ChainedSubcommand();
        // NOLINTEND
    };

    struct Enum {

    public:
        // prevent constructor by default
        Enum& operator=(Enum const&) = delete;
        Enum(Enum const&)            = delete;
        Enum()                       = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1Enum\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~Enum();
        // NOLINTEND
    };

    struct LexicalToken {

    public:
        // prevent constructor by default
        LexicalToken& operator=(LexicalToken const&) = delete;
        LexicalToken(LexicalToken const&)            = delete;
        LexicalToken()                               = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??4LexicalToken\@CommandRegistry\@\@QEAAAEAU01\@AEBUToken\@CommandLexer\@\@\@Z
         */
        MCAPI struct CommandRegistry::LexicalToken& operator=(struct CommandLexer::Token const&);
        // NOLINTEND
    };

    struct Overload {

    public:
        // prevent constructor by default
        Overload& operator=(Overload const&) = delete;
        Overload(Overload const&)            = delete;
        Overload()                           = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0Overload\@CommandRegistry\@\@QEAA\@VCommandVersion\@\@P6A?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@XZ\@Z
         */
        MCAPI Overload(class CommandVersion, std::unique_ptr<class Command>(__cdecl*)(void));
        // NOLINTEND
    };

    class ParamSymbols {

    public:
        // prevent constructor by default
        ParamSymbols& operator=(ParamSymbols const&) = delete;
        ParamSymbols(ParamSymbols const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0ParamSymbols\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ParamSymbols();
        // NOLINTEND
    };

    struct ParseRule {

    public:
        // prevent constructor by default
        ParseRule& operator=(ParseRule const&) = delete;
        ParseRule(ParseRule const&)            = delete;
        ParseRule()                            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??4ParseRule\@CommandRegistry\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct CommandRegistry::ParseRule& operator=(struct CommandRegistry::ParseRule&&);
        // NOLINTEND
    };

    struct ParseTable {

    public:
        // prevent constructor by default
        ParseTable& operator=(ParseTable const&) = delete;
        ParseTable(ParseTable const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0ParseTable\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ParseTable();
        // NOLINTEND
    };

    struct ParseToken {

    public:
        // prevent constructor by default
        ParseToken& operator=(ParseToken const&) = delete;
        ParseToken(ParseToken const&)            = delete;
        ParseToken()                             = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?toString\@ParseToken\@CommandRegistry\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string toString() const;
        // NOLINTEND
    };

    class Parser {

    public:
        // prevent constructor by default
        Parser& operator=(Parser const&) = delete;
        Parser(Parser const&)            = delete;
        Parser()                         = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Parser\@CommandRegistry\@\@QEAA\@AEBV1\@H\@Z
         */
        MCAPI Parser(class CommandRegistry const&, int);
        /**
         * @symbol
         * ?createCommand\@Parser\@CommandRegistry\@\@QEAA?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
         */
        MCAPI std::unique_ptr<class Command> createCommand(class CommandOrigin const&);
        /**
         * @symbol
         * ?createSelector\@Parser\@CommandRegistry\@\@QEAA?AV?$unique_ptr\@V?$CommandSelector\@VActor\@\@\@\@U?$default_delete\@V?$CommandSelector\@VActor\@\@\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@AEBVCommandOrigin\@\@\@Z
         */
        MCAPI std::unique_ptr<class CommandSelector<class Actor>>
              createSelector(std::string const&, class CommandOrigin const&);
        /**
         * @symbol
         * ?getErrorMessage\@Parser\@CommandRegistry\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string const& getErrorMessage() const;
        /**
         * @symbol
         * ?getErrorParams\@Parser\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
         */
        MCAPI std::vector<std::string> getErrorParams() const;
        /**
         * @symbol
         * ?parseCommand\@Parser\@CommandRegistry\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI bool parseCommand(std::string const&);
        /**
         * @symbol
         * ?parseSelector\@Parser\@CommandRegistry\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI bool parseSelector(std::string const&);
        /**
         * @symbol ??1Parser\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~Parser();
        // NOLINTEND

        // private:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?_findParsePrediction\@Parser\@CommandRegistry\@\@AEBA?AV?$dense_map_iterator\@V?$_Vector_const_iterator\@V?$_Vector_val\@U?$_Simple_types\@U?$dense_map_node\@U?$pair\@VSymbol\@CommandRegistry\@\@V12\@\@std\@\@H\@internal\@entt\@\@\@std\@\@\@std\@\@\@std\@\@\@internal\@entt\@\@AEBULexicalToken\@2\@AEBVSymbol\@2\@\@Z
         */
        MCAPI class entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
            struct entt::internal::
                dense_map_node<std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>, int>>>>>
        _findParsePrediction(struct CommandRegistry::LexicalToken const&, class CommandRegistry::Symbol const&) const;
        /**
         * @symbol
         * ?_parse\@Parser\@CommandRegistry\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI bool _parse(std::string const&);
        // NOLINTEND
    };

    struct RegistryState {

    public:
        // prevent constructor by default
        RegistryState& operator=(RegistryState const&) = delete;
        RegistryState(RegistryState const&)            = delete;
        RegistryState()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1RegistryState\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~RegistryState();
        // NOLINTEND
    };

    struct Signature {

    public:
        // prevent constructor by default
        Signature& operator=(Signature const&) = delete;
        Signature(Signature const&)            = delete;
        Signature()                            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Signature\@CommandRegistry\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI Signature(struct CommandRegistry::Signature&&);
        /**
         * @symbol ??1Signature\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~Signature();
        // NOLINTEND
    };

    struct SoftEnum {

    public:
        // prevent constructor by default
        SoftEnum& operator=(SoftEnum const&) = delete;
        SoftEnum(SoftEnum const&)            = delete;
        SoftEnum()                           = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0SoftEnum\@CommandRegistry\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
         */
        MCAPI SoftEnum(std::string const&, std::vector<std::string>);
        // NOLINTEND
    };

    class Symbol {

    public:
        // prevent constructor by default
        Symbol& operator=(Symbol const&) = delete;
        Symbol(Symbol const&)            = delete;
        Symbol()                         = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?toIndex\@Symbol\@CommandRegistry\@\@QEBA_KXZ
         */
        MCAPI uint64_t toIndex() const;
        /**
         * @symbol ?value\@Symbol\@CommandRegistry\@\@QEBAHXZ
         */
        MCAPI int value() const;
        // NOLINTEND
    };

    struct SymbolHasher {

    public:
        // prevent constructor by default
        SymbolHasher& operator=(SymbolHasher const&) = delete;
        SymbolHasher(SymbolHasher const&)            = delete;
        SymbolHasher()                               = delete;
    };

public:
    // prevent constructor by default
    CommandRegistry& operator=(CommandRegistry const&) = delete;
    CommandRegistry(CommandRegistry const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandRegistry\@\@QEAA\@XZ
     */
    MCAPI CommandRegistry();
    /**
     * @symbol
     * ?addEnumValueConstraints\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@W4SemanticConstraint\@\@\@Z
     */
    MCAPI void
    addEnumValueConstraints(std::string const&, std::vector<std::string> const&, enum class SemanticConstraint);
    /**
     * @symbol
     * ?addEnumValues\@CommandRegistry\@\@QEAAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI int addEnumValues(std::string const&, std::vector<std::string> const&);
    /**
     * @symbol
     * ?addSoftEnum\@CommandRegistry\@\@QEAAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI int addSoftEnum(std::string const&, std::vector<std::string>);
    /**
     * @symbol
     * ?addSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void addSoftEnumValues(std::string const&, std::vector<std::string>);
    /**
     * @symbol
     * ?buildSelector\@CommandRegistry\@\@QEBA_NAEBUActorSelectorArgs\@\@PEAVCommandSelectorBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool buildSelector(struct ActorSelectorArgs const&, class CommandSelectorBase*, std::string&) const;
    /**
     * @symbol ?finalizeChainedSubcommandOverloadRules\@CommandRegistry\@\@QEAAXPEBD\@Z
     */
    MCAPI void finalizeChainedSubcommandOverloadRules(char const*);
    /**
     * @symbol ?fireCommandParseTableTelemetry\@CommandRegistry\@\@QEBAXAEBVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const&, bool) const;
    /**
     * @symbol ?generateDocumentationMetadata\@CommandRegistry\@\@QEBA?AVValue\@Json\@\@_N\@Z
     */
    MCAPI class Json::Value generateDocumentationMetadata(bool) const;
    /**
     * @symbol
     * ?getAliases\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::string> getAliases(std::string const&) const;
    /**
     * @symbol
     * ?getAlphabeticalLookup\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const;
    /**
     * @symbol
     * ?getCommandName\@CommandRegistry\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string getCommandName(std::string const&) const;
    /**
     * @symbol
     * ?getCommandOverloadSyntaxInformation\@CommandRegistry\@\@QEBA?AUCommandSyntaxInformation\@\@AEBVCommandOrigin\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(class CommandOrigin const&, std::string const&) const;
    /**
     * @symbol
     * ?getCommandStatus\@CommandRegistry\@\@QEBA?AW4CommandStatus\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CommandStatus getCommandStatus(std::string const&) const;
    /**
     * @symbol
     * ?isCommandOfType\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommandTypeFlag\@\@\@Z
     */
    MCAPI bool isCommandOfType(std::string const&, enum class CommandTypeFlag) const;
    /**
     * @symbol
     * ?isValidCommand\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isValidCommand(std::string const&) const;
    /**
     * @symbol
     * ?registerAlias\@CommandRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void registerAlias(std::string, std::string);
    /**
     * @symbol
     * ?registerCommand\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBDW4CommandPermissionLevel\@\@UCommandFlag\@\@3\@Z
     */
    MCAPI void registerCommand(
        std::string const&,
        char const*,
        enum class CommandPermissionLevel,
        struct CommandFlag,
        struct CommandFlag
    );
    /**
     * @symbol
     * ?removeSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>);
    /**
     * @symbol
     * ?requiresCheatsEnabled\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool requiresCheatsEnabled(std::string const&) const;
    /**
     * @symbol ?serializeAvailableCommands\@CommandRegistry\@\@QEBA?AVAvailableCommandsPacket\@\@XZ
     */
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;
    /**
     * @symbol
     * ?setCommandRegistrationOverride\@CommandRegistry\@\@QEAAXV?$function\@$$A6AXAEAUCommandFlag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setCommandRegistrationOverride(std::function<void(struct CommandFlag&, std::string const&)>);
    /**
     * @symbol ?setNetworkUpdateCallback\@CommandRegistry\@\@QEAAXV?$function\@$$A6AXAEBVPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setNetworkUpdateCallback(std::function<void(class Packet const&)>);
    /**
     * @symbol
     * ?setScoreCallback\@CommandRegistry\@\@QEAAXV?$function\@$$A6AHAEA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreCallback(std::function<int(bool&, std::string const&, class Actor const&)>);
    /**
     * @symbol
     * ?setSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void setSoftEnumValues(std::string const&, std::vector<std::string>);
    /**
     * @symbol ??1CommandRegistry\@\@QEAA\@XZ
     */
    MCAPI ~CommandRegistry();
    /**
     * @symbol ?COMMAND_NAME_ENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* COMMAND_NAME_ENUM_NAME;
    /**
     * @symbol ?FUNCTION_NAME_SOFTENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* FUNCTION_NAME_SOFTENUM_NAME;
    /**
     * @symbol ?HASITEM_PARAM_DATA\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_DATA;
    /**
     * @symbol ?HASITEM_PARAM_ITEM\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_ITEM;
    /**
     * @symbol ?HASITEM_PARAM_LOCATION\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_LOCATION;
    /**
     * @symbol ?HASITEM_PARAM_QUANTITY\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_QUANTITY;
    /**
     * @symbol ?HASITEM_PARAM_SLOT\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_SLOT;
    /**
     * @symbol ?HASPERMISSIONCATEGORY_ENUM_CAMERA\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_CAMERA;
    /**
     * @symbol ?HASPERMISSIONCATEGORY_ENUM_MOVEMENT\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_MOVEMENT;
    /**
     * @symbol ?HASPERMISSIONSTATE_ENUM_DISABLED\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONSTATE_ENUM_DISABLED;
    /**
     * @symbol ?HASPERMISSIONSTATE_ENUM_ENABLED\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONSTATE_ENUM_ENABLED;
    /**
     * @symbol ?TAG_VALUES_SOFTENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* TAG_VALUES_SOFTENUM_NAME;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addChainedSubcommandValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@ZPEAUSignature\@1\@\@Z
     */
    MCAPI class
        CommandRegistry::
            Symbol
            _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<std::string, unsigned int>> const&, class Bedrock::typeid_t<class CommandRegistry>, bool (__cdecl CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const, struct CommandRegistry::Signature*);
    /**
     * @symbol
     * ?_addChainedSubcommandValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@_KI\@std\@\@V?$allocator\@U?$pair\@_KI\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@ZPEAUSignature\@1\@\@Z
     */
    MCAPI class
        CommandRegistry::
            Symbol
            _addChainedSubcommandValuesInternal(std::string const&, std::vector<std::pair<uint64_t, unsigned int>> const&, class Bedrock::typeid_t<class CommandRegistry>, bool (__cdecl CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const, struct CommandRegistry::Signature*);
    /**
     * @symbol
     * ?_addEnumValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z\@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<std::string, uint64_t>> const&,
        class Bedrock::typeid_t<class CommandRegistry>,
        bool (__cdecl CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
    );
    /**
     * @symbol
     * ?_addEnumValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@_K_K\@std\@\@V?$allocator\@U?$pair\@_K_K\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z\@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<uint64_t, uint64_t>> const&,
        class Bedrock::typeid_t<class CommandRegistry>,
        bool (__cdecl CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
    );
    /**
     * @symbol ?_addFunctionSoftEnum\@CommandRegistry\@\@AEAA?AVSymbol\@1\@XZ
     */
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();
    /**
     * @symbol ?_getConstrainedParamEnumSymbol\@CommandRegistry\@\@AEBA?AVSymbol\@1\@V21\@\@Z
     */
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const;
    /**
     * @symbol
     * ?_isCommandElementValid\@CommandRegistry\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _isCommandElementValid(std::string const&) const;
    /**
     * @symbol
     * ?_matchesEnumConstraintsSet\@CommandRegistry\@\@AEBA_NAEBVSymbol\@1\@AEBVCommandOrigin\@\@0W4SemanticConstraint\@\@\@Z
     */
    MCAPI bool _matchesEnumConstraintsSet(
        class CommandRegistry::Symbol const&,
        class CommandOrigin const&,
        class CommandRegistry::Symbol const&,
        enum class SemanticConstraint
    ) const;
    /**
     * @symbol
     * ?addChainedSubcommandValuesToExisting\@CommandRegistry\@\@AEAAXIAEBV?$vector\@U?$pair\@_KI\@std\@\@V?$allocator\@U?$pair\@_KI\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
    addChainedSubcommandValuesToExisting(unsigned int, std::vector<std::pair<uint64_t, unsigned int>> const&);
    /**
     * @symbol
     * ?addEnumValuesToExisting\@CommandRegistry\@\@AEAAXIAEBV?$vector\@U?$pair\@_K_K\@std\@\@V?$allocator\@U?$pair\@_K_K\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void addEnumValuesToExisting(unsigned int, std::vector<std::pair<uint64_t, uint64_t>> const&);
    /**
     * @symbol
     * ?addPostfix\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const&);
    /**
     * @symbol
     * ?addRule\@CommandRegistry\@\@AEAAXVSymbol\@1\@V?$vector\@VSymbol\@CommandRegistry\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@std\@\@\@std\@\@V?$function\@$$A6APEAUParseToken\@CommandRegistry\@\@AEAU12\@VSymbol\@2\@\@Z\@4\@VCommandVersion\@\@\@Z
     */
    MCAPI void addRule(
        class CommandRegistry::Symbol,
        std::vector<class CommandRegistry::Symbol>,
        std::function<
            struct CommandRegistry::ParseToken*(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol)>,
        class CommandVersion
    );
    /**
     * @symbol ?addSemanticConstraint\@CommandRegistry\@\@AEAAXW4SemanticConstraint\@\@\@Z
     */
    MCAPI void addSemanticConstraint(enum class SemanticConstraint);
    /**
     * @symbol
     * ?addSoftTerminal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const&);
    /**
     * @symbol ?buildFirstSet\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@VSymbol\@1\@I\@Z
     */
    MCAPI void buildFirstSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int) const;
    /**
     * @symbol
     * ?buildFollowSet\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@VSymbol\@1\@IAEAV?$set\@VSymbol\@CommandRegistry\@\@U?$less\@VSymbol\@CommandRegistry\@\@\@std\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@4\@\@std\@\@\@Z
     */
    MCAPI void
    buildFollowSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int, std::set<class CommandRegistry::Symbol>&)
        const;
    /**
     * @symbol
     * ?buildOptionalRuleChain\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBUSignature\@1\@AEBV?$vector\@VCommandParameterData\@\@V?$allocator\@VCommandParameterData\@\@\@std\@\@\@std\@\@PEBVCommandParameterData\@\@_K\@Z
     */
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&,
        std::vector<class CommandParameterData> const&,
        class CommandParameterData const*,
        uint64_t
    );
    /**
     * @symbol
     * ?buildOptionalRuleChain\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBUSignature\@1\@AEBV?$vector\@VCommandParameterData\@\@V?$allocator\@VCommandParameterData\@\@\@std\@\@\@std\@\@AEBV?$vector\@VSymbol\@CommandRegistry\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI class CommandRegistry::Symbol
    buildOptionalRuleChain(struct CommandRegistry::Signature const&, std::vector<class CommandParameterData> const&, std::vector<class CommandRegistry::Symbol> const&);
    /**
     * @symbol ?buildParseTable\@CommandRegistry\@\@AEBAXI\@Z
     */
    MCAPI void buildParseTable(unsigned int) const;
    /**
     * @symbol ?buildPredictTable\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@I\@Z
     */
    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable&, unsigned int) const;
    /**
     * @symbol
     * ?buildRules\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEAUSignature\@1\@AEBV?$vector\@V?$not_null\@PEAUOverload\@CommandRegistry\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAUOverload\@CommandRegistry\@\@\@gsl\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI class CommandRegistry::Symbol buildRules(
        struct CommandRegistry::Signature&,
        std::vector<class gsl::not_null<struct CommandRegistry::Overload*>> const&,
        uint64_t
    );
    /**
     * @symbol
     * ?checkOriginCommandFlags\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@UCommandFlag\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI bool
    checkOriginCommandFlags(class CommandOrigin const&, struct CommandFlag, enum class CommandPermissionLevel) const;
    /**
     * @symbol
     * ?createCommand\@CommandRegistry\@\@AEBA?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class Command>
    createCommand(struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const;
    /**
     * @symbol
     * ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSignature\@1\@AEBV23\@AEBUOverload\@1\@IPEAI3\@Z
     */
    MCAPI std::string
    describe(struct CommandRegistry::Signature const&, std::string const&, struct CommandRegistry::Overload const&, unsigned int, unsigned int*, unsigned int*)
        const;
    /**
     * @symbol
     * ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSymbol\@1\@\@Z
     */
    MCAPI std::string describe(class CommandRegistry::Symbol) const;
    /**
     * @symbol
     * ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandParameterData\@\@\@Z
     */
    MCAPI std::string describe(class CommandParameterData const&) const;
    /**
     * @symbol
     * ?findCommand\@CommandRegistry\@\@AEBAPEBUSignature\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const&) const;
    /**
     * @symbol
     * ?findCommand\@CommandRegistry\@\@AEAAPEAUSignature\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandRegistry::Signature* findCommand(std::string const&);
    /**
     * @symbol
     * ?findEnumValue\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const&) const;
    /**
     * @symbol
     * ?findIdentifierInfo\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const&) const;
    /**
     * @symbol
     * ?findPostfix\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const&) const;
    /**
     * @symbol
     * ?forEachNonTerminal\@CommandRegistry\@\@AEBAXV?$function\@$$A6AXVSymbol\@CommandRegistry\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachNonTerminal(std::function<void(class CommandRegistry::Symbol)>) const;
    /**
     * @symbol ?getEnumData\@CommandRegistry\@\@AEBA_KAEBUParseToken\@1\@\@Z
     */
    MCAPI uint64_t getEnumData(struct CommandRegistry::ParseToken const&) const;
    /**
     * @symbol
     * ?getInvertableFilter\@CommandRegistry\@\@AEBA?AU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@AEBUParseToken\@1\@\@Z
     */
    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const&) const;
    /**
     * @symbol ?isValid\@CommandRegistry\@\@AEBA_NVSymbol\@1\@\@Z
     */
    MCAPI bool isValid(class CommandRegistry::Symbol) const;
    /**
     * @symbol ?originCanRun\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@AEBUOverload\@1\@\@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Overload const&) const;
    /**
     * @symbol ?originCanRun\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@AEBUSignature\@1\@\@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Signature const&) const;
    /**
     * @symbol
     * ?parseSelector\@CommandRegistry\@\@AEBA_NAEAUActorSelectorArgs\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@\@Z
     */
    MCAPI bool
    parseSelector(struct ActorSelectorArgs&, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const;
    /**
     * @symbol
     * ?parseSelector\@CommandRegistry\@\@AEBA_NPEAVCommandSelectorBase\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@_N\@Z
     */
    MCAPI bool parseSelector(
        class CommandSelectorBase*,
        struct CommandRegistry::ParseToken const&,
        class CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&,
        bool
    ) const;
    /**
     * @symbol ?registerOverloadInternal\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@AEAUOverload\@1\@\@Z
     */
    MCAPI void registerOverloadInternal(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&);
    /**
     * @symbol ?setupChainedSubcommandOverloadRules\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@\@Z
     */
    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature&);
    /**
     * @symbol ?setupOverloadRules\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@\@Z
     */
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature&);
    /**
     * @symbol
     * ?symbolToString\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSymbol\@1\@\@Z
     */
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;
    /**
     * @symbol
     * ?_removeStringQuotes\@CommandRegistry\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string _removeStringQuotes(std::string const&);
    /**
     * @symbol
     * ?addNonEpsilonSymbols\@CommandRegistry\@\@CAXAEAV?$dense_set\@VSymbol\@CommandRegistry\@\@USymbolHasher\@2\@U?$equal_to\@VSymbol\@CommandRegistry\@\@\@std\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@5\@\@entt\@\@AEBV23\@\@Z
     */
    MCAPI static void
    addNonEpsilonSymbols(class entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher, std::equal_to<class CommandRegistry::Symbol>, std::allocator<class CommandRegistry::Symbol>>&, class entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher, std::equal_to<class CommandRegistry::Symbol>, std::allocator<class CommandRegistry::Symbol>> const&);
    /**
     * @symbol ?buildOverload\@CommandRegistry\@\@CAXAEAUOverload\@1\@\@Z
     */
    MCAPI static void buildOverload(struct CommandRegistry::Overload&);
    /**
     * @symbol ?collapse\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    collapse(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    /**
     * @symbol ?collapseOn\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    collapseOn(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @symbol ?expand\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    expand(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    /**
     * @symbol ?expandExcept\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    expandExcept(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @symbol ?fold\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    fold(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @symbol ?kill\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    kill(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    /**
     * @symbol
     * ?readFloat\@CommandRegistry\@\@CA_NAEAMAEBUParseToken\@1\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool
    readFloat(float&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    /**
     * @symbol
     * ?readInt\@CommandRegistry\@\@CA_NAEAHAEBUParseToken\@1\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool readInt(int&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    /**
     * @symbol
     * ?readRelativeCoordinate\@CommandRegistry\@\@CA_NAEA_NAEAMAEBUParseToken\@1\@_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool
    readRelativeCoordinate(bool&, float&, struct CommandRegistry::ParseToken const&, bool, std::string&, std::vector<std::string>&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?ParseRuleSymbols\@CommandRegistry\@\@0QBU?$pair\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@ZVSymbol\@1\@\@std\@\@B
     */
    MCAPI static std::pair<
        bool (__cdecl CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        class CommandRegistry::Symbol> const ParseRuleSymbols[];
    // NOLINTEND
};
