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
    ::ll::UntypedStorage<8, 16> mUnkc01c9b;
    ::ll::UntypedStorage<8, 8>  mUnk860d5e;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionHillsOperationNode& operator=(RegionHillsOperationNode const&);
    RegionHillsOperationNode(RegionHillsOperationNode const&);
    RegionHillsOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw
    ) const /*override*/;

    // vIndex: 4
    virtual ::std::tuple<::Pos2d, ::Pos2d> _getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const /*override*/;

    // vIndex: 0
    virtual ~RegionHillsOperationNode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RegionHillsOperationNode(
        uint                                                         seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>& parent,
        ::std::shared_ptr<::OperationNode<int, ::Pos2d>>&            riverOperationNode,
        ::BiomeRegistry const&                                       biomeRegistry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint                                                         seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>& parent,
        ::std::shared_ptr<::OperationNode<int, ::Pos2d>>&            riverOperationNode,
        ::BiomeRegistry const&                                       biomeRegistry
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw
    ) const;

    MCNAPI ::std::tuple<::Pos2d, ::Pos2d> $_getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
