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

class Parrot : public ::Animal {
public:
    // prevent constructor by default
    Parrot& operator=(Parrot const&);
    Parrot(Parrot const&);
    Parrot();

public:
    // NOLINTBEGIN
    // vIndex: 11, symbol:
    // ?reloadHardcodedClient@Parrot@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@Parrot@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

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

    // vIndex: 106, symbol: ?setSitting@Parrot@@UEAAX_N@Z
    virtual void setSitting(bool);

    // vIndex: 117, symbol: ?playAmbientSound@Parrot@@UEAAXXZ
    virtual void playAmbientSound();

    // vIndex: 118, symbol: ?getAmbientSound@Parrot@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 119, symbol: ?isInvulnerableTo@Parrot@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 172, symbol: ?canBePulledIntoVehicle@Parrot@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 241, symbol: ?_playStepSound@Parrot@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 306, symbol: ?_getWalkTargetValue@Parrot@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const&);

    // symbol: ?_makeFlySound@Parrot@@MEBA_NXZ
    MCVAPI bool _makeFlySound() const;

    // symbol: ??0Parrot@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Parrot(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getFlap@Parrot@@QEBAMXZ
    MCAPI float getFlap() const;

    // symbol: ?getFlapSpeed@Parrot@@QEBAMXZ
    MCAPI float getFlapSpeed() const;

    // symbol: ?postAiStep@Parrot@@QEAAXXZ
    MCAPI void postAiStep();

    // NOLINTEND
};
