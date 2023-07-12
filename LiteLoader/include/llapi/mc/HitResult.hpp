/**
 * @file  HitResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Vec3.hpp"
#include "BlockPos.hpp"
#include "WeakEntityRef.hpp"
class StackResultStorageEntity;

enum class HitResultType:int {
    TILE=0,
    ENTITY,
    ENTITY_OUT_OF_RANGE,
    NO_HIT,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class HitResult.
 *
 */
class HitResult {

#define AFTER_EXTRA
// Add Member There

    //char filler[112];
    Vec3 mStartPos;      // 0
    Vec3 mRayDir;       // 12
    HitResultType mType; // 24
    FaceID mFace;      // 28
    BlockPos mEndBlockPos;     // 32
    Vec3 mEndPos;         //44
    WeakEntityRef mEntity;
    bool mIsHitLiquid;   // 80
    FaceID mLiquidFace; // 81
    BlockPos mLiquidBlockPos;    // 84
    Vec3 mLiquidPos;     // 96
    bool mIndirectHit;           // 108

public:
    inline bool __fastcall isHit() {
        return (unsigned int)(*((int*)this + 6) - 2) > 1;
    }

    LIAPI FaceID getFacing();
    LIAPI Vec3 getPos();
    LIAPI bool isHitLiquid();
    LIAPI bool isEntity();
    LIAPI bool isTile();
    LIAPI BlockPos getBlockPos();
    LIAPI BlockPos getLiquidPos();
    LIAPI FaceID getLiquidFacing();
    //LIAPI Vec3 getLiquidHitPos();
    LIAPI HitResultType getHitResultType();

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@0AEAVActor\@\@\@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Actor &);
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@0AEAVActor\@\@0\@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Actor &, class Vec3 const &);
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HitResult(class HitResult const &);
    /**
     * @symbol ??0HitResult\@\@QEAA\@XZ
     */
    MCAPI HitResult();
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@00\@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@0AEBVBlockPos\@\@E0\@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class BlockPos const &, unsigned char, class Vec3 const &);
    /**
     * @symbol ??0HitResult\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HitResult(class HitResult &&);
    /**
     * @symbol ?distanceTo\@HitResult\@\@QEBAMAEBVActor\@\@\@Z
     */
    MCAPI float distanceTo(class Actor const &) const;
    /**
     * @symbol ?getEntity\@HitResult\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getEntity() const;
    /**
     * @symbol ??4HitResult\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class HitResult & operator=(class HitResult const &);
    /**
     * @symbol ??4HitResult\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HitResult & operator=(class HitResult &&);
    /**
     * @symbol ??1HitResult\@\@QEAA\@XZ
     */
    MCAPI ~HitResult();

};
