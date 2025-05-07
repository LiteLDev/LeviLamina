#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/RootOperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

// auto generated forward declare list
// clang-format off
class Pos2d;
// clang-format on

class NetherOperationNode : public ::RootOperationNode<::OperationNodeValues::Terrain, ::Pos2d> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void
    _fillArea(::OperationNodeDetails::WorkingData<::OperationNodeValues::Terrain, char>&, ::Pos2d const&, ::Pos2d const&)
        const /*override*/;

    // vIndex: 0
    virtual ~NetherOperationNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
