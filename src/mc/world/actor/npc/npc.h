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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Npc : public ::Mob {
public:
    // prevent constructor by default
    Npc& operator=(Npc const&);
    Npc(Npc const&);
    Npc();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Npc() = default;

    // vIndex: 35
    virtual bool canShowNameTag() const;

    // vIndex: 37
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 53
    virtual bool isTargetable() const;

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 108
    virtual void buildDebugInfo(std::string& out) const;

    // vIndex: 111
    virtual bool canBeAffected(uint) const;

    // vIndex: 131
    virtual void die(class ActorDamageSource const&);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float, bool, bool);

    // vIndex: 151
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 185
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 187
    virtual void newServerAiStep();

    MCAPI
    Npc(class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _hurt$(class ActorDamageSource const& source, float, bool, bool);

    MCAPI void buildDebugInfo$(std::string& out) const;

    MCAPI bool canBeAffected$(uint) const;

    MCAPI bool canBePulledIntoVehicle$() const;

    MCAPI bool canExistWhenDisallowMob$() const;

    MCAPI bool canShowNameTag$() const;

    MCAPI void die$(class ActorDamageSource const&);

    MCAPI class mce::Color getNameTagTextColor$() const;

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI bool isTargetable$() const;

    MCAPI void knockback$(class Actor*, int, float, float, float, float, float);

    MCAPI void newServerAiStep$();

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI static std::string const& SKIN_ID_TAG();

    MCAPI static std::vector<std::pair<std::string, std::string>> const& Skins();

    // NOLINTEND
};
