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
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Blaze : public ::Monster {
public:
    // prevent constructor by default
    Blaze& operator=(Blaze const&);
    Blaze(Blaze const&);
    Blaze();

public:
    // NOLINTBEGIN
    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Blaze() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 41
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 51
    virtual bool isOnFire() const;

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 190
    virtual bool isDarkEnoughToSpawn() const;

    MCAPI Blaze(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void preTravel();

    // NOLINTEND
};
