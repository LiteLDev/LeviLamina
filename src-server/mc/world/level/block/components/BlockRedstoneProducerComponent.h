#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockTransformationComponent;
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
// clang-format on

struct BlockRedstoneProducerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, char> mPower;
    ::ll::TypedStorage<1, 1, uchar> mStronglyPoweredFace;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>> mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool> mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool> mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool> mAllowPowerDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlaceEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnStateChangeEvenSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onPlace(::BlockEvents::BlockPlaceEvent const& ev) const;

    MCAPI void _onStateChange(::BlockEvents::BlockStateChangeEvent const& ev) const;

    MCAPI void finalize(::BlockEvents::BlockEventManager& eventManager, ::BlockTransformationComponent const* transformationComponent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setRedstoneSignal(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

};
