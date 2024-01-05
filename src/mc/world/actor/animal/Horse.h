#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/HorseFlags.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse& operator=(Horse const&);
    Horse(Horse const&);
    Horse();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Horse@@EEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Horse@@UEAA@XZ
    virtual ~Horse() = default;

    // vIndex: 20, symbol: ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float a, int) const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@Horse@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 49, symbol: ?isImmobile@Horse@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: ?onFailedTame@Horse@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 72, symbol: ?setStanding@Horse@@UEAAX_N@Z
    virtual void setStanding(bool value);

    // vIndex: 82, symbol: ?feed@Horse@@UEAAXH@Z
    virtual void feed(int itemId);

    // vIndex: 101, symbol: ?canFreeze@Horse@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 109, symbol: ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 111, symbol: ?causeFallDamageToActor@Horse@@MEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 112, symbol: ?onSynchedDataUpdate@Horse@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 131, symbol: ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player& player);

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 147, symbol: ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& damagesource);

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float dmg, bool knock, bool ignite);

    // vIndex: 166, symbol: ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const& pos, class Block const& _onBlock);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 187, symbol: ?getArmorValue@Horse@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 210, symbol: ?setType@Horse@@UEAAXH@Z
    virtual void setType(int i);

    // vIndex: 211, symbol: ?getType@Horse@@UEBAHXZ
    virtual int getType() const;

    // vIndex: 212, symbol: ?setHorseEating@Horse@@UEAAX_N@Z
    virtual void setHorseEating(bool state);

    // vIndex: 213, symbol: ?getStandAnim@Horse@@UEBAMM@Z
    virtual float getStandAnim(float a) const;

    // vIndex: 214, symbol: ?isAdult@Horse@@UEBA_NXZ
    virtual bool isAdult() const;

    // vIndex: 215, symbol: ?isHorseEating@Horse@@UEBA_NXZ
    virtual bool isHorseEating() const;

    // vIndex: 216, symbol: ?isMouthOpen@Horse@@UEBA_NXZ
    virtual bool isMouthOpen() const;

    // vIndex: 217, symbol: ?makeMad@Horse@@UEAAXXZ
    virtual void makeMad();

    // vIndex: 218, symbol: ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
    virtual bool tameToPlayer(class Player& player, bool tamingParticles);

    // symbol: ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Horse(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?postAiStep@Horse@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?postNormalTick@Horse@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol:
    // ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@M@Z
    MCAPI static class Vec3 getInterpolatedRidingOffset(
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float alpha
    );

    // symbol: ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBVVec2@@MMM@Z
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const&, float, float, float alpha);

    // symbol:
    // ?getNewPassengerPos@Horse@@SA?AVVec3@@AEBURenderPositionComponent@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@MM@Z
    MCAPI static class Vec3 getNewPassengerPos(
        struct RenderPositionComponent const&,
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float alpha,
        float
    );

    // symbol:
    // ?setHorseFlag@Horse@@SAXAEAUActorDataHorseFlagComponent@@AEAUActorDataDirtyFlagsComponent@@W4HorseFlags@@_N@Z
    MCAPI static void
    setHorseFlag(struct ActorDataHorseFlagComponent&, struct ActorDataDirtyFlagsComponent&, ::HorseFlags, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setHorseFlag@Horse@@AEAAXW4HorseFlags@@_N@Z
    MCAPI void _setHorseFlag(::HorseFlags flag, bool value);

    // symbol: ?_setHorseType@Horse@@AEAA_NAEAW4ActorType@@@Z
    MCAPI bool _setHorseType(::ActorType&);

    // NOLINTEND
};
