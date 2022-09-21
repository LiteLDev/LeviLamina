/**
 * @file  MC/CameraItemComponentLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CameraItemComponentLegacy.
 *
 */
class CameraItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There
public:
enum class UseAction;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAITEMCOMPONENTLEGACY
public:
    class CameraItemComponentLegacy& operator=(class CameraItemComponentLegacy const &) = delete;
    CameraItemComponentLegacy(class CameraItemComponentLegacy const &) = delete;
    CameraItemComponentLegacy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CameraItemComponentLegacy();
    /**
     * @hash   -27781229
     * @vftbl  1
     * @symbol ?blackBarsDuration@CameraItemComponentLegacy@@UEBAMXZ
     */
    virtual float blackBarsDuration() const;
    /**
     * @hash   -1618852912
     * @vftbl  2
     * @symbol ?blackBarsScreenRatio@CameraItemComponentLegacy@@UEBAMXZ
     */
    virtual float blackBarsScreenRatio() const;
    /**
     * @hash   1634035554
     * @vftbl  3
     * @symbol ?shutterScreenRatio@CameraItemComponentLegacy@@UEBAMXZ
     */
    virtual float shutterScreenRatio() const;
    /**
     * @hash   1061495457
     * @vftbl  4
     * @symbol ?shutterDuration@CameraItemComponentLegacy@@UEBAMXZ
     */
    virtual float shutterDuration() const;
    /**
     * @hash   -1576461278
     * @vftbl  5
     * @symbol ?pictureDuration@CameraItemComponentLegacy@@UEBAMXZ
     */
    virtual float pictureDuration() const;
    /**
     * @hash   1826367715
     * @vftbl  6
     * @symbol ?slideAwayDuration@CameraItemComponentLegacy@@UEBAMXZ
     */
    virtual float slideAwayDuration() const;
    /**
     * @hash   1799369575
     * @vftbl  7
     * @symbol ?canPlace@CameraItemComponentLegacy@@UEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
     */
    virtual bool canPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -613317237
     * @vftbl  8
     * @symbol ?takePictureNow@CameraItemComponentLegacy@@UEAAXAEAVPlayer@@PEAVActor@@1@Z
     */
    virtual void takePictureNow(class Player &, class Actor *, class Actor *);
    /**
     * @hash   633891947
     * @vftbl  9
     * @symbol ?registerCallbacks@CameraItemComponentLegacy@@UEAAXPEAVCameraCallbacks@@@Z
     */
    virtual void registerCallbacks(class CameraCallbacks *);
    /**
     * @hash   -233210612
     * @vftbl  10
     * @symbol ?use@CameraItemComponentLegacy@@UEAAXAEAVItemStack@@AEAVPlayer@@@Z
     */
    virtual void use(class ItemStack &, class Player &);
    /**
     * @hash   73914189
     * @vftbl  11
     * @symbol ?releaseUsing@CameraItemComponentLegacy@@UEAAXAEAVItemStack@@AEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player &, int);
    /**
     * @hash   1664116398
     * @vftbl  12
     * @symbol ?useOn@CameraItemComponentLegacy@@UEAA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);
    /**
     * @hash   -559432677
     * @symbol ??0CameraItemComponentLegacy@@QEAA@AEAVItem@@@Z
     */
    MCAPI CameraItemComponentLegacy(class Item &);
    /**
     * @hash   59784272
     * @symbol ?init@CameraItemComponentLegacy@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);

//private:
    /**
     * @hash   72519058
     * @symbol ?_tryPlace@CameraItemComponentLegacy@@AEBA?AW4UseAction@1@AEBVItemStack@@AEAVActor@@AEBVBlockPos@@EAEAVVec3@@@Z
     */
    MCAPI enum CameraItemComponentLegacy::UseAction _tryPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char, class Vec3 &) const;

private:

};