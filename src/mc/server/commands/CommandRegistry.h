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
        /**
         * @symbol ??1ChainedSubcommand\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ChainedSubcommand(); // NOLINT
    };

    struct Enum {

    public:
        // prevent constructor by default
        Enum& operator=(Enum const&) = delete;
        Enum(Enum const&)            = delete;
        Enum()                       = delete;

    public:
        /**
         * @symbol ??1Enum\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~Enum(); // NOLINT
    };

    struct LexicalToken {

    public:
        // prevent constructor by default
        LexicalToken& operator=(LexicalToken const&) = delete;
        LexicalToken(LexicalToken const&)            = delete;
        LexicalToken()                               = delete;

    public:
        /**
         * @symbol ??4LexicalToken\@CommandRegistry\@\@QEAAAEAU01\@AEBUToken\@CommandLexer\@\@\@Z
         */
        MCAPI struct CommandRegistry::LexicalToken& operator=(struct CommandLexer::Token const&); // NOLINT
    };

    struct Overload {

    public:
        // prevent constructor by default
        Overload& operator=(Overload const&) = delete;
        Overload(Overload const&)            = delete;
        Overload()                           = delete;

    public:
        /**
         * @symbol
         * ??0Overload\@CommandRegistry\@\@QEAA\@VCommandVersion\@\@P6A?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@XZ\@Z
         */
        MCAPI Overload(class CommandVersion, std::unique_ptr<class Command> (*)(void)); // NOLINT
    };

    class ParamSymbols {

    public:
        // prevent constructor by default
        ParamSymbols& operator=(ParamSymbols const&) = delete;
        ParamSymbols(ParamSymbols const&)            = delete;

    public:
        /**
         * @symbol ??0ParamSymbols\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ParamSymbols(); // NOLINT
    };

    struct ParseRule {

    public:
        // prevent constructor by default
        ParseRule& operator=(ParseRule const&) = delete;
        ParseRule(ParseRule const&)            = delete;
        ParseRule()                            = delete;

    public:
        /**
         * @symbol ??4ParseRule\@CommandRegistry\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct CommandRegistry::ParseRule& operator=(struct CommandRegistry::ParseRule&&); // NOLINT
    };

    struct ParseTable {

    public:
        // prevent constructor by default
        ParseTable& operator=(ParseTable const&) = delete;
        ParseTable(ParseTable const&)            = delete;

    public:
        /**
         * @symbol ??0ParseTable\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ParseTable(); // NOLINT
    };

    struct ParseToken {

    public:
        // prevent constructor by default
        ParseToken& operator=(ParseToken const&) = delete;
        ParseToken(ParseToken const&)            = delete;
        ParseToken()                             = delete;

    public:
        /**
         * @symbol
         * ?toString\@ParseToken\@CommandRegistry\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string toString() const; // NOLINT
    };

    class Parser {

    public:
        // prevent constructor by default
        Parser& operator=(Parser const&) = delete;
        Parser(Parser const&)            = delete;
        Parser()                         = delete;

    public:
        /**
         * @symbol ??0Parser\@CommandRegistry\@\@QEAA\@AEBV1\@H\@Z
         */
        MCAPI Parser(class CommandRegistry const&, int); // NOLINT
        /**
         * @symbol
         * ?createCommand\@Parser\@CommandRegistry\@\@QEAA?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
         */
        MCAPI std::unique_ptr<class Command> createCommand(class CommandOrigin const&); // NOLINT
        /**
         * @symbol
         * ?createSelector\@Parser\@CommandRegistry\@\@QEAA?AV?$unique_ptr\@V?$CommandSelector\@VActor\@\@\@\@U?$default_delete\@V?$CommandSelector\@VActor\@\@\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@AEBVCommandOrigin\@\@\@Z
         */
        MCAPI std::unique_ptr<class CommandSelector<class Actor>>
              createSelector(std::string const&, class CommandOrigin const&); // NOLINT
        /**
         * @symbol
         * ?getErrorMessage\@Parser\@CommandRegistry\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string const& getErrorMessage() const; // NOLINT
        /**
         * @symbol
         * ?getErrorParams\@Parser\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
         */
        MCAPI std::vector<std::string> getErrorParams() const; // NOLINT
        /**
         * @symbol
         * ?parseCommand\@Parser\@CommandRegistry\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI bool parseCommand(std::string const&); // NOLINT
        /**
         * @symbol
         * ?parseSelector\@Parser\@CommandRegistry\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI bool parseSelector(std::string const&); // NOLINT
        /**
         * @symbol ??1Parser\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~Parser(); // NOLINT

        // private:
        /**
         * @symbol
         * ?_findParsePrediction\@Parser\@CommandRegistry\@\@AEBA?AV?$dense_map_iterator\@V?$_Vector_const_iterator\@V?$_Vector_val\@U?$_Simple_types\@U?$dense_map_node\@U?$pair\@VSymbol\@CommandRegistry\@\@V12\@\@std\@\@H\@internal\@entt\@\@\@std\@\@\@std\@\@\@std\@\@\@internal\@entt\@\@AEBULexicalToken\@2\@AEBVSymbol\@2\@\@Z
         */
        MCAPI class entt::internal::dense_map_iterator<class std::_Vector_const_iterator<
            class std::_Vector_val<struct std::_Simple_types<struct entt::internal::dense_map_node<
                struct std::pair<class CommandRegistry::Symbol, class CommandRegistry::Symbol>,
                int>>>>>
        _findParsePrediction(struct CommandRegistry::LexicalToken const&, class CommandRegistry::Symbol const&)
            const; // NOLINT
        /**
         * @symbol
         * ?_parse\@Parser\@CommandRegistry\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI bool _parse(std::string const&); // NOLINT

    private:
    };

    struct RegistryState {

    public:
        // prevent constructor by default
        RegistryState& operator=(RegistryState const&) = delete;
        RegistryState(RegistryState const&)            = delete;
        RegistryState()                                = delete;

    public:
        /**
         * @symbol ??1RegistryState\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~RegistryState(); // NOLINT
    };

    struct Signature {

    public:
        // prevent constructor by default
        Signature& operator=(Signature const&) = delete;
        Signature(Signature const&)            = delete;
        Signature()                            = delete;

    public:
        /**
         * @symbol ??0Signature\@CommandRegistry\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI Signature(struct CommandRegistry::Signature&&); // NOLINT
        /**
         * @symbol ??1Signature\@CommandRegistry\@\@QEAA\@XZ
         */
        MCAPI ~Signature(); // NOLINT
    };

    struct SoftEnum {

    public:
        // prevent constructor by default
        SoftEnum& operator=(SoftEnum const&) = delete;
        SoftEnum(SoftEnum const&)            = delete;
        SoftEnum()                           = delete;

    public:
        /**
         * @symbol
         * ??0SoftEnum\@CommandRegistry\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
         */
        MCAPI SoftEnum(std::string const&, std::vector<std::string>); // NOLINT
    };

    class Symbol {

    public:
        // prevent constructor by default
        Symbol& operator=(Symbol const&) = delete;
        Symbol(Symbol const&)            = delete;
        Symbol()                         = delete;

    public:
        /**
         * @symbol ?toIndex\@Symbol\@CommandRegistry\@\@QEBA_KXZ
         */
        MCAPI unsigned __int64 toIndex() const; // NOLINT
        /**
         * @symbol ?value\@Symbol\@CommandRegistry\@\@QEBAHXZ
         */
        MCAPI int value() const; // NOLINT
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
    /**
     * @symbol ??0CommandRegistry\@\@QEAA\@XZ
     */
    MCAPI CommandRegistry(); // NOLINT
    /**
     * @symbol
     * ?addEnumValueConstraints\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@W4SemanticConstraint\@\@\@Z
     */
    MCAPI void addEnumValueConstraints(
        std::string const&,
        std::vector<std::string> const&,
        enum class SemanticConstraint
    ); // NOLINT
    /**
     * @symbol
     * ?addEnumValues\@CommandRegistry\@\@QEAAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI int addEnumValues(std::string const&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?addSoftEnum\@CommandRegistry\@\@QEAAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI int addSoftEnum(std::string const&, std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ?addSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void addSoftEnumValues(std::string const&, std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ?buildSelector\@CommandRegistry\@\@QEBA_NAEBUActorSelectorArgs\@\@PEAVCommandSelectorBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool buildSelector(struct ActorSelectorArgs const&, class CommandSelectorBase*, std::string&) const; // NOLINT
    /**
     * @symbol ?finalizeChainedSubcommandOverloadRules\@CommandRegistry\@\@QEAAXPEBD\@Z
     */
    MCAPI void finalizeChainedSubcommandOverloadRules(char const*); // NOLINT
    /**
     * @symbol ?fireCommandParseTableTelemetry\@CommandRegistry\@\@QEBAXAEBVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const&, bool) const; // NOLINT
    /**
     * @symbol ?generateDocumentationMetadata\@CommandRegistry\@\@QEBA?AVValue\@Json\@\@_N\@Z
     */
    MCAPI class Json::Value generateDocumentationMetadata(bool) const; // NOLINT
    /**
     * @symbol
     * ?getAliases\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::string> getAliases(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getAlphabeticalLookup\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const; // NOLINT
    /**
     * @symbol
     * ?getCommandName\@CommandRegistry\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string getCommandName(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getCommandOverloadSyntaxInformation\@CommandRegistry\@\@QEBA?AUCommandSyntaxInformation\@\@AEBVCommandOrigin\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(class CommandOrigin const&, std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getCommandStatus\@CommandRegistry\@\@QEBA?AW4CommandStatus\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CommandStatus getCommandStatus(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?isCommandOfType\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommandTypeFlag\@\@\@Z
     */
    MCAPI bool isCommandOfType(std::string const&, enum class CommandTypeFlag) const; // NOLINT
    /**
     * @symbol
     * ?isValidCommand\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isValidCommand(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?registerAlias\@CommandRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void registerAlias(std::string, std::string); // NOLINT
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
    ); // NOLINT
    /**
     * @symbol
     * ?removeSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ?requiresCheatsEnabled\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool requiresCheatsEnabled(std::string const&) const; // NOLINT
    /**
     * @symbol ?serializeAvailableCommands\@CommandRegistry\@\@QEBA?AVAvailableCommandsPacket\@\@XZ
     */
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const; // NOLINT
    /**
     * @symbol
     * ?setCommandRegistrationOverride\@CommandRegistry\@\@QEAAXV?$function\@$$A6AXAEAUCommandFlag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
        setCommandRegistrationOverride(class std::function<void(struct CommandFlag&, std::string const&)>); // NOLINT
    /**
     * @symbol ?setNetworkUpdateCallback\@CommandRegistry\@\@QEAAXV?$function\@$$A6AXAEBVPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setNetworkUpdateCallback(class std::function<void(class Packet const&)>); // NOLINT
    /**
     * @symbol
     * ?setScoreCallback\@CommandRegistry\@\@QEAAXV?$function\@$$A6AHAEA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreCallback(class std::function<int(bool&, std::string const&, class Actor const&)>); // NOLINT
    /**
     * @symbol
     * ?setSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void setSoftEnumValues(std::string const&, std::vector<std::string>); // NOLINT
    /**
     * @symbol ??1CommandRegistry\@\@QEAA\@XZ
     */
    MCAPI ~CommandRegistry(); // NOLINT
    /**
     * @symbol ?COMMAND_NAME_ENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* COMMAND_NAME_ENUM_NAME; // NOLINT
    /**
     * @symbol ?FUNCTION_NAME_SOFTENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* FUNCTION_NAME_SOFTENUM_NAME; // NOLINT
    /**
     * @symbol ?HASITEM_PARAM_DATA\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_DATA; // NOLINT
    /**
     * @symbol ?HASITEM_PARAM_ITEM\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_ITEM; // NOLINT
    /**
     * @symbol ?HASITEM_PARAM_LOCATION\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_LOCATION; // NOLINT
    /**
     * @symbol ?HASITEM_PARAM_QUANTITY\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_QUANTITY; // NOLINT
    /**
     * @symbol ?HASITEM_PARAM_SLOT\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASITEM_PARAM_SLOT; // NOLINT
    /**
     * @symbol ?HASPERMISSIONCATEGORY_ENUM_CAMERA\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_CAMERA; // NOLINT
    /**
     * @symbol ?HASPERMISSIONCATEGORY_ENUM_MOVEMENT\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONCATEGORY_ENUM_MOVEMENT; // NOLINT
    /**
     * @symbol ?HASPERMISSIONSTATE_ENUM_DISABLED\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONSTATE_ENUM_DISABLED; // NOLINT
    /**
     * @symbol ?HASPERMISSIONSTATE_ENUM_ENABLED\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* HASPERMISSIONSTATE_ENUM_ENABLED; // NOLINT
    /**
     * @symbol ?TAG_VALUES_SOFTENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const* TAG_VALUES_SOFTENUM_NAME; // NOLINT

    // private:
    /**
     * @symbol
     * ?_addChainedSubcommandValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@ZPEAUSignature\@1\@\@Z
     */
    MCAPI class CommandRegistry::
        Symbol
        _addChainedSubcommandValuesInternal(std::string const&, std::vector<struct std::pair<std::string, unsigned int>> const&, class Bedrock::typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const, struct CommandRegistry::Signature*); // NOLINT
    /**
     * @symbol
     * ?_addChainedSubcommandValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@_KI\@std\@\@V?$allocator\@U?$pair\@_KI\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@ZPEAUSignature\@1\@\@Z
     */
    MCAPI class
        CommandRegistry::
            Symbol
            _addChainedSubcommandValuesInternal(std::string const&, std::vector<struct std::pair<unsigned __int64, unsigned int>> const&, class Bedrock::typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const, struct CommandRegistry::Signature*); // NOLINT
    /**
     * @symbol
     * ?_addEnumValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@_K_K\@std\@\@V?$allocator\@U?$pair\@_K_K\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z\@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const&,
        class Bedrock::typeid_t<class CommandRegistry>,
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
    ); // NOLINT
    /**
     * @symbol
     * ?_addEnumValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z\@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<struct std::pair<std::string, unsigned __int64>> const&,
        class Bedrock::typeid_t<class CommandRegistry>,
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const
    ); // NOLINT
    /**
     * @symbol ?_addFunctionSoftEnum\@CommandRegistry\@\@AEAA?AVSymbol\@1\@XZ
     */
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum(); // NOLINT
    /**
     * @symbol ?_getConstrainedParamEnumSymbol\@CommandRegistry\@\@AEBA?AVSymbol\@1\@V21\@\@Z
     */
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const; // NOLINT
    /**
     * @symbol
     * ?_isCommandElementValid\@CommandRegistry\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _isCommandElementValid(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?_matchesEnumConstraintsSet\@CommandRegistry\@\@AEBA_NAEBVSymbol\@1\@AEBVCommandOrigin\@\@0W4SemanticConstraint\@\@\@Z
     */
    MCAPI bool _matchesEnumConstraintsSet(
        class CommandRegistry::Symbol const&,
        class CommandOrigin const&,
        class CommandRegistry::Symbol const&,
        enum class SemanticConstraint
    ) const; // NOLINT
    /**
     * @symbol
     * ?addChainedSubcommandValuesToExisting\@CommandRegistry\@\@AEAAXIAEBV?$vector\@U?$pair\@_KI\@std\@\@V?$allocator\@U?$pair\@_KI\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
    addChainedSubcommandValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned int>> const&); // NOLINT
    /**
     * @symbol
     * ?addEnumValuesToExisting\@CommandRegistry\@\@AEAAXIAEBV?$vector\@U?$pair\@_K_K\@std\@\@V?$allocator\@U?$pair\@_K_K\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
    addEnumValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const&); // NOLINT
    /**
     * @symbol
     * ?addPostfix\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const&); // NOLINT
    /**
     * @symbol
     * ?addRule\@CommandRegistry\@\@AEAAXVSymbol\@1\@V?$vector\@VSymbol\@CommandRegistry\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@std\@\@\@std\@\@V?$function\@$$A6APEAUParseToken\@CommandRegistry\@\@AEAU12\@VSymbol\@2\@\@Z\@4\@VCommandVersion\@\@\@Z
     */
    MCAPI void addRule(
        class CommandRegistry::Symbol,
        std::vector<class CommandRegistry::Symbol>,
        class std::function<
            struct CommandRegistry::ParseToken*(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol)>,
        class CommandVersion
    ); // NOLINT
    /**
     * @symbol ?addSemanticConstraint\@CommandRegistry\@\@AEAAXW4SemanticConstraint\@\@\@Z
     */
    MCAPI void addSemanticConstraint(enum class SemanticConstraint); // NOLINT
    /**
     * @symbol
     * ?addSoftTerminal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const&); // NOLINT
    /**
     * @symbol ?buildFirstSet\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@VSymbol\@1\@I\@Z
     */
    MCAPI void
    buildFirstSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int) const; // NOLINT
    /**
     * @symbol
     * ?buildFollowSet\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@VSymbol\@1\@IAEAV?$set\@VSymbol\@CommandRegistry\@\@U?$less\@VSymbol\@CommandRegistry\@\@\@std\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@4\@\@std\@\@\@Z
     */
    MCAPI void
    buildFollowSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int, class std::set<class CommandRegistry::Symbol, struct std::less<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>>&)
        const; // NOLINT
    /**
     * @symbol
     * ?buildOptionalRuleChain\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBUSignature\@1\@AEBV?$vector\@VCommandParameterData\@\@V?$allocator\@VCommandParameterData\@\@\@std\@\@\@std\@\@AEBV?$vector\@VSymbol\@CommandRegistry\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI class CommandRegistry::Symbol
    buildOptionalRuleChain(struct CommandRegistry::Signature const&, std::vector<class CommandParameterData> const&, std::vector<class CommandRegistry::Symbol> const&); // NOLINT
    /**
     * @symbol
     * ?buildOptionalRuleChain\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBUSignature\@1\@AEBV?$vector\@VCommandParameterData\@\@V?$allocator\@VCommandParameterData\@\@\@std\@\@\@std\@\@PEBVCommandParameterData\@\@_K\@Z
     */
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(
        struct CommandRegistry::Signature const&,
        std::vector<class CommandParameterData> const&,
        class CommandParameterData const*,
        unsigned __int64
    ); // NOLINT
    /**
     * @symbol ?buildParseTable\@CommandRegistry\@\@AEBAXI\@Z
     */
    MCAPI void buildParseTable(unsigned int) const; // NOLINT
    /**
     * @symbol ?buildPredictTable\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@I\@Z
     */
    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable&, unsigned int) const; // NOLINT
    /**
     * @symbol
     * ?buildRules\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEAUSignature\@1\@AEBV?$vector\@V?$not_null\@PEAUOverload\@CommandRegistry\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAUOverload\@CommandRegistry\@\@\@gsl\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI class CommandRegistry::Symbol buildRules(
        struct CommandRegistry::Signature&,
        std::vector<class gsl::not_null<struct CommandRegistry::Overload*>> const&,
        unsigned __int64
    ); // NOLINT
    /**
     * @symbol
     * ?checkOriginCommandFlags\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@UCommandFlag\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI bool
    checkOriginCommandFlags(class CommandOrigin const&, struct CommandFlag, enum class CommandPermissionLevel)
        const; // NOLINT
    /**
     * @symbol
     * ?createCommand\@CommandRegistry\@\@AEBA?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class Command>
    createCommand(struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const; // NOLINT
    /**
     * @symbol
     * ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSymbol\@1\@\@Z
     */
    MCAPI std::string describe(class CommandRegistry::Symbol) const; // NOLINT
    /**
     * @symbol
     * ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandParameterData\@\@\@Z
     */
    MCAPI std::string describe(class CommandParameterData const&) const; // NOLINT
    /**
     * @symbol
     * ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSignature\@1\@AEBV23\@AEBUOverload\@1\@IPEAI3\@Z
     */
    MCAPI std::string
    describe(struct CommandRegistry::Signature const&, std::string const&, struct CommandRegistry::Overload const&, unsigned int, unsigned int*, unsigned int*)
        const; // NOLINT
    /**
     * @symbol
     * ?findCommand\@CommandRegistry\@\@AEAAPEAUSignature\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandRegistry::Signature* findCommand(std::string const&); // NOLINT
    /**
     * @symbol
     * ?findCommand\@CommandRegistry\@\@AEBAPEBUSignature\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?findEnumValue\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?findIdentifierInfo\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?findPostfix\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?forEachNonTerminal\@CommandRegistry\@\@AEBAXV?$function\@$$A6AXVSymbol\@CommandRegistry\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachNonTerminal(class std::function<void(class CommandRegistry::Symbol)>) const; // NOLINT
    /**
     * @symbol ?getEnumData\@CommandRegistry\@\@AEBA_KAEBUParseToken\@1\@\@Z
     */
    MCAPI unsigned __int64 getEnumData(struct CommandRegistry::ParseToken const&) const; // NOLINT
    /**
     * @symbol
     * ?getInvertableFilter\@CommandRegistry\@\@AEBA?AU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@AEBUParseToken\@1\@\@Z
     */
    MCAPI struct InvertableFilter<std::string>
    getInvertableFilter(struct CommandRegistry::ParseToken const&) const; // NOLINT
    /**
     * @symbol ?isValid\@CommandRegistry\@\@AEBA_NVSymbol\@1\@\@Z
     */
    MCAPI bool isValid(class CommandRegistry::Symbol) const; // NOLINT
    /**
     * @symbol ?originCanRun\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@AEBUOverload\@1\@\@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Overload const&) const; // NOLINT
    /**
     * @symbol ?originCanRun\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@AEBUSignature\@1\@\@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Signature const&) const; // NOLINT
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
    ) const; // NOLINT
    /**
     * @symbol
     * ?parseSelector\@CommandRegistry\@\@AEBA_NAEAUActorSelectorArgs\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@\@Z
     */
    MCAPI bool
    parseSelector(struct ActorSelectorArgs&, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const; // NOLINT
    /**
     * @symbol ?registerOverloadInternal\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@AEAUOverload\@1\@\@Z
     */
    MCAPI void
    registerOverloadInternal(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&); // NOLINT
    /**
     * @symbol ?setupChainedSubcommandOverloadRules\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@\@Z
     */
    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature&); // NOLINT
    /**
     * @symbol ?setupOverloadRules\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@\@Z
     */
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature&); // NOLINT
    /**
     * @symbol
     * ?symbolToString\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSymbol\@1\@\@Z
     */
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const; // NOLINT
    /**
     * @symbol
     * ?_removeStringQuotes\@CommandRegistry\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string _removeStringQuotes(std::string const&); // NOLINT
    /**
     * @symbol
     * ?addNonEpsilonSymbols\@CommandRegistry\@\@CAXAEAV?$dense_set\@VSymbol\@CommandRegistry\@\@USymbolHasher\@2\@U?$equal_to\@VSymbol\@CommandRegistry\@\@\@std\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@5\@\@entt\@\@AEBV23\@\@Z
     */
    MCAPI static void addNonEpsilonSymbols(class entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher, struct std::equal_to<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>>&, class entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher, struct std::equal_to<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>> const&); // NOLINT
    /**
     * @symbol ?buildOverload\@CommandRegistry\@\@CAXAEAUOverload\@1\@\@Z
     */
    MCAPI static void buildOverload(struct CommandRegistry::Overload&); // NOLINT
    /**
     * @symbol ?collapse\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    collapse(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol); // NOLINT
    /**
     * @symbol ?collapseOn\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken* collapseOn(
        struct CommandRegistry::ParseToken&,
        class CommandRegistry::Symbol,
        class CommandRegistry::Symbol
    ); // NOLINT
    /**
     * @symbol ?expand\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    expand(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol); // NOLINT
    /**
     * @symbol ?expandExcept\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken* expandExcept(
        struct CommandRegistry::ParseToken&,
        class CommandRegistry::Symbol,
        class CommandRegistry::Symbol
    ); // NOLINT
    /**
     * @symbol ?fold\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    fold(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol); // NOLINT
    /**
     * @symbol ?kill\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken*
    kill(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol); // NOLINT
    /**
     * @symbol
     * ?readFloat\@CommandRegistry\@\@CA_NAEAMAEBUParseToken\@1\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool
    readFloat(float&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&); // NOLINT
    /**
     * @symbol
     * ?readInt\@CommandRegistry\@\@CA_NAEAHAEBUParseToken\@1\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool
    readInt(int&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&); // NOLINT
    /**
     * @symbol
     * ?readRelativeCoordinate\@CommandRegistry\@\@CA_NAEA_NAEAMAEBUParseToken\@1\@_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool
    readRelativeCoordinate(bool&, float&, struct CommandRegistry::ParseToken const&, bool, std::string&, std::vector<std::string>&); // NOLINT

private:
    /**
     * @symbol
     * ?ParseRuleSymbols\@CommandRegistry\@\@0QBU?$pair\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@ZVSymbol\@1\@\@std\@\@B
     */
    MCAPI static struct std::pair<
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        class CommandRegistry::Symbol> const ParseRuleSymbols[]; // NOLINT
};
