#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/ITrait.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockType;
class CompoundTag;
class IConstBlockSource;
class NeighborBlockDirections;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class Connection : public ::BlockTrait::ITrait {
public:
    // Connection inner types define
    enum class EnabledConnectionStates : int {
        Cardinal = 0,
        Count    = 1,
    };

    enum class Type : int {
        Standard = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf54a26;
    ::ll::UntypedStorage<4, 4> mUnka74308;
    ::ll::UntypedStorage<1, 1> mUnk1f35c0;
    // NOLINTEND

public:
    // prevent constructor by default
    Connection& operator=(Connection const&);
    Connection(Connection const&);
    Connection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connection() /*override*/ = default;

    virtual void applyToBlockType(::BlockType&) const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NeighborBlockDirections getConnectedDirections(
        ::IConstBlockSource const& region,
        ::Block const&             block,
        ::BlockPos const&          pos,
        ::NeighborBlockDirections  directionsToCheck
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockTrait
