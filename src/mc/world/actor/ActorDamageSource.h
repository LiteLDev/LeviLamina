#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

class ActorDamageSource {
public:
    ::ActorDamageCause mCause;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorDamageSource@@UEAA@XZ
    virtual ~ActorDamageSource() = default;

    // vIndex: 1, symbol: ?isEntitySource@ActorDamageSource@@UEBA_NXZ
    virtual bool isEntitySource() const;

    // vIndex: 2, symbol: ?isChildEntitySource@ActorDamageSource@@UEBA_NXZ
    virtual bool isChildEntitySource() const;

    // vIndex: 3, symbol: ?isBlockSource@ActorDamageSource@@UEBA_NXZ
    virtual bool isBlockSource() const;

    // vIndex: 4, symbol: ?isFire@ActorDamageSource@@UEBA_NXZ
    virtual bool isFire() const;

    // vIndex: 5, symbol: ?isReducedByResistanceEffect@ActorDamageSource@@UEBA_NXZ
    virtual bool isReducedByResistanceEffect() const;

    // vIndex: 6, symbol: ?isReducedByEnchantReduction@ActorDamageSource@@UEBA_NXZ
    virtual bool isReducedByEnchantReduction() const;

    // vIndex: 7, symbol: ?isReducedByArmorReduction@ActorDamageSource@@UEBA_NXZ
    virtual bool isReducedByArmorReduction() const;

    // vIndex: 8, symbol: ?isFallingBlockDamage@ActorDamageSource@@UEBA_NXZ
    virtual bool isFallingBlockDamage() const;

    // vIndex: 9, symbol: ?isFallDamage@ActorDamageSource@@UEBA_NXZ
    virtual bool isFallDamage() const;

    // vIndex: 10, symbol:
    // ?getDeathMessage@ActorDamageSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 11, symbol: ?getIsCreative@ActorDamageSource@@UEBA_NXZ
    virtual bool getIsCreative() const;

    // vIndex: 12, symbol: ?getIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
    virtual bool getIsWorldBuilder() const;

    // vIndex: 13, symbol: ?getEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getEntityUniqueID() const;

    // vIndex: 14, symbol: ?getEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityType() const;

    // vIndex: 15, symbol: ?getEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
    virtual ::ActorCategory getEntityCategories() const;

    // vIndex: 16, symbol: ?getDamagingEntityIsCreative@ActorDamageSource@@UEBA_NXZ
    virtual bool getDamagingEntityIsCreative() const;

    // vIndex: 17, symbol: ?getDamagingEntityIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
    virtual bool getDamagingEntityIsWorldBuilder() const;

    // vIndex: 18, symbol: ?getDamagingEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19, symbol: ?getDamagingEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 20, symbol: ?getDamagingEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
    virtual ::ActorCategory getDamagingEntityCategories() const;

    // vIndex: 21, symbol:
    // ?clone@ActorDamageSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    // symbol: ??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z
    MCAPI explicit ActorDamageSource(::ActorDamageCause cause);

    // symbol: ?getCause@ActorDamageSource@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getCause() const;

    // symbol: ?setCause@ActorDamageSource@@QEAAXW4ActorDamageCause@@@Z
    MCAPI void setCause(::ActorDamageCause cause);

    // symbol:
    // ?generateDamageCauseCommandEnum@ActorDamageSource@@SA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@@2@@std@@V?$optional@UVersion@Scripting@@@3@@Z
    MCAPI static std::vector<std::pair<std::string, ::ActorDamageCause>>
        generateDamageCauseCommandEnum(std::optional<struct Scripting::Version>);

    // symbol:
    // ?generateNewDamageCauseCommandEnum@ActorDamageSource@@SA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@@2@@std@@V?$optional@UVersion@Scripting@@@3@@Z
    MCAPI static std::vector<std::pair<std::string, ::ActorDamageCause>>
        generateNewDamageCauseCommandEnum(std::optional<struct Scripting::Version>);

    // symbol:
    // ?generateVersionedDamageCauseCommandEnum@ActorDamageSource@@SA?AV?$vector@VVersionedActorDamageCause@@V?$allocator@VVersionedActorDamageCause@@@std@@@std@@XZ
    MCAPI static std::vector<class VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();

    // symbol: ?getCauseMapVersionCutoffInclusive@ActorDamageSource@@SA?AW4ActorDamageCause@@UVersion@Scripting@@@Z
    MCAPI static ::ActorDamageCause getCauseMapVersionCutoffInclusive(struct Scripting::Version);

    // symbol: ?isDamageCausedByMob@ActorDamageSource@@SA_NW4ActorDamageCause@@@Z
    MCAPI static bool isDamageCausedByMob(::ActorDamageCause cause);

    // symbol:
    // ?lookupCause@ActorDamageSource@@SA?AW4ActorDamageCause@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::ActorDamageCause lookupCause(std::string const& name);

    // symbol:
    // ?lookupCauseName@ActorDamageSource@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@Z
    MCAPI static std::string const& lookupCauseName(::ActorDamageCause);

    // NOLINTEND
};
