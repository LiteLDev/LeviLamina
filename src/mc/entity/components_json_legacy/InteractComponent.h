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
    ::ll::TypedStorage<2, 2, short> mCooldownCounter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    _runInteraction(::Actor& owner, ::Interaction const& desc, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _spawnParticle(
        ::BlockSource&       region,
        ::Actor&             owner,
        ::Player&            player,
        ::ItemStack const&   usedItemCopy,
        ::Interaction const& description
    );

    MCNAPI static void _tryDropItem(::BlockSource& region, ::Actor& owner, ::ItemSlotInfo const& itemSlotInfo);

    MCNAPI static void _tryEquipItem(
        ::Actor&              owner,
        ::Player&             player,
        ::ItemStack&          usingItem,
        ::ItemStack const&    usedItemCopy,
        ::ItemSlotInfo const& itemSlotInfo,
        bool&                 useItemEventSent,
        bool&                 postponedReplace
    );

    MCNAPI static void _trySendArmorSlot(::Actor& owner, ::SharedTypes::Legacy::ArmorSlot armorSlot);
    // NOLINTEND
};
