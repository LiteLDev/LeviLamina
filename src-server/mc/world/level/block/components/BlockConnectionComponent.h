#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/NeighborBlockDirections.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace BlockTrait { class IConnectionUpdateCallback; }
// clang-format on

class BlockConnectionComponent {
public:
    // BlockConnectionComponent inner types declare
    // clang-format off
    struct BlockConnectionResult;
    struct ConnectionData;
    // clang-format on
    
    // BlockConnectionComponent inner types define
    struct BlockConnectionResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
        ::ll::TypedStorage<4, 4, int> mUpdateFlags;
        // NOLINTEND
    
    };
    
    struct ConnectionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::NeighborBlockDirections> mDirections;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTrait::IConnectionUpdateCallback>> mUpdateCallback;
        ::ll::TypedStorage<4, 4, int> mUpdateFlags;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockConnectionComponent::ConnectionData>> mConnectionData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const& handleConnectionUpdate(::BlockSource& region, ::Block const& block, ::BlockPos const& pos, ::NeighborBlockDirections neighborDirections) const;
    // NOLINTEND

};
