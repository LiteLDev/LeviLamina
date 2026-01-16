#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/MixerOperationNode.h"
#include "mc/world/level/newbiome/OperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Pos2d;
// clang-format on

class RegionHillsOperationNode : public ::MixerOperationNode<::Biome const*, ::Pos2d, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OperationNode<int, ::Pos2d>>> mRiverOperationNode;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&>                            mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionHillsOperationNode& operator=(RegionHillsOperationNode const&);
    RegionHillsOperationNode(RegionHillsOperationNode const&);
    RegionHillsOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw
    ) const /*override*/;

    virtual ::std::tuple<::Pos2d, ::Pos2d> _getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const /*override*/;

    virtual ~RegionHillsOperationNode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RegionHillsOperationNode(
        uint                                                         seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>& parent,
        ::std::shared_ptr<::OperationNode<int, ::Pos2d>>&            riverOperationNode,
        ::BiomeRegistry const&                                       biomeRegistry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                                                         seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>& parent,
        ::std::shared_ptr<::OperationNode<int, ::Pos2d>>&            riverOperationNode,
        ::BiomeRegistry const&                                       biomeRegistry
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw
    ) const;

    MCFOLD ::std::tuple<::Pos2d, ::Pos2d> $_getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
