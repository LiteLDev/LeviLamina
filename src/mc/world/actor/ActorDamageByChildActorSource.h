#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/actor/ActorDamageByActorSource.h"

class ActorDamageByChildActorSource : public ::ActorDamageByActorSource {
public:
    bool          mDamagingActorIsWorldBuilder; // this+0x50
    bool          mDamagingActorIsCreative;     // this+0x51
    ActorUniqueID mDamagingActorId;             // this+0x58
    ActorType     mDamagingActorType;           // this+0x60
    ActorCategory mDamagingActorCategories;     // this+0x64
    std::string   mDamagingActorNameTag;        // this+0x68
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorDamageByChildActorSource@@UEAA@XZ
    virtual ~ActorDamageByChildActorSource();

    // vIndex: 2, symbol: ?isChildEntitySource@ActorDamageByChildActorSource@@UEBA_NXZ
    virtual bool isChildEntitySource() const;

    // vIndex: 10, symbol:
    // ?getDeathMessage@ActorDamageByChildActorSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 16, symbol: ?getDamagingEntityIsCreative@ActorDamageByChildActorSource@@UEBA_NXZ
    virtual bool getDamagingEntityIsCreative() const;

    // vIndex: 17, symbol: ?getDamagingEntityIsWorldBuilder@ActorDamageByChildActorSource@@UEBA_NXZ
    virtual bool getDamagingEntityIsWorldBuilder() const;

    // vIndex: 18, symbol: ?getDamagingEntityUniqueID@ActorDamageByChildActorSource@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19, symbol: ?getDamagingEntityType@ActorDamageByChildActorSource@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 20, symbol: ?getDamagingEntityCategories@ActorDamageByChildActorSource@@UEBA?AW4ActorCategory@@XZ
    virtual ::ActorCategory getDamagingEntityCategories() const;

    // vIndex: 21, symbol:
    // ?clone@ActorDamageByChildActorSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    // symbol: ??0ActorDamageByChildActorSource@@QEAA@AEBVActor@@0W4ActorDamageCause@@@Z
    MCAPI
    ActorDamageByChildActorSource(class Actor const& childActor, class Actor const& actor, ::ActorDamageCause cause);

    // NOLINTEND
};
