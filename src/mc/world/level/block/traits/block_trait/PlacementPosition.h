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
    struct EnabledStates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk53c349;
        ::ll::UntypedStorage<1, 1> mUnkee58d8;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnabledStates& operator=(EnabledStates const&);
        EnabledStates(EnabledStates const&);
        EnabledStates();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void fromStringVector(
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

        virtual ~UpdateBlockFaceGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
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
        virtual ::gsl::not_null<::Block const*> getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar         face,
            ::Vec3 const& clickPos
        ) const /*override*/;

        virtual ~UpdateVerticalHalfGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk2d431d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlacementPosition& operator=(PlacementPosition const&);
    PlacementPosition(PlacementPosition const&);
    PlacementPosition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&) /*override*/;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual ~PlacementPosition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlacementPosition(bool blockFace, bool verticalHalf);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockTrait::PlacementPosition BlockFace();

    MCNAPI static ::BlockTrait::PlacementPosition VerticalHalf();

    MCNAPI static ::std::string const& getName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool blockFace, bool verticalHalf);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&);

    MCNAPI void $applyToBlockType(::BlockType& blockType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
