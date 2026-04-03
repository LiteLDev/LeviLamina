#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
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
    // Connection inner types declare
    // clang-format off
    struct EnabledConnectionStatesContainer;
    // clang-format on

    // Connection inner types define
    enum class EnabledConnectionStates : int {
        Cardinal = 0,
        Count    = 1,
    };

    enum class Type : int {
        Standard = 0,
    };

    struct EnabledConnectionStatesContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::BlockTrait::Connection::EnabledConnectionStates, 1>> mStates;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void enabledConnectionStatesFromStringVector(
            ::BlockTrait::Connection::EnabledConnectionStatesContainer& outStates,
            ::std::vector<::std::string> const&                         states
        );

        MCAPI static ::std::vector<::std::string>
        enabledConnectionStatesToStringVector(::BlockTrait::Connection::EnabledConnectionStatesContainer const& states);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                        mUpdateFlags;
    ::ll::TypedStorage<4, 4, ::BlockTrait::Connection::Type>                             mType;
    ::ll::TypedStorage<1, 1, ::BlockTrait::Connection::EnabledConnectionStatesContainer> mEnabledConnectionStates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connection() /*override*/;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& compoundTag, ::cereal::ReflectionCtx const&) /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> _buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual ::std::string const& _getName() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::BlockTrait::Connection createStandardConnectionTrait(
        ::Bedrock::EnumSet<::BlockTrait::Connection::EnabledConnectionStates, 1> enabledConnectionStates,
        int                                                                      updateFlags
    );

    MCAPI static ::NeighborBlockDirections getConnectedDirections(
        ::IConstBlockSource const& region,
        ::Block const&             block,
        ::BlockPos const&          pos,
        ::NeighborBlockDirections  directionsToCheck
    );

    MCAPI static ::std::string const& getName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyToBlockType(::BlockType& blockType) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& compoundTag, ::cereal::ReflectionCtx const&);

    MCAPI ::std::unique_ptr<::CompoundTag> $_buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCAPI ::std::string const& $_getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
