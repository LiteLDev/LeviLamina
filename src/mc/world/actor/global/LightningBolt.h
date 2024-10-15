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
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LightningBolt : public ::Actor {
public:
    // prevent constructor by default
    LightningBolt& operator=(LightningBolt const&);
    LightningBolt(LightningBolt const&);
    LightningBolt();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~LightningBolt() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual bool shouldAlwaysRender();

    MCAPI LightningBolt(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _shouldSetOnFire() const;

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

    MCAPI float getShadowRadius$() const;

    MCAPI void normalTick$();

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void reloadHardcodedClient$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI bool shouldAlwaysRender$();

    // NOLINTEND
};
