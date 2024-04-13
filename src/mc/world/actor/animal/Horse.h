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

    // vIndex: 40, symbol: ?getShadowRadius@Horse@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 45, symbol: ?isImmobile@Horse@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 67, symbol: ?onFailedTame@Horse@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 68, symbol: ?setStanding@Horse@@UEAAX_N@Z
    virtual void setStanding(bool value);

    // vIndex: 78, symbol: ?feed@Horse@@UEAAXH@Z
    virtual void feed(int itemId);

    // vIndex: 97, symbol: ?canFreeze@Horse@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 103, symbol: ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 104, symbol: ?causeFallDamageToActor@Horse@@MEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 105, symbol: ?onSynchedDataUpdate@Horse@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 122, symbol: ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player& player);

    // vIndex: 137, symbol: ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& damagesource);

    // vIndex: 150, symbol: ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 152, symbol: ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float dmg, bool knock, bool ignite);

    // vIndex: 155, symbol: ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const& pos, class Block const& _onBlock);

    // vIndex: 175, symbol: ?getArmorValue@Horse@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 197, symbol: ?setType@Horse@@UEAAXH@Z
    virtual void setType(int i);

    // vIndex: 198, symbol: ?getType@Horse@@UEBAHXZ
    virtual int getType() const;

    // vIndex: 199, symbol: ?setHorseEating@Horse@@UEAAX_N@Z
    virtual void setHorseEating(bool state);

    // vIndex: 200, symbol: ?getStandAnim@Horse@@UEBAMM@Z
    virtual float getStandAnim(float a) const;

    // vIndex: 201, symbol: ?isAdult@Horse@@UEBA_NXZ
    virtual bool isAdult() const;

    // vIndex: 202, symbol: ?isHorseEating@Horse@@UEBA_NXZ
    virtual bool isHorseEating() const;

    // vIndex: 203, symbol: ?isMouthOpen@Horse@@UEBA_NXZ
    virtual bool isMouthOpen() const;

    // vIndex: 204, symbol: ?makeMad@Horse@@UEAAXXZ
    virtual void makeMad();

    // vIndex: 205, symbol: ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
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
    MCAPI bool _setHorseType(::ActorType& actorType);

    // NOLINTEND
};
