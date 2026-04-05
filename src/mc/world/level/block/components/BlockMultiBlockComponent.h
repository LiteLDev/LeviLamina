#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/MultiBlockPart.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/components/EventRespondingComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class CircuitSystem;
struct BlockPart;
namespace BlockEvents { class BlockBreakEvent; }
// clang-format on

class BlockMultiBlockComponent : public ::EventRespondingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mDirection;
    ::ll::TypedStorage<1, 1, uchar> mPartCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool forEachPart(::Block const& part, ::brstd::function_ref<bool(::BlockPart const&)> callback) const;

    MCAPI bool forEachPartInWorldSpace(
        ::Block const&                                  part,
        ::BlockPos const&                               partPos,
        ::brstd::function_ref<bool(::BlockPart const&)> callback
    ) const;

#ifdef LL_PLAT_C
    MCAPI ::AABB getOutlineShape(::Block const& part, ::BlockPos const& partWorldPos) const;
#endif

    MCAPI void onEvent(::BlockEvents::BlockBreakEvent& event) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_26_10::MultiBlockPart getMultiBlockPartId(::Block const& part);

    MCAPI static void
    setupRedstoneConsumerComponent(::Block const& block, ::BlockPos const& pos, ::CircuitSystem& circuitSystem);
    // NOLINTEND
};
