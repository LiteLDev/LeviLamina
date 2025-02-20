#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BlockSource;
class Interaction;
class ItemStack;
class Player;
struct ItemSlotInfo;
// clang-format on

class InteractComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk206731;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractComponent& operator=(InteractComponent const&);
    InteractComponent(InteractComponent const&);
    InteractComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool
    _runInteraction(::Actor& owner, ::Interaction const& desc, ::Player& player, ::ActorInteraction& interaction);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _spawnParticle(
        ::BlockSource&       region,
        ::Actor&             owner,
        ::Player&            player,
        ::ItemStack const&   usedItemCopy,
        ::Interaction const& description
    );

    MCAPI static void _tryDropItem(::BlockSource& region, ::Actor& owner, ::ItemSlotInfo const& itemSlotInfo);

    MCAPI static void _tryEquipItem(
        ::Actor&              owner,
        ::Player&             player,
        ::ItemStack&          usingItem,
        ::ItemStack const&    usedItemCopy,
        ::ItemSlotInfo const& itemSlotInfo,
        bool&                 useItemEventSent,
        bool&                 postponedReplace
    );

    MCAPI static void _trySendArmorSlot(::Actor& owner, ::SharedTypes::Legacy::ArmorSlot armorSlot);
    // NOLINTEND
};
