#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ICameraItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CameraCallbacks;
class CompoundTag;
class ItemStack;
class Player;
class Vec3;
namespace Json { class Value; }
// clang-format on

class CameraItemComponentLegacy : public ::ICameraItemComponent {
public:
    // CameraItemComponentLegacy inner types define
    enum class UseAction : uchar {
        None  = 0,
        Place = 1,
        Use   = 2,
    };

    using PlaceCallback = ::std::function<void(::Vec3 const&, ::Player&)>;

    using UseCallback = ::std::function<void(::Player&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>              mBlackBarsDuration;
    ::ll::TypedStorage<4, 4, float>              mBlackBarsScreenRatio;
    ::ll::TypedStorage<4, 4, float>              mShutterScreenRatio;
    ::ll::TypedStorage<4, 4, float>              mShutterDuration;
    ::ll::TypedStorage<4, 4, float>              mPictureDuration;
    ::ll::TypedStorage<4, 4, float>              mSlideAwayDuration;
    ::ll::TypedStorage<1, 1, bool>               mPlacingTripod;
    ::ll::TypedStorage<8, 8, uint64>             mPlacingTripodClientTick;
    ::ll::TypedStorage<8, 8, uint64>             mPlacingTripodServerTick;
    ::ll::TypedStorage<8, 8, ::CameraCallbacks*> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraItemComponentLegacy() /*override*/ = default;

    // vIndex: 8
    virtual void takePictureNow(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;

    // vIndex: 10
    virtual void use(::ItemStack& instance, ::Player& player) /*override*/;

    // vIndex: 11
    virtual void releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft) /*override*/;

    // vIndex: 12
    virtual bool
    useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const&) /*override*/;

    // vIndex: 7
    virtual bool canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const
        /*override*/;

    // vIndex: 1
    virtual float blackBarsDuration() const /*override*/;

    // vIndex: 2
    virtual float blackBarsScreenRatio() const /*override*/;

    // vIndex: 3
    virtual float shutterScreenRatio() const /*override*/;

    // vIndex: 4
    virtual float shutterDuration() const /*override*/;

    // vIndex: 5
    virtual float pictureDuration() const /*override*/;

    // vIndex: 6
    virtual float slideAwayDuration() const /*override*/;

    // vIndex: 9
    virtual void registerCallbacks(::CameraCallbacks* callbacks) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CameraItemComponentLegacy::UseAction _tryPlace(
        ::ItemStack const& instance,
        ::Actor&           actor,
        ::BlockPos const&  blockPos,
        uchar              face,
        ::Vec3&            spawnPos
    ) const;

    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $takePictureNow(::Player& player, ::Actor* camera, ::Actor* target);

    MCAPI void $use(::ItemStack& instance, ::Player& player);

    MCAPI void $releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft);

    MCAPI bool $useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const&);

    MCAPI bool $canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const;

    MCFOLD float $blackBarsDuration() const;

    MCFOLD float $blackBarsScreenRatio() const;

    MCAPI float $shutterScreenRatio() const;

    MCFOLD float $shutterDuration() const;

    MCAPI float $pictureDuration() const;

    MCFOLD float $slideAwayDuration() const;

    MCAPI void $registerCallbacks(::CameraCallbacks* callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
