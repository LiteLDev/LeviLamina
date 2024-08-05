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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

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

    MCAPI static std::string const SKIN_ID_TAG;

    MCAPI static std::vector<std::pair<std::string, std::string>> const Skins;

    // NOLINTEND
};
