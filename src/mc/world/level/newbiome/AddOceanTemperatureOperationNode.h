#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/RootOperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

// auto generated forward declare list
// clang-format off
class Pos2d;
// clang-format on

class AddOceanTemperatureOperationNode : public ::RootOperationNode<::BiomeTemperatureCategory, ::Pos2d> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::BiomeTemperatureCategory, char>& operationNodeData,
        ::Pos2d const&                                                         origin,
        ::Pos2d const&                                                         size
    ) const /*override*/;

    virtual ~AddOceanTemperatureOperationNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::BiomeTemperatureCategory, char>& operationNodeData,
        ::Pos2d const&                                                         origin,
        ::Pos2d const&                                                         size
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
