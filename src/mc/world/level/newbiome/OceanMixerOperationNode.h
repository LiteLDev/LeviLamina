#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/MixerOperationNode.h"
#include "mc/world/level/newbiome/OperationGraphResult.h"
#include "mc/world/level/newbiome/OperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Pos2d;
// clang-format on

class OceanMixerOperationNode
: public ::MixerOperationNode<::Biome const*, ::Pos2d, ::Biome const*, ::BiomeTemperatureCategory> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkd5644a;
    ::ll::UntypedStorage<8, 8>   mUnk61f7a3;
    ::ll::UntypedStorage<8, 120> mUnk7c7f03;
    ::ll::UntypedStorage<8, 120> mUnk69e35f;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMixerOperationNode& operator=(OceanMixerOperationNode const&);
    OceanMixerOperationNode(OceanMixerOperationNode const&);
    OceanMixerOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw,
        ::OperationGraphResult<::BiomeTemperatureCategory>                   oceanData
    ) const /*override*/;

    // vIndex: 4
    virtual ::std::tuple<::Pos2d, ::Pos2d> _getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const /*override*/;

    // vIndex: 0
    virtual ~OceanMixerOperationNode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OceanMixerOperationNode(
        uint                                                                     seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>&             biomeLayer,
        ::std::shared_ptr<::OperationNode<::BiomeTemperatureCategory, ::Pos2d>>& oceanLayer,
        ::BiomeRegistry const&                                                   registry,
        ::Biome const&                                                           genericShallowOcean,
        ::Biome const&                                                           genericDeepOcean
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                                                                     seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>&             biomeLayer,
        ::std::shared_ptr<::OperationNode<::BiomeTemperatureCategory, ::Pos2d>>& oceanLayer,
        ::BiomeRegistry const&                                                   registry,
        ::Biome const&                                                           genericShallowOcean,
        ::Biome const&                                                           genericDeepOcean
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw,
        ::OperationGraphResult<::BiomeTemperatureCategory>                   oceanData
    ) const;

    MCFOLD ::std::tuple<::Pos2d, ::Pos2d> $_getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
