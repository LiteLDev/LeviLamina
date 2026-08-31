#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockTransformationComponent;
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

    MCAPI void onEvent(::BlockEvents::BlockStateChangeEvent const& ev) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setRedstoneSignal(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND
};
