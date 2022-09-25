/**
 * @file  BlockComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockComponentFactory.
 *
 */
class BlockComponentFactory {

#define AFTER_EXTRA
// Add Member There
public:
struct Constructor {
    Constructor() = delete;
    Constructor(Constructor const&) = delete;
    Constructor(Constructor const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTFACTORY
public:
    class BlockComponentFactory& operator=(class BlockComponentFactory const &) = delete;
    BlockComponentFactory(class BlockComponentFactory const &) = delete;
    BlockComponentFactory() = delete;
#endif

public:
    /**
     * @hash   -1974410605
     * @symbol ??0BlockComponentFactory@@QEAA@AEBVExperiments@@@Z
     */
    MCAPI BlockComponentFactory(class Experiments const &);
    /**
     * @hash   309865903
     * @symbol ?createDescription@BlockComponentFactory@@QEBA?AV?$unique_ptr@UBlockComponentDescription@@U?$default_delete@UBlockComponentDescription@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::unique_ptr<struct BlockComponentDescription> createDescription(std::string const &) const;
    /**
     * @hash   -947194040
     * @symbol ?addAllComponentUpgrades@BlockComponentFactory@@SAXAEAVCerealDocumentUpgrader@@@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader &);
    /**
     * @hash   -1855470203
     * @symbol ?mRegisteredCerealComponents@BlockComponentFactory@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockComponentFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockComponentFactory@@@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<std::string, struct BlockComponentFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct BlockComponentFactory::Constructor>>> mRegisteredCerealComponents;
    /**
     * @hash   -1986584563
     * @symbol ?registerAllCerealDescriptions@BlockComponentFactory@@SAXXZ
     */
    MCAPI static void registerAllCerealDescriptions();
    /**
     * @hash   669956322
     * @symbol ?registerComponentUpgrade@BlockComponentFactory@@SAXAEAVCerealDocumentUpgrader@@V?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
     */
    MCAPI static void registerComponentUpgrade(class CerealDocumentUpgrader &, class std::shared_ptr<class CerealSchemaUpgrade>);

//private:
    /**
     * @hash   1529893182
     * @symbol ?_bindAllComponentSchemas@BlockComponentFactory@@CAXAEAVSchemaFactory@reflection@@AEBVSemVersion@@@Z
     */
    MCAPI static void _bindAllComponentSchemas(class reflection::SchemaFactory &, class SemVersion const &);

private:

};