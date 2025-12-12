#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class NeighborBlockDirections;
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
        ::ll::UntypedStorage<8, 8> mUnk34a507;
        ::ll::UntypedStorage<4, 4> mUnk938fbc;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockConnectionResult& operator=(BlockConnectionResult const&);
        BlockConnectionResult(BlockConnectionResult const&);
        BlockConnectionResult();
    };

    struct ConnectionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnkc22181;
        ::ll::UntypedStorage<8, 8> mUnk41e115;
        ::ll::UntypedStorage<4, 4> mUnkc367ac;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionData& operator=(ConnectionData const&);
        ConnectionData(ConnectionData const&);
        ConnectionData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockConnectionComponent::ConnectionData>> mConnectionData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Block const& handleConnectionUpdate(
        ::BlockSource&            region,
        ::Block const&            block,
        ::BlockPos const&         pos,
        ::NeighborBlockDirections neighborDirections
    ) const;
    // NOLINTEND
};
