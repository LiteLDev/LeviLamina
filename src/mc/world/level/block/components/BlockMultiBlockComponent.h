#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MultiBlockPart.h"
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
    ::ll::TypedStorage<1, 1, uchar> mDirection;
    ::ll::TypedStorage<1, 1, uchar> mPartCount;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMultiBlockComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockMultiBlockComponent(uchar partCount, uchar direction);

    MCAPI bool canSurvive(::BlockSource const& region, ::Block const& block, ::BlockPos const& pos) const;

    MCAPI bool forEachPart(::Block const& part, ::brstd::function_ref<bool(::BlockPart const&)> callback) const;

    MCAPI bool forEachPartInWorldSpace(
        ::Block const&                                  part,
        ::BlockPos const&                               partPos,
        ::brstd::function_ref<bool(::BlockPart const&)> callback
    ) const;

    MCFOLD uchar getDirection() const;

#ifdef LL_PLAT_C
    MCAPI ::BlockPos getDistanceToMultiBlockEnd(::Block const& part) const;

    MCAPI ::BlockPos getDistanceToMultiBlockStart(::Block const& part) const;

    MCAPI ::AABB getOutlineShape(::Block const& part, ::BlockPos const& partWorldPos) const;
#endif

    MCFOLD uchar getPartCount() const;

    MCAPI bool isMultiBlockStart(::Block const& part) const;

    MCAPI bool mayPlace(::BlockSource& region, ::Block const& block, ::BlockPos const& pos) const;

    MCAPI void onEvent(::BlockEvents::BlockBreakEvent& event) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_26_20::MultiBlockPart getMultiBlockPartId(::Block const& part);

    MCAPI static void onPlace(::BlockSource& region, ::Block const& placementBlock, ::BlockPos const& pos);

    MCAPI static void
    setupRedstoneConsumerComponent(::Block const& block, ::BlockPos const& pos, ::CircuitSystem& circuitSystem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uchar partCount, uchar direction);
    // NOLINTEND
};
