#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WindChargeProjectile : public ::PredictableProjectile {
public:
    // prevent constructor by default
    WindChargeProjectile& operator=(WindChargeProjectile const&);
    WindChargeProjectile(WindChargeProjectile const&);
    WindChargeProjectile();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~WindChargeProjectile() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI WindChargeProjectile(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI struct ActorUniqueID getSourceUniqueID$() const;

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void remove$();

    // NOLINTEND
};
