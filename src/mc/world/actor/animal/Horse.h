#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/HorseFlags.h"
#include "mc/enums/HorsePostTravelType.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse& operator=(Horse const&);
    Horse(Horse const&);
    Horse();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Horse@@EEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 32, symbol: ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@Horse@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 78, symbol: ?isImmobile@Horse@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 108, symbol: ?onFailedTame@Horse@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 112, symbol: ?setStanding@Horse@@UEAAX_N@Z
    virtual void setStanding(bool);

    // vIndex: 124, symbol: ?feed@Horse@@UEAAXH@Z
    virtual void feed(int);

    // vIndex: 125, symbol: ?handleEntityEvent@Horse@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 155, symbol: ?canFreeze@Horse@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 166, symbol: ?causeFallDamage@Horse@@MEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 167, symbol: ?handleFallDistanceOnServer@Horse@@MEAAXMM_N@Z
    virtual void handleFallDistanceOnServer(float, float, bool);

    // vIndex: 169, symbol: ?onSynchedDataUpdate@Horse@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 195, symbol: ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player&);

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 220, symbol: ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 241, symbol: ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 279, symbol: ?getArmorValue@Horse@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 318, symbol: ?setType@Horse@@UEAAXH@Z
    virtual void setType(int);

    // vIndex: 319, symbol: ?getType@Horse@@UEBAHXZ
    virtual int getType() const;

    // vIndex: 320, symbol: ?setHorseEating@Horse@@UEAAX_N@Z
    virtual void setHorseEating(bool);

    // vIndex: 321, symbol: ?getStandAnim@Horse@@UEBAMM@Z
    virtual float getStandAnim(float) const;

    // vIndex: 322, symbol: ?isAdult@Horse@@UEBA_NXZ
    virtual bool isAdult() const;

    // vIndex: 323, symbol: ?isHorseEating@Horse@@UEBA_NXZ
    virtual bool isHorseEating() const;

    // vIndex: 324, symbol: ?isMouthOpen@Horse@@UEBA_NXZ
    virtual bool isMouthOpen() const;

    // vIndex: 325, symbol: ?makeMad@Horse@@UEAAXXZ
    virtual void makeMad();

    // vIndex: 326, symbol: ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
    virtual bool tameToPlayer(class Player&, bool);

    // symbol: ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Horse(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getPostTravelType@Horse@@QEAA?AW4HorsePostTravelType@@PEBVActor@@@Z
    MCAPI ::HorsePostTravelType getPostTravelType(class Actor const*);

    // symbol: ?postAiStep@Horse@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?postNormalTick@Horse@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?postTravel@Horse@@QEAAX_NW4HorsePostTravelType@@@Z
    MCAPI void postTravel(bool, ::HorsePostTravelType);

    // symbol:
    // ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@M@Z
    MCAPI static class Vec3
    getInterpolatedRidingOffset(struct RenderRotationComponent const&, struct StandAnimationComponent const&, float);

    // symbol: ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBVVec2@@MMM@Z
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const&, float, float, float);

    // symbol:
    // ?getNewPassengerPos@Horse@@SA?AVVec3@@AEBURenderPositionComponent@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@MM@Z
    MCAPI static class Vec3 getNewPassengerPos(
        struct RenderPositionComponent const&,
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float,
        float
    );

    // symbol: ?setHorseFlag@Horse@@SAXVSynchedActorDataWriter@@W4HorseFlags@@_N@Z
    MCAPI static void setHorseFlag(class SynchedActorDataWriter, ::HorseFlags, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setHorseFlag@Horse@@AEAAXW4HorseFlags@@_N@Z
    MCAPI void _setHorseFlag(::HorseFlags, bool);

    // symbol: ?_setHorseType@Horse@@AEAA_NAEAW4ActorType@@@Z
    MCAPI bool _setHorseType(::ActorType&);

    // NOLINTEND
};
