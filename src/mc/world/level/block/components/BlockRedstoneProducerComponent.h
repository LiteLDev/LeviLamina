#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockTransformationComponent;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
// clang-format on

struct BlockRedstoneProducerComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar>                                 mPower;
    ::ll::TypedStorage<1, 1, uchar>                                 mStronglyPoweredFace;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>> mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                                  mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>                                  mSetSignalStrengthOnRedstoneComponentSetup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockTransformationComponent const* transformationComponent);

    MCAPI void onEvent(::BlockEvents::BlockPlaceEvent const& ev) const;

    MCAPI void onEvent(::BlockEvents::BlockStateChangeEvent const& ev) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool const isSignalSource(::Block const& block);

    MCAPI static void setRedstoneSignal(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCAPI static bool const shouldConnectToRedstone(::Block const& block, ::Direction::Type direction);
#endif
    // NOLINTEND
};
