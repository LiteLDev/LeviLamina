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
        // NOLINTBEGIN
        /**
         * @symbol ??1BlockResource\@BlockDefinitionGroup\@\@QEAA\@XZ
         */
        MCAPI ~BlockResource();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&) = delete;
    BlockDefinitionGroup(BlockDefinitionGroup const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI BlockDefinitionGroup();
    /**
     * @symbol ?buildBlockSchema\@BlockDefinitionGroup\@\@QEAAXAEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void buildBlockSchema(class BlockComponentFactory const&);
    /**
     * @symbol
     * ?generateBlockDefinition\@BlockDefinitionGroup\@\@QEAA?AV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@AEBUBlockResource\@1\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition>
          generateBlockDefinition(struct BlockDefinitionGroup::BlockResource const&, class Experiments const&);
    /**
     * @symbol
     * ?generateServerBlockProperties\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;
    /**
     * @symbol
     * ?getBlockDefinitions\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@PEBUBlockDefinition\@\@V?$allocator\@PEBUBlockDefinition\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct BlockDefinition const*> getBlockDefinitions() const;
    /**
     * @symbol
     * ?initializeBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@AEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const&, class EntityRegistry&, class Level&);
    /**
     * @symbol ?initializeBlocks\@BlockDefinitionGroup\@\@QEAAXAEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlocks(class EntityRegistry&, class Level&);
    /**
     * @symbol
     * ?loadResource\@BlockDefinitionGroup\@\@QEAA?AV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV43\@AEBVSemVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition>
    loadResource(std::string, class Core::PathBuffer<std::string> const&, std::string const&, class SemVersion const&, class Experiments const&);
    /**
     * @symbol
     * ?loadResources\@BlockDefinitionGroup\@\@QEAAXAEBVResourcePackManager\@\@AEBVBlockComponentFactory\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void
    loadResources(class ResourcePackManager const&, class BlockComponentFactory const&, class Experiments const&);
    /**
     * @symbol ?postProcessComponents\@BlockDefinitionGroup\@\@QEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void postProcessComponents(class BlockLegacy&);
    /**
     * @symbol
     * ?registerBlockDefinition\@BlockDefinitionGroup\@\@QEAAXV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition>);
    /**
     * @symbol ?registerBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@_N\@Z
     */
    MCAPI void registerBlockFromDefinition(struct BlockDefinition const&, bool);
    /**
     * @symbol ?registerBlocks\@BlockDefinitionGroup\@\@QEAAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @symbol ??1BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinitionGroup();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_buildBlockComponentsSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void
    _buildBlockComponentsSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&);
    /**
     * @symbol
     * ?_buildBlockDescriptionSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockDescriptionSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                                class JsonUtil::EmptyClass,
                                                struct BlockDescription>>&);
    /**
     * @symbol
     * ?_buildBlockMenuCategorySchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockMenuCategorySchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                                 class JsonUtil::EmptyClass,
                                                 struct BlockDescription>>&);
    /**
     * @symbol ?_initializeComponentPostProcessors\@BlockDefinitionGroup\@\@AEAAXXZ
     */
    MCAPI void _initializeComponentPostProcessors();
    /**
     * @symbol
     * ?_loadBlockDescription\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDescription\@\@AEBVSemVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _loadBlockDescription(class Json::Value const&, struct BlockDescription&, class SemVersion const&, class Experiments const&);
    /**
     * @symbol
     * ?_loadComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI bool _loadComponents(class Json::Value const&, struct BlockDefinition&, class Experiments const&);
    /**
     * @symbol ?_loadEvents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@\@Z
     */
    MCAPI bool _loadEvents(class Json::Value const&, struct BlockDefinition&);
    /**
     * @symbol
     * ?_parseComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockComponentGroupDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@3AEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _parseComponents(class Json::Value const&, struct BlockComponentGroupDescription&, std::string const&, class SemVersion const&, class SemVersion const&, class Experiments const&);
    /**
     * @symbol
     * ?_stringToCreativeItemCategory\@BlockDefinitionGroup\@\@AEAA?AW4CreativeItemCategory\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CreativeItemCategory _stringToCreativeItemCategory(std::string const&);
    // NOLINTEND
};
