/**
 * @file  CameraItemComponentLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~CameraItemComponentLegacy();
    /**
     * @hash   237716163
     * @vftbl  1
     * @symbol  ?blackBarsDuration\@CameraItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float blackBarsDuration() const;
    /**
     * @hash   -1353355520
     * @vftbl  2
     * @symbol  ?blackBarsScreenRatio\@CameraItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float blackBarsScreenRatio() const;
    /**
     * @hash   -1790634766
     * @vftbl  3
     * @symbol  ?shutterScreenRatio\@CameraItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float shutterScreenRatio() const;
    /**
     * @hash   222134993
     * @vftbl  4
     * @symbol  ?shutterDuration\@CameraItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float shutterDuration() const;
    /**
     * @hash   1879145554
     * @vftbl  5
     * @symbol  ?pictureDuration\@CameraItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float pictureDuration() const;
    /**
     * @hash   900609507
     * @vftbl  6
     * @symbol  ?slideAwayDuration\@CameraItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float slideAwayDuration() const;
    /**
     * @hash   -1807506345
     * @vftbl  7
     * @symbol  ?canPlace\@CameraItemComponentLegacy\@\@UEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool canPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   74820267
     * @vftbl  8
     * @symbol  ?takePictureNow\@CameraItemComponentLegacy\@\@UEAAXAEAVPlayer\@\@PEAVActor\@\@1\@Z
     */
    virtual void takePictureNow(class Player &, class Actor *, class Actor *);
    /**
     * @hash   1321983323
     * @vftbl  9
     * @symbol  ?registerCallbacks\@CameraItemComponentLegacy\@\@UEAAXPEAVCameraCallbacks\@\@\@Z
     */
    virtual void registerCallbacks(class CameraCallbacks *);
    /**
     * @hash   454957644
     * @vftbl  10
     * @symbol  ?use\@CameraItemComponentLegacy\@\@UEAAXAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    virtual void use(class ItemStack &, class Player &);
    /**
     * @hash   762005565
     * @vftbl  11
     * @symbol  ?releaseUsing\@CameraItemComponentLegacy\@\@UEAAXAEAVItemStack\@\@AEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player &, int);
    /**
     * @hash   -1942667266
     * @vftbl  12
     * @symbol  ?useOn\@CameraItemComponentLegacy\@\@UEAA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);
    /**
     * @hash   128643323
     * @symbol  ??0CameraItemComponentLegacy\@\@QEAA\@AEAVItem\@\@\@Z
     */
    MCAPI CameraItemComponentLegacy(class Item &);
    /**
     * @hash   747875648
     * @symbol  ?init\@CameraItemComponentLegacy\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);

//private:
    /**
     * @hash   760595058
     * @symbol  ?_tryPlace\@CameraItemComponentLegacy\@\@AEBA?AW4UseAction\@1\@AEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEAVVec3\@\@\@Z
     */
    MCAPI enum class CameraItemComponentLegacy::UseAction _tryPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char, class Vec3 &) const;

private:

};