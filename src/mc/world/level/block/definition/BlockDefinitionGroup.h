#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockDefinitionGroup {
public:
    // BlockDefinitionGroup inner types declare
    // clang-format off
    struct BlockResource;
    // clang-format on

    // BlockDefinitionGroup inner types define
    struct BlockResource {

    public:
        // prevent constructor by default
        BlockResource& operator=(BlockResource const&) = delete;
        BlockResource(BlockResource const&)            = delete;
        BlockResource()                                = delete;

    public:
        /**
         * @symbol ??1BlockResource\@BlockDefinitionGroup\@\@QEAA\@XZ
         */
        MCAPI ~BlockResource(); // NOLINT
    };

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&) = delete;
    BlockDefinitionGroup(BlockDefinitionGroup const&)            = delete;

public:
    /**
     * @symbol ??0BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI BlockDefinitionGroup(); // NOLINT
    /**
     * @symbol ?buildBlockSchema\@BlockDefinitionGroup\@\@QEAAXAEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void buildBlockSchema(class BlockComponentFactory const&); // NOLINT
    /**
     * @symbol
     * ?generateBlockDefinition\@BlockDefinitionGroup\@\@QEAA?AV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@AEBUBlockResource\@1\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition>
    generateBlockDefinition(struct BlockDefinitionGroup::BlockResource const&, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?generateServerBlockProperties\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const; // NOLINT
    /**
     * @symbol
     * ?getBlockDefinitions\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@PEBUBlockDefinition\@\@V?$allocator\@PEBUBlockDefinition\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct BlockDefinition const*> getBlockDefinitions() const; // NOLINT
    /**
     * @symbol
     * ?initializeBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@AEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void
    initializeBlockFromDefinition(struct BlockDefinition const&, class EntityRegistry&, class Level&); // NOLINT
    /**
     * @symbol ?initializeBlocks\@BlockDefinitionGroup\@\@QEAAXAEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlocks(class EntityRegistry&, class Level&); // NOLINT
    /**
     * @symbol
     * ?loadResource\@BlockDefinitionGroup\@\@QEAA?AV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV43\@AEBVSemVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition>
    loadResource(std::string, class Core::PathBuffer<std::string> const&, std::string const&, class SemVersion const&, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?loadResources\@BlockDefinitionGroup\@\@QEAAXAEBVResourcePackManager\@\@AEBVBlockComponentFactory\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void
    loadResources(class ResourcePackManager const&, class BlockComponentFactory const&, class Experiments const&); // NOLINT
    /**
     * @symbol ?postProcessComponents\@BlockDefinitionGroup\@\@QEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void postProcessComponents(class BlockLegacy&); // NOLINT
    /**
     * @symbol
     * ?registerBlockDefinition\@BlockDefinitionGroup\@\@QEAAXV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition>); // NOLINT
    /**
     * @symbol ?registerBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@_N\@Z
     */
    MCAPI void registerBlockFromDefinition(struct BlockDefinition const&, bool); // NOLINT
    /**
     * @symbol ?registerBlocks\@BlockDefinitionGroup\@\@QEAAXXZ
     */
    MCAPI void registerBlocks(); // NOLINT
    /**
     * @symbol ??1BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinitionGroup(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_buildBlockComponentsSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void
    _buildBlockComponentsSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&); // NOLINT
    /**
     * @symbol
     * ?_buildBlockDescriptionSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockDescriptionSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                                class JsonUtil::EmptyClass,
                                                struct BlockDescription>>&); // NOLINT
    /**
     * @symbol
     * ?_buildBlockMenuCategorySchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockMenuCategorySchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                                 class JsonUtil::EmptyClass,
                                                 struct BlockDescription>>&); // NOLINT
    /**
     * @symbol ?_initializeComponentPostProcessors\@BlockDefinitionGroup\@\@AEAAXXZ
     */
    MCAPI void _initializeComponentPostProcessors(); // NOLINT
    /**
     * @symbol
     * ?_loadBlockDescription\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDescription\@\@AEBVSemVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _loadBlockDescription(class Json::Value const&, struct BlockDescription&, class SemVersion const&, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?_loadComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI bool _loadComponents(class Json::Value const&, struct BlockDefinition&, class Experiments const&); // NOLINT
    /**
     * @symbol ?_loadEvents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@\@Z
     */
    MCAPI bool _loadEvents(class Json::Value const&, struct BlockDefinition&); // NOLINT
    /**
     * @symbol
     * ?_parseComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockComponentGroupDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@3AEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _parseComponents(class Json::Value const&, struct BlockComponentGroupDescription&, std::string const&, class SemVersion const&, class SemVersion const&, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?_stringToCreativeItemCategory\@BlockDefinitionGroup\@\@AEAA?AW4CreativeItemCategory\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CreativeItemCategory _stringToCreativeItemCategory(std::string const&); // NOLINT

private:
};
