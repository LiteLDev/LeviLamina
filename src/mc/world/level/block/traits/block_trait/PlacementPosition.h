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

    class UpdateBlockFaceGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar face,
            ::Vec3 const&
        ) const /*override*/;

        virtual ::BlockTrait::PlacementCallbackOrder getCallbackOrder() const /*override*/;
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

        MCFOLD ::BlockTrait::PlacementCallbackOrder $getCallbackOrder() const;


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
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar         face,
            ::Vec3 const& clickPos
        ) const /*override*/;

        virtual ::BlockTrait::PlacementCallbackOrder getCallbackOrder() const /*override*/;
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
    ::ll::TypedStorage<1, 2, ::BlockTrait::PlacementPosition::EnabledStates> mStates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&) /*override*/;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> _buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual ::std::string const& _getName() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&);

    MCAPI void $applyToBlockType(::BlockType& blockType) const;

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
