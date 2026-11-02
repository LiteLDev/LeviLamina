#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MultiBlockPart.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/components/IBlockComponent.h"
#include "mc/world/level/block/traits/block_trait/MultiBlockPlacementDirectionBehavior.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockChangeContext;
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
    ::ll::TypedStorage<1, 1, uchar>                                              mDirection;
    ::ll::TypedStorage<1, 1, uchar>                                              mPartCount;
    ::ll::TypedStorage<1, 1, ::brstd::bitset<4, uchar>>                          mSnowLoggableParts;
    ::ll::TypedStorage<1, 1, ::BlockTrait::MultiBlockPlacementDirectionBehavior> mPlacementBehavior;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    _forEachPart(::Block const& part, ::brstd::function_ref<bool(::BlockPart const&, uchar)> callback) const;

    MCNAPI uchar _getDirectionOverride(::Block const& part) const;

    MCNAPI bool canSurvive(::BlockSource const& region, ::Block const& block, ::BlockPos const& pos) const;

    MCNAPI bool forEachPartInWorldSpace(
        ::Block const&                                  part,
        ::BlockPos const&                               partPos,
        ::brstd::function_ref<bool(::BlockPart const&)> callback
    ) const;

    MCNAPI ::BlockPos getDistanceToMultiBlockEnd(::Block const& part) const;

#ifdef LL_PLAT_C
    MCAPI ::BlockPos getDistanceToMultiBlockStart(::Block const& part) const;

    MCNAPI ::AABB getOutlineShape(::Block const& part, ::BlockPos const& partWorldPos) const;
#endif

    MCNAPI bool isMultiBlockStart(::Block const& part) const;

    MCNAPI bool isSnowLoggable(::Block const& part) const;

    MCNAPI void onEvent(::BlockEvents::BlockBreakEvent& event) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_26_20::MultiBlockPart getMultiBlockPartId(::Block const& part);

    MCNAPI static ::BlockPos
    getSnowLoggablePosition(::Block const& part, ::BlockSource const& region, ::BlockPos const& snowLayerPosition);

    MCNAPI static void onPlace(
        ::BlockSource&              region,
        ::Block const&              placementBlock,
        ::Block const&              oldBlock,
        ::BlockPos const&           pos,
        ::BlockChangeContext const& changeSourceContext
    );

    MCNAPI static void setSnowLoggablePart(::Block& part);

    MCNAPI static void
    setupRedstoneConsumerComponent(::Block const& block, ::BlockPos const& pos, ::CircuitSystem& circuitSystem);
    // NOLINTEND
};
