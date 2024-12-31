#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/item/components/ICameraItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CameraCallbacks;
class Item;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2e2104;
    ::ll::UntypedStorage<4, 4> mUnk1ca678;
    ::ll::UntypedStorage<4, 4> mUnk709eb8;
    ::ll::UntypedStorage<4, 4> mUnkd1fbd0;
    ::ll::UntypedStorage<4, 4> mUnkf30ad0;
    ::ll::UntypedStorage<4, 4> mUnk8bce76;
    ::ll::UntypedStorage<1, 1> mUnk79abee;
    ::ll::UntypedStorage<8, 8> mUnk1d226a;
    ::ll::UntypedStorage<8, 8> mUnk853d69;
    ::ll::UntypedStorage<8, 8> mUnkd3a209;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraItemComponentLegacy& operator=(CameraItemComponentLegacy const&);
    CameraItemComponentLegacy(CameraItemComponentLegacy const&);
    CameraItemComponentLegacy();

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
    MCAPI explicit CameraItemComponentLegacy(::Item& owner);

    MCAPI ::CameraItemComponentLegacy::UseAction
    _tryPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3& spawnPos)
        const;

    MCAPI bool init(::Json::Value const& data, ::MolangVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Item& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $takePictureNow(::Player& player, ::Actor* camera, ::Actor* target);

    MCAPI void $use(::ItemStack& instance, ::Player& player);

    MCAPI void $releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft);

    MCAPI bool $useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const&);

    MCAPI bool $canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const;

    MCAPI float $blackBarsDuration() const;

    MCAPI float $blackBarsScreenRatio() const;

    MCAPI float $shutterScreenRatio() const;

    MCAPI float $shutterDuration() const;

    MCAPI float $pictureDuration() const;

    MCAPI float $slideAwayDuration() const;

    MCAPI void $registerCallbacks(::CameraCallbacks* callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
