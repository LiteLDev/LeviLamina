/**
 * @file  MC/BlockDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -532357685
     * @symbol ??0BlockDefinitionGroup@@QEAA@XZ
     */
    MCAPI BlockDefinitionGroup();
    /**
     * @hash   1004192444
     * @symbol ?buildBlockSchema@BlockDefinitionGroup@@QEAAXAEBVBlockComponentFactory@@@Z
     */
    MCAPI void buildBlockSchema(class BlockComponentFactory const &);
    /**
     * @hash   -1763097642
     * @symbol ?digestServerBlockProperties@BlockDefinitionGroup@@QEAAXAEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@AEBVBlockComponentFactory@@@Z
     */
    MCAPI void digestServerBlockProperties(std::vector<struct std::pair<std::string, class CompoundTag>> const &, class BlockComponentFactory const &);
    /**
     * @hash   -1492477122
     * @symbol ?generateBlockDefinition@BlockDefinitionGroup@@QEAA?AV?$unique_ptr@UBlockDefinition@@U?$default_delete@UBlockDefinition@@@std@@@std@@AEBUBlockResource@1@AEBVExperiments@@@Z
     */
    MCAPI std::unique_ptr<struct BlockDefinition> generateBlockDefinition(struct BlockDefinitionGroup::BlockResource const &, class Experiments const &);
    /**
     * @hash   1038462709
     * @symbol ?generateServerBlockProperties@BlockDefinitionGroup@@QEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<struct std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;
    /**
     * @hash   -406775330
     * @symbol ?getBlockDefinitions@BlockDefinitionGroup@@QEBA?AV?$vector@PEBUBlockDefinition@@V?$allocator@PEBUBlockDefinition@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct BlockDefinition const *> getBlockDefinitions() const;
    /**
     * @hash   -1078529776
     * @symbol ?initializeBlockFromDefinition@BlockDefinitionGroup@@QEAAXAEBUBlockDefinition@@AEAVEntityRegistry@@AEAVLevel@@@Z
     */
    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const &, class EntityRegistry &, class Level &);
    /**
     * @hash   2047489963
     * @symbol ?initializeBlocks@BlockDefinitionGroup@@QEAAXAEAVEntityRegistry@@AEAVLevel@@@Z
     */
    MCAPI void initializeBlocks(class EntityRegistry &, class Level &);
    /**
     * @hash   1745232642
     * @symbol ?loadResources@BlockDefinitionGroup@@QEAAXAEAVResourcePackManager@@AEBVBlockComponentFactory@@AEBVExperiments@@@Z
     */
    MCAPI void loadResources(class ResourcePackManager &, class BlockComponentFactory const &, class Experiments const &);
    /**
     * @hash   -367216174
     * @symbol ?registerBlockDefinition@BlockDefinitionGroup@@QEAAXV?$unique_ptr@UBlockDefinition@@U?$default_delete@UBlockDefinition@@@std@@@std@@@Z
     */
    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition>);
    /**
     * @hash   -783906923
     * @symbol ?registerBlockFromDefinition@BlockDefinitionGroup@@QEAAXAEBUBlockDefinition@@_N@Z
     */
    MCAPI void registerBlockFromDefinition(struct BlockDefinition const &, bool);
    /**
     * @hash   -3400171
     * @symbol ?registerBlocks@BlockDefinitionGroup@@QEAAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @hash   1829247769
     * @symbol ??1BlockDefinitionGroup@@QEAA@XZ
     */
    MCAPI ~BlockDefinitionGroup();

//private:
    /**
     * @hash   -534388575
     * @symbol ?_buildBlockComponentsSchema@BlockDefinitionGroup@@AEAAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
     */
    MCAPI void _buildBlockComponentsSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &);
    /**
     * @hash   1819294770
     * @symbol ?_buildBlockDescriptionSchema@BlockDefinitionGroup@@AEAAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockDescription@@@JsonUtil@@@std@@@Z
     */
    MCAPI void _buildBlockDescriptionSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    /**
     * @symbol ?_buildBlockMenuCategorySchema@BlockDefinitionGroup@@AEAAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockDescription@@@JsonUtil@@@std@@@Z
     */
    MCAPI void _buildBlockMenuCategorySchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    /**
     * @hash   1493052917
     * @symbol ?_loadBlockDescription@BlockDefinitionGroup@@AEAA_NAEBVValue@Json@@AEAUBlockDescription@@@Z
     */
    MCAPI bool _loadBlockDescription(class Json::Value const &, struct BlockDescription &);
    /**
     * @hash   -618239150
     * @symbol ?_loadComponents@BlockDefinitionGroup@@AEAA_NAEBVValue@Json@@AEAUBlockDefinition@@AEBVExperiments@@@Z
     */
    MCAPI bool _loadComponents(class Json::Value const &, struct BlockDefinition &, class Experiments const &);
    /**
     * @hash   1521581428
     * @symbol ?_loadEvents@BlockDefinitionGroup@@AEAA_NAEBVValue@Json@@AEAUBlockDefinition@@@Z
     */
    MCAPI bool _loadEvents(class Json::Value const &, struct BlockDefinition &);
    /**
     * @hash   -1921267370
     * @symbol ?_parseComponents@BlockDefinitionGroup@@AEAA_NAEBVValue@Json@@AEAUBlockComponentGroupDescription@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVExperiments@@@Z
     */
    MCAPI bool _parseComponents(class Json::Value const &, struct BlockComponentGroupDescription &, std::string const &, class SemVersion const &, class Experiments const &);

private:

};