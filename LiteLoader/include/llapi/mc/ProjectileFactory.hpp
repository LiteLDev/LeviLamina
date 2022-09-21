/**
 * @file  MC/ProjectileFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProjectileFactory.
 *
 */
class ProjectileFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEFACTORY
public:
    class ProjectileFactory& operator=(class ProjectileFactory const &) = delete;
    ProjectileFactory(class ProjectileFactory const &) = delete;
    ProjectileFactory() = delete;
#endif

public:
    /**
     * @hash   -1714463884
     * @symbol ??0ProjectileFactory@@QEAA@AEAVLevel@@@Z
     */
    MCAPI ProjectileFactory(class Level &);
    /**
     * @hash   2108452813
     * @symbol ?shootProjectileFromDefinition@ProjectileFactory@@QEAAPEAVActor@@AEBUActorDefinitionIdentifier@@PEAVMob@@VVec3@@@Z
     */
    MCAPI class Actor * shootProjectileFromDefinition(struct ActorDefinitionIdentifier const &, class Mob *, class Vec3);
    /**
     * @hash   25412275
     * @symbol ?createSubcomponent@ProjectileFactory@@SA?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@AEAVValue@Json@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static std::unique_ptr<class OnHitSubcomponent> createSubcomponent(class Json::Value &, class SemVersion const &, std::string const &);
    /**
     * @hash   483111207
     * @symbol ?initFactory@ProjectileFactory@@SAXXZ
     */
    MCAPI static void initFactory();
    /**
     * @hash   1972677917
     * @symbol ?shutdown@ProjectileFactory@@SAXXZ
     */
    MCAPI static void shutdown();

//private:

private:
    /**
     * @hash   -1682408307
     * @symbol ?mSubcomponentMap@ProjectileFactory@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@XZ@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@XZ@2@@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<std::string, class std::function<std::unique_ptr<class OnHitSubcomponent> (void)>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::function<std::unique_ptr<class OnHitSubcomponent> (void)>>>> mSubcomponentMap;

};