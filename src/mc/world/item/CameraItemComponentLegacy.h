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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CameraItemComponentLegacy() = default;

    // vIndex: 1, symbol: ?blackBarsDuration@CameraItemComponentLegacy@@UEBAMXZ
    virtual float blackBarsDuration() const;

    // vIndex: 2, symbol: ?blackBarsScreenRatio@CameraItemComponentLegacy@@UEBAMXZ
    virtual float blackBarsScreenRatio() const;

    // vIndex: 3, symbol: ?shutterScreenRatio@CameraItemComponentLegacy@@UEBAMXZ
    virtual float shutterScreenRatio() const;

    // vIndex: 4, symbol: ?shutterDuration@CameraItemComponentLegacy@@UEBAMXZ
    virtual float shutterDuration() const;

    // vIndex: 5, symbol: ?pictureDuration@CameraItemComponentLegacy@@UEBAMXZ
    virtual float pictureDuration() const;

    // vIndex: 6, symbol: ?slideAwayDuration@CameraItemComponentLegacy@@UEBAMXZ
    virtual float slideAwayDuration() const;

    // vIndex: 7, symbol: ?canPlace@CameraItemComponentLegacy@@UEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool canPlace(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?takePictureNow@CameraItemComponentLegacy@@UEAAXAEAVPlayer@@PEAVActor@@1@Z
    virtual void takePictureNow(class Player&, class Actor*, class Actor*);

    // vIndex: 9, symbol: ?registerCallbacks@CameraItemComponentLegacy@@UEAAXPEAVCameraCallbacks@@@Z
    virtual void registerCallbacks(class CameraCallbacks*);

    // vIndex: 10, symbol: ?use@CameraItemComponentLegacy@@UEAAXAEAVItemStack@@AEAVPlayer@@@Z
    virtual void use(class ItemStack&, class Player&);

    // vIndex: 11, symbol: ?releaseUsing@CameraItemComponentLegacy@@UEAAXAEAVItemStack@@AEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack&, class Player&, int);

    // vIndex: 12, symbol: ?useOn@CameraItemComponentLegacy@@UEAA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&);

    // symbol: ??0CameraItemComponentLegacy@@QEAA@AEAVItem@@@Z
    MCAPI explicit CameraItemComponentLegacy(class Item&);

    // symbol: ?init@CameraItemComponentLegacy@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI bool init(class Json::Value&, class SemVersion const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryPlace@CameraItemComponentLegacy@@AEBA?AW4UseAction@1@AEBVItemStack@@AEAVActor@@AEBVBlockPos@@EAEAVVec3@@@Z
    MCAPI ::CameraItemComponentLegacy::UseAction
    _tryPlace(class ItemStack const&, class Actor&, class BlockPos const&, uchar, class Vec3&) const;

    // NOLINTEND
};
