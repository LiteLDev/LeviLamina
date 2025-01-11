#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/IGetPlacementBlockCallback.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
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
            ::Vec3 const&,
            int
        ) const /*override*/;

        // vIndex: 0
        virtual ~UpdateBlockFaceGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar face,
            ::Vec3 const&,
            int
        ) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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
            ::Vec3 const& clickPos,
            int
        ) const /*override*/;

        // vIndex: 0
        virtual ~UpdateVerticalHalfGetPlacementBlockCallback() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::gsl::not_null<::Block const*> $getPlacementBlock(
            ::gsl::not_null<::Block const*> block,
            ::Actor const&,
            ::BlockPos const&,
            uchar         face,
            ::Vec3 const& clickPos,
            int
        ) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

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
    // vIndex: 2
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const /*override*/;

    // vIndex: 3
    virtual void initializeFromNetwork(::CompoundTag const& tag) /*override*/;

    // vIndex: 1
    virtual void applyToBlockLegacy(::BlockLegacy& blockLegacy) const /*override*/;

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

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

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
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCAPI void $applyToBlockLegacy(::BlockLegacy& blockLegacy) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
