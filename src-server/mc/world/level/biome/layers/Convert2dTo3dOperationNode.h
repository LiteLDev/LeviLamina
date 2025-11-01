#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/OperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/TransferData.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class Pos2d;
// clang-format on

class Convert2dTo3dOperationNode : public ::OperationNode<::Biome*, ::BlockPos> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OperationNode<::Biome*, ::Pos2d>>> mParent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init(int64 seed) /*override*/;

    // vIndex: 2
    virtual ::OperationNodeDetails::TransferData<::Biome*> _allocateAndFill(uint64, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    // vIndex: 0
    virtual ~Convert2dTo3dOperationNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
