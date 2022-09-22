/**
 * @file  CerealItemComponentFactory.hpp
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
 * @brief MC class CerealItemComponentFactory.
 *
 */
class CerealItemComponentFactory {

#define AFTER_EXTRA
// Add Member There
public:
struct Constructor {
    Constructor() = delete;
    Constructor(Constructor const&) = delete;
    Constructor(Constructor const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALITEMCOMPONENTFACTORY
public:
    class CerealItemComponentFactory& operator=(class CerealItemComponentFactory const &) = delete;
    CerealItemComponentFactory(class CerealItemComponentFactory const &) = delete;
    CerealItemComponentFactory() = delete;
#endif

public:
    /**
     * @hash   229371258
     * @symbol ?addAllComponentUpgrades@CerealItemComponentFactory@@SAXAEAVCerealDocumentUpgrader@@@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader &);
    /**
     * @hash   2070380470
     * @symbol ?constructItemComponent@CerealItemComponentFactory@@SA?AV?$shared_ptr@VItemComponent@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static class std::shared_ptr<class ItemComponent> constructItemComponent(std::string const &);
    /**
     * @hash   -1253135309
     * @symbol ?getItemContext@CerealItemComponentFactory@@SAPEAVComponentItem@@XZ
     */
    MCAPI static class ComponentItem * getItemContext();
    /**
     * @hash   -1815757975
     * @symbol ?isRegisteredComponent@CerealItemComponentFactory@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool isRegisteredComponent(std::string const &);
    /**
     * @hash   -442566800
     * @symbol ?registerComponentUpgrade@CerealItemComponentFactory@@SAXAEAVCerealDocumentUpgrader@@V?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
     */
    MCAPI static void registerComponentUpgrade(class CerealDocumentUpgrader &, class std::shared_ptr<class CerealSchemaUpgrade>);
    /**
     * @hash   1760955299
     * @symbol ?resetItemContext@CerealItemComponentFactory@@SAXXZ
     */
    MCAPI static void resetItemContext();
    /**
     * @hash   1584019559
     * @symbol ?setItemContext@CerealItemComponentFactory@@SAXPEAVComponentItem@@@Z
     */
    MCAPI static void setItemContext(class ComponentItem *);

//private:
    /**
     * @hash   808933064
     * @symbol ?_bindAllComponentSchemas@CerealItemComponentFactory@@CAXAEAVSchemaFactory@reflection@@AEBVSemVersion@@@Z
     */
    MCAPI static void _bindAllComponentSchemas(class reflection::SchemaFactory &, class SemVersion const &);

private:
    /**
     * @hash   -718065553
     * @symbol ?mItemContext@CerealItemComponentFactory@@0PEAVComponentItem@@EA
     */
    MCAPI static class ComponentItem * mItemContext;
    /**
     * @hash   106259191
     * @symbol ?mRegisteredComponents@CerealItemComponentFactory@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@CerealItemComponentFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@CerealItemComponentFactory@@@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<std::string, struct CerealItemComponentFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct CerealItemComponentFactory::Constructor>>> mRegisteredComponents;

};