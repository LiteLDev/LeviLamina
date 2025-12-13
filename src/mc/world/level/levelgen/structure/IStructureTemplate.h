#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class IStructureTemplate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructureTemplate() = default;

    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const = 0;

    virtual ::BlockPos rawSize() const = 0;

    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
