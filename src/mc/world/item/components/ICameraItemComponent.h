#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CameraCallbacks;
class ItemStack;
class Player;
class Vec3;
// clang-format on

class ICameraItemComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICameraItemComponent() = default;

    virtual float blackBarsDuration() const = 0;

    virtual float blackBarsScreenRatio() const = 0;

    virtual float shutterScreenRatio() const = 0;

    virtual float shutterDuration() const = 0;

    virtual float pictureDuration() const = 0;

    virtual float slideAwayDuration() const = 0;

    virtual bool
    canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const = 0;

    virtual void takePictureNow(::Player& player, ::Actor* camera, ::Actor* target) = 0;

    virtual void registerCallbacks(::CameraCallbacks* callbacks) = 0;

    virtual void use(::ItemStack& instance, ::Player& player) = 0;

    virtual void releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft) = 0;

    virtual bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
