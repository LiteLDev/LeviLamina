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
    // prevent constructor by default
    ICameraItemComponent& operator=(ICameraItemComponent const&);
    ICameraItemComponent(ICameraItemComponent const&);
    ICameraItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICameraItemComponent();

    // vIndex: 1
    virtual float blackBarsDuration() const = 0;

    // vIndex: 2
    virtual float blackBarsScreenRatio() const = 0;

    // vIndex: 3
    virtual float shutterScreenRatio() const = 0;

    // vIndex: 4
    virtual float shutterDuration() const = 0;

    // vIndex: 5
    virtual float pictureDuration() const = 0;

    // vIndex: 6
    virtual float slideAwayDuration() const = 0;

    // vIndex: 7
    virtual bool canPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const = 0;

    // vIndex: 8
    virtual void takePictureNow(::Player&, ::Actor*, ::Actor*) = 0;

    // vIndex: 9
    virtual void registerCallbacks(::CameraCallbacks*) = 0;

    // vIndex: 10
    virtual void use(::ItemStack&, ::Player&) = 0;

    // vIndex: 11
    virtual void releaseUsing(::ItemStack&, ::Player&, int) = 0;

    // vIndex: 12
    virtual bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
