/**
 * @file  BlockDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../JsonUtil.hpp"
#include "../../Json.hpp"

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
     * @hash   323270587
     * @symbol  ??0BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI BlockDefinitionGroup();
    /**
     * @hash   1864110620
     * @symbol  ?buildBlockSchema\@BlockDefinitionGroup\@\@QEAAXAEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void buildBlockSchema(class BlockComponentFactory const &);
    /**
     * @hash   -903164090
     * @symbol  ?digestServerBlockProperties\@BlockDefinitionGroup\@\@QEAAXAEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void digestServerBlockProperties(std::vector<struct std::pair<std::string, class CompoundTag>> const &, class BlockComponentFactory const &);
    /**
     * @hash   -631621010
     * @symbol  ?generateBlockDefinition\@BlockDefinitionGroup\@\@QEAA?AV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@AEBUBlockResource\@1\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition> generateBlockDefinition(struct BlockDefinitionGroup::BlockResource const &, class Experiments const &);
    /**
     * @hash   1899549461
     * @symbol  ?generateServerBlockProperties\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;
    /**
     * @hash   454864958
     * @symbol  ?getBlockDefinitions\@BlockDefinitionGroup\@\@QEBA?AV?$vector\@PEBUBlockDefinition\@\@V?$allocator\@PEBUBlockDefinition\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct BlockDefinition const *> getBlockDefinitions() const;
    /**
     * @hash   66308949
     * @symbol  ?initBlockLegacyFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEAVBlockLegacy\@\@AEBUBlockDefinition\@\@\@Z
     */
    MCAPI void initBlockLegacyFromDefinition(class BlockLegacy &, struct BlockDefinition const &);
    /**
     * @hash   -216428208
     * @symbol  ?initializeBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@AEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const &, class EntityRegistry &, class Level &);
    /**
     * @hash   -1385667909
     * @symbol  ?initializeBlocks\@BlockDefinitionGroup\@\@QEAAXAEAVEntityRegistry\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void initializeBlocks(class EntityRegistry &, class Level &);
    /**
     * @hash   -1687925230
     * @symbol  ?loadResources\@BlockDefinitionGroup\@\@QEAAXAEAVResourcePackManager\@\@AEBVBlockComponentFactory\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void loadResources(class ResourcePackManager &, class BlockComponentFactory const &, class Experiments const &);
    /**
     * @hash   494823890
     * @symbol  ?registerBlockDefinition\@BlockDefinitionGroup\@\@QEAAXV?$unique_ptr\@UBlockDefinition\@\@U?$default_delete\@UBlockDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition>);
    /**
     * @hash   78133141
     * @symbol  ?registerBlockFromDefinition\@BlockDefinitionGroup\@\@QEAAXAEBUBlockDefinition\@\@_N\@Z
     */
    MCAPI void registerBlockFromDefinition(struct BlockDefinition const &, bool);
    /**
     * @hash   858609141
     * @symbol  ?registerBlocks\@BlockDefinitionGroup\@\@QEAAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @hash   -1610091255
     * @symbol  ??1BlockDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinitionGroup();

//private:
    /**
     * @hash   321716353
     * @symbol  ?_buildBlockComponentsSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCAPI void _buildBlockComponentsSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &);
    /**
     * @hash   -1619383086
     * @symbol  ?_buildBlockDescriptionSchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockDescriptionSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    /**
     * @hash   1599614485
     * @symbol  ?_buildBlockMenuCategorySchema\@BlockDefinitionGroup\@\@AEAAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockDescription\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI void _buildBlockMenuCategorySchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    /**
     * @hash   -1944056587
     * @symbol  ?_loadBlockDescription\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDescription\@\@\@Z
     */
    MCAPI bool _loadBlockDescription(class Json::Value const &, struct BlockDescription &);
    /**
     * @hash   240187554
     * @symbol  ?_loadComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI bool _loadComponents(class Json::Value const &, struct BlockDefinition &, class Experiments const &);
    /**
     * @hash   -1914928412
     * @symbol  ?_loadEvents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockDefinition\@\@\@Z
     */
    MCAPI bool _loadEvents(class Json::Value const &, struct BlockDefinition &);
    /**
     * @hash   -1624968924
     * @symbol  ?_parseComponents\@BlockDefinitionGroup\@\@AEAA_NAEBVValue\@Json\@\@AEAUBlockComponentGroupDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@3AEBVExperiments\@\@\@Z
     */
    MCAPI bool _parseComponents(class Json::Value const &, struct BlockComponentGroupDescription &, std::string const &, class SemVersion const &, class SemVersion const &, class Experiments const &);
    /**
     * @hash   -1917410286
     * @symbol  ?_stringToCreativeItemCategory\@BlockDefinitionGroup\@\@AEAA?AW4CreativeItemCategory\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CreativeItemCategory _stringToCreativeItemCategory(std::string const &);

private:

};