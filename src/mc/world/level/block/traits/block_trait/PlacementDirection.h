#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/IGetPlacementBlockCallback.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"
#include "mc/world/level/block/traits/block_trait/PlacementCallbackOrder.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockType;
class CompoundTag;
class Vec3;
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class PlacementDirection : public ::BlockTrait::ITrait {
public:
    // PlacementDirection inner types declare
    // clang-format off
    struct EnabledStates;
    class UpdateCardinalGetPlacementBlockCallback;
    class UpdateFacingGetPlacementBlockCallback;
    // clang-format on

    // PlacementDirection inner types define
    struct EnabledStates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mCardinalDirection;
        ::ll::TypedStorage<1, 1, bool> mFacingDirection;
        ::ll::TypedStorage<1, 1, bool> mCornerAndCardinalDirection;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void fromStringVector(
            ::BlockTrait::PlacementDirection::EnabledStates& instance,
            ::std::vector<::std::string> const&              states
        );
        // NOLINTEND
    };

    class UpdateCardinalGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const> mRotationOffset;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&                  by,
            ::BlockPos const&,
            uchar,
            ::Vec3 const&
        ) const /*override*/;

        virtual ::BlockTrait::PlacementCallbackOrder getCallbackOrder() const /*override*/;

        virtual ~UpdateCardinalGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&                  by,
            ::BlockPos const&,
            uchar,
            ::Vec3 const&
        ) const;

        MCFOLD ::BlockTrait::PlacementCallbackOrder $getCallbackOrder() const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class UpdateFacingGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const> mRotationOffset;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&                  by,
            ::BlockPos const&               pos,
            uchar,
            ::Vec3 const&
        ) const /*override*/;

        virtual ::BlockTrait::PlacementCallbackOrder getCallbackOrder() const /*override*/;

        virtual ~UpdateFacingGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&                  by,
            ::BlockPos const&               pos,
            uchar,
            ::Vec3 const&
        ) const;

        MCFOLD ::BlockTrait::PlacementCallbackOrder $getCallbackOrder() const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 3, ::BlockTrait::PlacementDirection::EnabledStates>        mStates;
    ::ll::TypedStorage<4, 4, float>                                                  mRotationOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlocksToCornerWith;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual ~PlacementDirection() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockTrait::PlacementDirection CardinalDirection(float _yRotationOffset);

    MCAPI static ::BlockTrait::PlacementDirection FacingDirection(float _yRotationOffset);

    MCAPI static void _addCornerConnection(
        ::BlockType&                                                 blockType,
        ::std::vector<::SharedTypes::Legacy::BlockDescriptor> const& blocksToCornerWith
    );

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCAPI void $applyToBlockType(::BlockType& blockType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
