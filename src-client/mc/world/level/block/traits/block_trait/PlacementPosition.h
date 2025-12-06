#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/IGetPlacementBlockCallback.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockType;
class CompoundTag;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class PlacementPosition : public ::BlockTrait::ITrait {
public:
    // PlacementPosition inner types declare
    // clang-format off
    struct EnabledStates;
    class UpdateBlockFaceGetPlacementBlockCallback;
    class UpdateVerticalHalfGetPlacementBlockCallback;
    // clang-format on

    // PlacementPosition inner types define
    class UpdateBlockFaceGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar face,
            ::Vec3 const&
        ) const /*override*/;

        // vIndex: 0
        virtual ~UpdateBlockFaceGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar face,
            ::Vec3 const&
        ) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class UpdateVerticalHalfGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar         face,
            ::Vec3 const& clickPos
        ) const /*override*/;

        // vIndex: 0
        virtual ~UpdateVerticalHalfGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar         face,
            ::Vec3 const& clickPos
        ) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct EnabledStates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mBlockFace;
        ::ll::TypedStorage<1, 1, bool> mVerticalHalf;
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
            ::BlockTrait::PlacementPosition::EnabledStates& instance,
            ::std::vector<::std::string> const&             states
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::BlockTrait::PlacementPosition::EnabledStates> mStates;
    // NOLINTEND

public:
    // prevent constructor by default
    PlacementPosition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    // vIndex: 3
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&) /*override*/;

    // vIndex: 1
    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    // vIndex: 0
    virtual ~PlacementPosition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlacementPosition(bool blockFace, bool verticalHalf);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockTrait::PlacementPosition BlockFace();

    MCAPI static ::BlockTrait::PlacementPosition VerticalHalf();

    MCAPI static ::std::string const& getName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool blockFace, bool verticalHalf);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&);

    MCAPI void $applyToBlockType(::BlockType& blockType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
