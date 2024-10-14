#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ICameraItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CameraItemComponentLegacy : public ::ICameraItemComponent {
public:
    // CameraItemComponentLegacy inner types define
    enum class UseAction {};

public:
    // prevent constructor by default
    CameraItemComponentLegacy& operator=(CameraItemComponentLegacy const&);
    CameraItemComponentLegacy(CameraItemComponentLegacy const&);
    CameraItemComponentLegacy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraItemComponentLegacy() = default;

    // vIndex: 1
    virtual float blackBarsDuration() const;

    // vIndex: 2
    virtual float blackBarsScreenRatio() const;

    // vIndex: 3
    virtual float shutterScreenRatio() const;

    // vIndex: 4
    virtual float shutterDuration() const;

    // vIndex: 5
    virtual float pictureDuration() const;

    // vIndex: 6
    virtual float slideAwayDuration() const;

    // vIndex: 7
    virtual bool
    canPlace(class ItemStack const& instance, class Actor& actor, class BlockPos const& blockPos, uchar face) const;

    // vIndex: 8
    virtual void takePictureNow(class Player& player, class Actor* camera, class Actor* target);

    // vIndex: 9
    virtual void registerCallbacks(class CameraCallbacks* callbacks);

    // vIndex: 10
    virtual void use(class ItemStack& instance, class Player& player);

    // vIndex: 11
    virtual void releaseUsing(class ItemStack& instance, class Player& player, int durationLeft);

    // vIndex: 12
    virtual bool
    useOn(class ItemStack& instance, class Actor& actor, class BlockPos const& blockPos, uchar face, class Vec3 const&);

    MCAPI explicit CameraItemComponentLegacy(class Item& owner);

    MCAPI bool init(class Json::Value const& data, class SemVersion const& engineVersion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::CameraItemComponentLegacy::UseAction _tryPlace(
        class ItemStack const& instance,
        class Actor&           actor,
        class BlockPos const&  blockPos,
        uchar                  face,
        class Vec3&            spawnPos
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI float blackBarsDuration$() const;

    MCAPI float blackBarsScreenRatio$() const;

    MCAPI bool
    canPlace$(class ItemStack const& instance, class Actor& actor, class BlockPos const& blockPos, uchar face) const;

    MCAPI float pictureDuration$() const;

    MCAPI void registerCallbacks$(class CameraCallbacks* callbacks);

    MCAPI void releaseUsing$(class ItemStack& instance, class Player& player, int durationLeft);

    MCAPI float shutterDuration$() const;

    MCAPI float shutterScreenRatio$() const;

    MCAPI float slideAwayDuration$() const;

    MCAPI void takePictureNow$(class Player& player, class Actor* camera, class Actor* target);

    MCAPI void use$(class ItemStack& instance, class Player& player);

    MCAPI bool
    useOn$(class ItemStack& instance, class Actor& actor, class BlockPos const& blockPos, uchar face, class Vec3 const&);

    // NOLINTEND
};
