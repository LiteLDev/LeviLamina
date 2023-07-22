/**
 * @file  BlockDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockDefinitionGroup.
 *
 */
class BlockDefinitionGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockResource {
    BlockResource() = delete;
    BlockResource(BlockResource const&) = delete;
    BlockResource(BlockResource const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITIONGROUP
public:
    class BlockDefinitionGroup& operator=(class BlockDefinitionGroup const &) = delete;
    BlockDefinitionGroup(class BlockDefinitionGroup const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI BlockDefinitionGroup();
    /**
     * @symbol  ?buildBlockSchema\@BlockDefinitionGroup\@\@QEAAXAEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void buildBlockSchema(class BlockComponentFactory const &);
    /**
     * @symbol  ?digestServerBlockProperties\@BlockDefinitionGroup\@\@QEAAXAEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void digestServerBlockProperties(std::vector<struct std::pair<std::string, class CompoundTag>> const &, class BlockComponentFactory const &);
    /**
     * @symbol  ?generateBlockDefinition\@BlockDefinitionGroup\@\@QEAA?AV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@AEBUBlockResource\@1\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition> generateBlockDefinition(struct BlockDefinitionGroup::BlockResource const &, class Experiments const &);
    /**
     * @symbol  ?generateServerBlockProperties\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;
    /**
     * @symbol  ?getBlockDefinitions\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@PEBUBlockDefinition\@\@V?$allocator\@PEBUBlockDefinition\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct BlockDefinition const *> getBlockDefinitions() const;
    /**
     * @symbol  ?initBlockLegacyFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEAVBlockLegacy\@\@AEBUBlockDefinition\@\@\@Z
     */
    MCAPI void initBlockLegacyFromDefinition(class BlockLegacy &, struct BlockDefinition const &);
    /**
     * @symbol  ?initializeBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@AEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const &, class EntityRegistry &, class Level &);
    /**
     * @symbol  ?initializeBlocks\@BlockDefinitionGroup\@\@QEAAXAEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlocks(class EntityRegistry &, class Level &);
    /**
     * @symbol  ?loadResources\@BlockDefinitionGroup\@\@QEAAXAEAVResourcePackManager\@\@AEBVBlockComponentFactory\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void loadResources(class ResourcePackManager &, class BlockComponentFactory const &, class Experiments const &);
    /**
     * @symbol  ?registerBlockDefinition\@BlockDefinitionGroup\@\@QEAAXV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition>);
    /**
     * @symbol  ?registerBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@_N\@Z
     */
    MCAPI void registerBlockFromDefinition(struct BlockDefinition const &, bool);
    /**
     * @symbol  ?registerBlocks\@BlockDefinitionGroup\@\@QEAAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @symbol  ??1BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinitionGroup();

//private:
    /**
     * @symbol  ?_buildBlockComponentsSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void _buildBlockComponentsSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &);
    /**
     * @symbol  ?_buildBlockDescriptionSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockDescriptionSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    /**
     * @symbol  ?_buildBlockMenuCategorySchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockMenuCategorySchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    /**
     * @symbol  ?_loadBlockDescription\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDescription\@\@\@Z
     */
    MCAPI bool _loadBlockDescription(class Json::Value const &, struct BlockDescription &);
    /**
     * @symbol  ?_loadComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI bool _loadComponents(class Json::Value const &, struct BlockDefinition &, class Experiments const &);
    /**
     * @symbol  ?_loadEvents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@\@Z
     */
    MCAPI bool _loadEvents(class Json::Value const &, struct BlockDefinition &);
    /**
     * @symbol  ?_parseComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockComponentGroupDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@3AEBVExperiments\@\@\@Z
     */
    MCAPI bool _parseComponents(class Json::Value const &, struct BlockComponentGroupDescription &, std::string const &, class SemVersion const &, class SemVersion const &, class Experiments const &);
    /**
     * @symbol  ?_stringToCreativeItemCategory\@BlockDefinitionGroup\@\@AEAA?AW4CreativeItemCategory\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CreativeItemCategory _stringToCreativeItemCategory(std::string const &);

private:

};