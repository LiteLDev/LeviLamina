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
    MCNAPI ::CameraItemComponentLegacy::UseAction
    _tryPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3& spawnPos)
        const;

    MCNAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    MCNAPI bool init(::Json::Value const& data, ::MolangVersion);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $takePictureNow(::Player& player, ::Actor* camera, ::Actor* target);

    MCNAPI void $use(::ItemStack& instance, ::Player& player);

    MCNAPI void $releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft);

    MCNAPI bool $useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const&);

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
