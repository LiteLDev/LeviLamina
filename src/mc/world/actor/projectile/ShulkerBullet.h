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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ShulkerBullet : public ::PredictableProjectile {
public:
    // prevent constructor by default
    ShulkerBullet& operator=(ShulkerBullet const&);
    ShulkerBullet(ShulkerBullet const&);
    ShulkerBullet();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@ShulkerBullet@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1ShulkerBullet@@UEAA@XZ
    virtual ~ShulkerBullet() = default;

    // vIndex: 26, symbol: ?normalTick@ShulkerBullet@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 45, symbol: ?isPickable@ShulkerBullet@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: ?isOnFire@ShulkerBullet@@UEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 92, symbol: ?getSourceUniqueID@ShulkerBullet@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 149, symbol: ?readAdditionalSaveData@ShulkerBullet@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@ShulkerBullet@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ??0ShulkerBullet@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ShulkerBullet(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
