/**
 * @file  RandomPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomPos.
 *
 */
class RandomPos {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMPOS
public:
    class RandomPos& operator=(class RandomPos const &) = delete;
    RandomPos(class RandomPos const &) = delete;
    RandomPos() = delete;
#endif

public:
    /**
     * @symbol  ?getPos\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHHW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool getPos(class Vec3 &, class Mob &, int, int, int, enum class SolidityCheckType);
    /**
     * @symbol  ?getPosAvoid\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHAEBV2\@W4SolidityCheckType\@\@H\@Z
     */
    MCAPI static bool getPosAvoid(class Vec3 &, class Mob &, int, int, class Vec3 const &, enum class SolidityCheckType, int);
    /**
     * @symbol  ?getPosInDirection\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHH_N2PEAV2\@AEBUIntRange\@\@HW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool getPosInDirection(class Vec3 &, class Mob &, int, int, int, bool, bool, class Vec3 *, struct IntRange const &, int, enum class SolidityCheckType);
    /**
     * @symbol  ?getPosTowards\@RandomPos\@\@SA_NAEAVRandom\@\@AEAVVec3\@\@AEAVMob\@\@HHAEBV3\@\@Z
     */
    MCAPI static bool getPosTowards(class Random &, class Vec3 &, class Mob &, int, int, class Vec3 const &);
    /**
     * @symbol  ?getPosTowards\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHAEBV2\@\@Z
     */
    MCAPI static bool getPosTowards(class Vec3 &, class Mob &, int, int, class Vec3 const &);
    /**
     * @symbol  ?getSpawnPos\@RandomPos\@\@SA_NAEAVBlockSource\@\@AEAVRandom\@\@AEAVVec3\@\@HHH\@Z
     */
    MCAPI static bool getSpawnPos(class BlockSource &, class Random &, class Vec3 &, int, int, int);

//private:
    /**
     * @symbol  ?generateRandomPos\@RandomPos\@\@CA_NAEAVRandomize\@\@AEAVVec3\@\@AEAVMob\@\@HHHPEBV3\@_N4AEBUIntRange\@\@HW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool generateRandomPos(class Randomize &, class Vec3 &, class Mob &, int, int, int, class Vec3 const *, bool, bool, struct IntRange const &, int, enum class SolidityCheckType);
    /**
     * @symbol  ?generateRandomPos\@RandomPos\@\@CA_NAEAVVec3\@\@AEAVMob\@\@HHPEBV2\@_N3HW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool generateRandomPos(class Vec3 &, class Mob &, int, int, class Vec3 const *, bool, bool, int, enum class SolidityCheckType);
    /**
     * @symbol  ?snapToGround\@RandomPos\@\@CA_NAEAVBlockPos\@\@AEAVMob\@\@HAEBUIntRange\@\@W4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool snapToGround(class BlockPos &, class Mob &, int, struct IntRange const &, enum class SolidityCheckType);
    /**
     * @symbol  ?snapToGround\@RandomPos\@\@CA_NAEAVBlockPos\@\@HHHV?$function\@$$A6A_NAEAVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static bool snapToGround(class BlockPos &, int, int, int, class std::function<bool (class BlockPos &)>);
    /**
     * @symbol  ?snapToGround\@RandomPos\@\@CA_NAEAVBlockPos\@\@HHV?$function\@$$A6A_NAEAVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static bool snapToGround(class BlockPos &, int, int, class std::function<bool (class BlockPos &)>);
    /**
     * @symbol  ?spawnSnapToGround\@RandomPos\@\@CA_NAEAVBlockSource\@\@AEAVBlockPos\@\@MH\@Z
     */
    MCAPI static bool spawnSnapToGround(class BlockSource &, class BlockPos &, float, int);

private:

};