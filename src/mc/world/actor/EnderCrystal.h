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
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EnderCrystal : public ::Actor {
public:
    // prevent constructor by default
    EnderCrystal& operator=(EnderCrystal const&);
    EnderCrystal(EnderCrystal const&);
    EnderCrystal();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1EnderCrystal@@UEAA@XZ
    virtual ~EnderCrystal() = default;

    // vIndex: 26, symbol: ?normalTick@EnderCrystal@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 38, symbol: ?getShadowRadius@EnderCrystal@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 45, symbol: ?isPickable@EnderCrystal@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 70, symbol: ?isInvulnerableTo@EnderCrystal@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 148, symbol: ?_hurt@EnderCrystal@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@EnderCrystal@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@EnderCrystal@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ??0EnderCrystal@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderCrystal(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?setBeamTarget@EnderCrystal@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setBeamTarget(class BlockPos const& target);

    // symbol:
    // ?setCrystalDamagedCallback@EnderCrystal@@QEAAXV?$function@$$A6AXAEAVEnderCrystal@@AEBVActorDamageSource@@@Z@std@@@Z
    MCAPI void setCrystalDamagedCallback(std::function<void(class EnderCrystal&, class ActorDamageSource const&)>);

    // symbol: ?HEAL_DISTANCE@EnderCrystal@@2MB
    MCAPI static float const HEAL_DISTANCE;

    // NOLINTEND
};
