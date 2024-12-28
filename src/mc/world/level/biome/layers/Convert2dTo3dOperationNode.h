#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/OperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/TransferData.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
// clang-format on

class Convert2dTo3dOperationNode : public ::OperationNode<::Biome*, ::BlockPos> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5e93a9;
    // NOLINTEND

public:
    // prevent constructor by default
    Convert2dTo3dOperationNode& operator=(Convert2dTo3dOperationNode const&);
    Convert2dTo3dOperationNode(Convert2dTo3dOperationNode const&);
    Convert2dTo3dOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init(int64 seed) /*override*/;

    // vIndex: 2
    virtual ::OperationNodeDetails::TransferData<::Biome*>
    _allocateAndFill(uint64, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    // vIndex: 0
    virtual ~Convert2dTo3dOperationNode() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(int64 seed);

    MCAPI ::OperationNodeDetails::TransferData<::Biome*>
    $_allocateAndFill(uint64, ::BlockPos const&, ::BlockPos const&) const;
    // NOLINTEND
};
