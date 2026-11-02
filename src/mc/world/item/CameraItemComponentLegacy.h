#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/components/ICameraItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class ItemStack;
class Player;
class Vec3;
namespace Json { class Value; }
class CameraCallbacks;
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
    virtual ~CameraItemComponentLegacy() /*override*/ = default;

    virtual void takePictureNow(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;

    virtual void use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) /*override*/;

    virtual void releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft) /*override*/;

    virtual bool useOn(
        ::ItemStack&      instance,
        ::Actor&          actor,
        ::BlockPos const& blockPos,
        uchar             face,
        ::Vec3 const&,
        ::HandSlot handSlot
    ) /*override*/;

    virtual bool canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const
        /*override*/;

    virtual float blackBarsDuration() const /*override*/;

    virtual float blackBarsScreenRatio() const /*override*/;

    virtual float shutterScreenRatio() const /*override*/;

    virtual float shutterDuration() const /*override*/;

    virtual float pictureDuration() const /*override*/;

    virtual float slideAwayDuration() const /*override*/;

    virtual void registerCallbacks(::CameraCallbacks* callbacks) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    MCNAPI bool init(::Json::Value const& data, ::MolangVersion);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CameraItemComponentLegacy::UseAction
    _tryPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3& spawnPos);

    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $takePictureNow(::Player& player, ::Actor* camera, ::Actor* target);

    MCNAPI void $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot);

    MCNAPI void $releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft);

    MCNAPI bool $useOn(
        ::ItemStack&      instance,
        ::Actor&          actor,
        ::BlockPos const& blockPos,
        uchar             face,
        ::Vec3 const&,
        ::HandSlot handSlot
    );

    MCNAPI bool $canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const;

    MCNAPI float $blackBarsDuration() const;

    MCNAPI float $blackBarsScreenRatio() const;

    MCNAPI float $shutterScreenRatio() const;

    MCNAPI float $shutterDuration() const;

    MCNAPI float $pictureDuration() const;

    MCNAPI float $slideAwayDuration() const;

    MCNAPI void $registerCallbacks(::CameraCallbacks* callbacks);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
