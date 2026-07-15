#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MultiBlockPart.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class CircuitSystem;
struct BlockPart;
namespace BlockEvents { class BlockBreakEvent; }
// clang-format on

class BlockMultiBlockComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                     mDirection;
    ::ll::TypedStorage<1, 1, uchar>                     mPartCount;
    ::ll::TypedStorage<1, 1, ::brstd::bitset<4, uchar>> mSnowLoggableParts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canSurvive(::BlockSource const& region, ::Block const& block, ::BlockPos const& pos) const;

    MCAPI bool forEachPartInWorldSpace(
        ::Block const&                                  part,
        ::BlockPos const&                               partPos,
        ::brstd::function_ref<bool(::BlockPart const&)> callback
    ) const;

    MCAPI ::BlockPos getDistanceToMultiBlockEnd(::Block const& part) const;

    MCAPI ::BlockPos getDistanceToMultiBlockStart(::Block const& part) const;

#ifdef LL_PLAT_C
    MCAPI ::AABB getOutlineShape(::Block const& part, ::BlockPos const& partWorldPos) const;
#endif

    MCAPI bool isMultiBlockStart(::Block const& part) const;

    MCAPI bool isSnowLoggable(::Block const& part) const;

    MCAPI void onEvent(::BlockEvents::BlockBreakEvent& event) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_26_20::MultiBlockPart getMultiBlockPartId(::Block const& part);

    MCAPI static ::BlockPos
    getSnowLoggablePosition(::Block const& part, ::BlockSource const& region, ::BlockPos const& snowLayerPosition);

    MCAPI static void
    onPlace(::BlockSource& region, ::Block const& placementBlock, ::Block const& oldBlock, ::BlockPos const& pos);

    MCAPI static void setSnowLoggablePart(::Block& part);

    MCAPI static void
    setupRedstoneConsumerComponent(::Block const& block, ::BlockPos const& pos, ::CircuitSystem& circuitSystem);
    // NOLINTEND
};
