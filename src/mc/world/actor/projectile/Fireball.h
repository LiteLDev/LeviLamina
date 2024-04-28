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
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Fireball : public ::PredictableProjectile {
public:
    // prevent constructor by default
    Fireball& operator=(Fireball const&);
    Fireball(Fireball const&);
    Fireball();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ??1Fireball@@UEAA@XZ
    virtual ~Fireball();

    // vIndex: 26, symbol: ?normalTick@Fireball@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 41, symbol: ?getBrightness@Fireball@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 45, symbol: ?isPickable@Fireball@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 76, symbol: ?getPickRadius@Fireball@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 92, symbol: ?getSourceUniqueID@Fireball@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 96, symbol: ?canChangeDimensionsUsingPortal@Fireball@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 149, symbol: ?readAdditionalSaveData@Fireball@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Fireball@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?getInertia@Fireball@@MEAAMXZ
    virtual float getInertia();

    // vIndex: 154, symbol: ?getTrailParticle@Fireball@@MEAA?AW4ParticleType@@XZ
    virtual ::ParticleType getTrailParticle();

    // vIndex: 155, symbol: ?shouldBurn@Fireball@@MEAA_NXZ
    virtual bool shouldBurn();

    // symbol: ??0Fireball@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Fireball(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setPower@Fireball@@AEAAXAEBVVec3@@@Z
    MCAPI void _setPower(class Vec3 const& power);

    // NOLINTEND
};
