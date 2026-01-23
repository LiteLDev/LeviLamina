#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class BlockRedstoneConsumerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, char>                             mMinPower;
    ::ll::TypedStorage<1, 1, bool>                             mPropagatePower;
    ::ll::TypedStorage<1, 1, bool>                             mConsumePowerAnyDirection;
    ::ll::TypedStorage<1, 1, bool>                             mAcceptSameDirection;
    ::ll::TypedStorage<1, 1, bool>                             mAcceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool>                             mIgnoreFirstUpdate;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlaceEventSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onPlace(::BlockEvents::BlockPlaceEvent const& ev) const;

    MCAPI void finalize(::BlockEvents::BlockEventManager& eventManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND
};
