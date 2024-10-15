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
#include "mc/world/actor/npc/VillagerBase.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class VillagerV2 : public ::VillagerBase {
public:
    // prevent constructor by default
    VillagerV2& operator=(VillagerV2 const&);
    VillagerV2(VillagerV2 const&);
    VillagerV2();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~VillagerV2() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 108
    virtual void buildDebugInfo(std::string& out) const;

    // vIndex: 124
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 187
    virtual void newServerAiStep();

    MCAPI VillagerV2(
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

    MCAPI void buildDebugInfo$(std::string& out) const;

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI bool getInteraction$(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    MCAPI void newServerAiStep$();

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void remove$();

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    // NOLINTEND
};
