#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/OwnerPtr.h"
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
#include "mc/world/actor/monster/Slime.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LavaSlime : public ::Slime {
public:
    // prevent constructor by default
    LavaSlime& operator=(LavaSlime const&);
    LavaSlime(LavaSlime const&);
    LavaSlime();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~LavaSlime() = default;

    // vIndex: 41
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 51
    virtual bool isOnFire() const;

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 168
    virtual int getArmorValue() const;

    // vIndex: 190
    virtual bool isDarkEnoughToSpawn() const;

    // vIndex: 191
    virtual bool doPlayLandSound();

    // vIndex: 193
    virtual void decreaseSquish();

    // vIndex: 194
    virtual class OwnerPtr<class EntityContext> createChild(int i);

    MCAPI LavaSlime(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool checkSpawnRules$(bool fromSpawner);

    MCAPI class OwnerPtr<class EntityContext> createChild$(int i);

    MCAPI void decreaseSquish$();

    MCAPI bool doPlayLandSound$();

    MCAPI int getArmorValue$() const;

    MCAPI float getBrightness$(float, class IConstBlockSource const&) const;

    MCAPI bool isDarkEnoughToSpawn$() const;

    MCAPI bool isOnFire$() const;

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    // NOLINTEND
};
