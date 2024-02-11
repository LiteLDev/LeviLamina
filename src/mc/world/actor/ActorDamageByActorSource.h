#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/actor/ActorDamageSource.h"

class ActorDamageByActorSource : public ::ActorDamageSource {
public:
    class BlockSource const* mRegion;           // this+0x10
    bool                     mIsWorldBuilder;   // this+0x18
    bool                     mIsCreative;       // this+0x19
    ActorUniqueID            mEntityID;         // this+0x20
    ::ActorType              mEntityType;       // this+0x28
    ::ActorCategory          mEntityCategories; // this+0x2C
    std::string              mEntityNameTag;    // this+0x30

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorDamageByActorSource@@UEAA@XZ
    virtual ~ActorDamageByActorSource();

    // vIndex: 1, symbol: ?isEntitySource@ActorDamageByActorSource@@UEBA_NXZ
    virtual bool isEntitySource() const;

    // vIndex: 10, symbol:
    // ?getDeathMessage@ActorDamageByActorSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 11, symbol: ?getIsCreative@ActorDamageByActorSource@@UEBA_NXZ
    virtual bool getIsCreative() const;

    // vIndex: 12, symbol: ?getIsWorldBuilder@ActorDamageByActorSource@@UEBA_NXZ
    virtual bool getIsWorldBuilder() const;

    // vIndex: 13, symbol: ?getEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getEntityUniqueID() const;

    // vIndex: 14, symbol: ?getEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityType() const;

    // vIndex: 15, symbol: ?getEntityCategories@ActorDamageByActorSource@@UEBA?AW4ActorCategory@@XZ
    virtual ::ActorCategory getEntityCategories() const;

    // vIndex: 18, symbol: ?getDamagingEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19, symbol: ?getDamagingEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 21, symbol:
    // ?clone@ActorDamageByActorSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    // symbol: ??0ActorDamageByActorSource@@QEAA@AEBVActor@@W4ActorDamageCause@@@Z
    MCAPI ActorDamageByActorSource(class Actor const& actor, ::ActorDamageCause cause);

    // NOLINTEND
};
