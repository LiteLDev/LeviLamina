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
        ::ll::UntypedStorage<1, 1> mUnk7bcf13;
        ::ll::UntypedStorage<1, 1> mUnk332cbb;
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
            ::BlockTrait::PlacementDirection::EnabledStates& instance,
            ::std::vector<::std::string> const&              states
        );
        // NOLINTEND
    };

    class UpdateCardinalGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk9a29dc;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateCardinalGetPlacementBlockCallback& operator=(UpdateCardinalGetPlacementBlockCallback const&);
        UpdateCardinalGetPlacementBlockCallback(UpdateCardinalGetPlacementBlockCallback const&);
        UpdateCardinalGetPlacementBlockCallback();

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

        virtual ~UpdateCardinalGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&                  by,
            ::BlockPos const&,
            uchar,
            ::Vec3 const&
        ) const;


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
        ::ll::UntypedStorage<4, 4> mUnkef4481;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateFacingGetPlacementBlockCallback& operator=(UpdateFacingGetPlacementBlockCallback const&);
        UpdateFacingGetPlacementBlockCallback(UpdateFacingGetPlacementBlockCallback const&);
        UpdateFacingGetPlacementBlockCallback();

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

        virtual ~UpdateFacingGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&                  by,
            ::BlockPos const&               pos,
            uchar,
            ::Vec3 const&
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
    ::ll::UntypedStorage<1, 2> mUnk81c19d;
    ::ll::UntypedStorage<4, 4> mUnk45914d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlacementDirection& operator=(PlacementDirection const&);
    PlacementDirection(PlacementDirection const&);
    PlacementDirection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&) /*override*/;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual ~PlacementDirection() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockTrait::PlacementDirection CardinalDirection(float _yRotationOffset);

    MCNAPI static ::BlockTrait::PlacementDirection FacingDirection(float _yRotationOffset);

    MCNAPI static ::std::string const& getName();
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
