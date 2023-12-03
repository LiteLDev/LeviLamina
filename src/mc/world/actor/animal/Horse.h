#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/HorseFlags.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@Horse@@EEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1Horse@@UEAA@XZ
    virtual ~Horse() = default;

    // vIndex: 20, symbol: ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@Horse@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 49, symbol: ?isImmobile@Horse@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 72, symbol: ?onFailedTame@Horse@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 73, symbol: ?setStanding@Horse@@UEAAX_N@Z
    virtual void setStanding(bool);

    // vIndex: 83, symbol: ?feed@Horse@@UEAAXH@Z
    virtual void feed(int);

    // vIndex: 103, symbol: ?canFreeze@Horse@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 111, symbol: ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 113, symbol: ?causeFallDamageToActor@Horse@@MEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 114, symbol: ?onSynchedDataUpdate@Horse@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 133, symbol: ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player&);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 150, symbol: ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 169, symbol: ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 191, symbol: ?getArmorValue@Horse@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 216, symbol: ?setType@Horse@@UEAAXH@Z
    virtual void setType(int);

    // vIndex: 217, symbol: ?getType@Horse@@UEBAHXZ
    virtual int getType() const;

    // vIndex: 218, symbol: ?setHorseEating@Horse@@UEAAX_N@Z
    virtual void setHorseEating(bool);

    // vIndex: 219, symbol: ?getStandAnim@Horse@@UEBAMM@Z
    virtual float getStandAnim(float) const;

    // vIndex: 220, symbol: ?isAdult@Horse@@UEBA_NXZ
    virtual bool isAdult() const;

    // vIndex: 221, symbol: ?isHorseEating@Horse@@UEBA_NXZ
    virtual bool isHorseEating() const;

    // vIndex: 222, symbol: ?isMouthOpen@Horse@@UEBA_NXZ
    virtual bool isMouthOpen() const;

    // vIndex: 223, symbol: ?makeMad@Horse@@UEAAXXZ
    virtual void makeMad();

    // vIndex: 224, symbol: ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
    virtual bool tameToPlayer(class Player&, bool);

    // symbol: ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Horse(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?postAiStep@Horse@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?postNormalTick@Horse@@QEAAXXZ
    MCAPI void postNormalTick();

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
