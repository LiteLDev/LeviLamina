#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ProjectileFactory {
public:
    // prevent constructor by default
    ProjectileFactory& operator=(ProjectileFactory const&);
    ProjectileFactory(ProjectileFactory const&);
    ProjectileFactory();

public:
    // NOLINTBEGIN
    // symbol: ??0ProjectileFactory@@QEAA@AEAVLevel@@@Z
    MCAPI explicit ProjectileFactory(class Level& level);

    // symbol:
    // ?shootProjectileFromDefinition@ProjectileFactory@@QEAAPEAVActor@@AEBUActorDefinitionIdentifier@@PEAVMob@@VVec3@@HM_N32@Z
    MCAPI class Actor* shootProjectileFromDefinition(
        struct ActorDefinitionIdentifier const&,
        class Mob*,
        class Vec3,
        int,
        float,
        bool,
        bool,
        class Vec3
    );

    // symbol:
    // ?createSubcomponent@ProjectileFactory@@SA?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@AEAVValue@Json@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::unique_ptr<class OnHitSubcomponent>
    createSubcomponent(class Json::Value& trigger, class SemVersion const& engineVersion, std::string const& name);

    // symbol: ?initFactory@ProjectileFactory@@SAXXZ
    MCAPI static void initFactory();

    // symbol: ?shutdown@ProjectileFactory@@SAXXZ
    MCAPI static void shutdown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mSubcomponentMap@ProjectileFactory@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@XZ@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@XZ@2@@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, std::function<std::unique_ptr<class OnHitSubcomponent>()>>
        mSubcomponentMap;

    // NOLINTEND
};
