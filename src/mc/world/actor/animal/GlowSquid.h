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
#include "mc/world/actor/animal/Squid.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlowSquid : public ::Squid {
public:
    // prevent constructor by default
    GlowSquid& operator=(GlowSquid const&);
    GlowSquid(GlowSquid const&);
    GlowSquid();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~GlowSquid() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 190
    virtual ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    MCAPI GlowSquid(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _startGoingDark();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent$() const;

    MCAPI float _getWalkTargetValue$(class BlockPos const& pos);

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void handleEntityEvent$(::ActorEvent id, int data);

    MCAPI void normalTick$();

    // NOLINTEND
};
