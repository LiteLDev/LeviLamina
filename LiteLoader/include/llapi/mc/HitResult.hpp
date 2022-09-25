/**
 * @file  HitResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Vec3.hpp"
#include "BlockPos.hpp"

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
    Vec3 startPos;       //0
    Vec3 rayDir;         //12
    HitResultType type;  //24
    FaceID face;         //28
    BlockPos endBpos;    //32
    Vec3 endPos;         //44
    uintptr_t actorRef; //56
    uintptr_t unk64;
    int unk72;
    int unk76;           //76
    bool hitLiquid;      //80
    FaceID liquidFace;   //81
    BlockPos liquidBpos; //84
    Vec3 liquidPos;      //96
    bool indirectHit;    //108
    //112

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
     * @hash   -113841076
     * @symbol ??0HitResult@@QEAA@XZ
     */
    MCAPI HitResult();
    /**
     * @hash   296186420
     * @symbol ??0HitResult@@QEAA@AEBVVec3@@0AEBVBlockPos@@E0@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class BlockPos const &, unsigned char, class Vec3 const &);
    /**
     * @hash   540147604
     * @symbol ??0HitResult@@QEAA@AEBVVec3@@0AEAVActor@@@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Actor &);
    /**
     * @hash   678433314
     * @symbol ??0HitResult@@QEAA@AEBVVec3@@0AEAVActor@@0@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Actor &, class Vec3 const &);
    /**
     * @hash   -1746919229
     * @symbol ??0HitResult@@QEAA@AEBVVec3@@00@Z
     */
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Vec3 const &);
    /**
     * @hash   1975666521
     * @symbol ??0HitResult@@QEAA@$$QEAV0@@Z
     */
    MCAPI HitResult(class HitResult &&);
    /**
     * @hash   156939425
     * @symbol ??0HitResult@@QEAA@AEBV0@@Z
     */
    MCAPI HitResult(class HitResult const &);
    /**
     * @hash   678577077
     * @symbol ?distanceTo@HitResult@@QEBAMAEBVActor@@@Z
     */
    MCAPI float distanceTo(class Actor const &) const;
    /**
     * @hash   1642765147
     * @symbol ?getEntity@HitResult@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getEntity() const;
    /**
     * @hash   -205650932
     * @symbol ??4HitResult@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class HitResult & operator=(class HitResult const &);
    /**
     * @hash   -1307277804
     * @symbol ??4HitResult@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class HitResult & operator=(class HitResult &&);
    /**
     * @hash   -446866420
     * @symbol ??1HitResult@@QEAA@XZ
     */
    MCAPI ~HitResult();

};