#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SolidityCheckType.h"

class RandomPos {

public:
    // prevent constructor by default
    RandomPos& operator=(RandomPos const&) = delete;
    RandomPos(RandomPos const&)            = delete;
    RandomPos()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getPos\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHHW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool getPos(class Vec3&, class Mob&, int32_t, int32_t, int32_t, enum class SolidityCheckType);
    /**
     * @symbol ?getPosAvoid\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHAEBV2\@W4SolidityCheckType\@\@H\@Z
     */
    MCAPI static bool
    getPosAvoid(class Vec3&, class Mob&, int32_t, int32_t, class Vec3 const&, enum class SolidityCheckType, int32_t);
    /**
     * @symbol
     * ?getPosInDirection\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHH_N2PEAV2\@AEBUIntRange\@\@HW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool getPosInDirection(
        class Vec3&,
        class Mob&,
        int32_t,
        int32_t,
        int32_t,
        bool,
        bool,
        class Vec3*,
        struct IntRange const&,
        int32_t,
        enum class SolidityCheckType
    );
    /**
     * @symbol ?getPosTowards\@RandomPos\@\@SA_NAEAVRandom\@\@AEAVVec3\@\@AEAVMob\@\@HHAEBV3\@\@Z
     */
    MCAPI static bool getPosTowards(class Random&, class Vec3&, class Mob&, int32_t, int32_t, class Vec3 const&);
    /**
     * @symbol ?getPosTowards\@RandomPos\@\@SA_NAEAVVec3\@\@AEAVMob\@\@HHAEBV2\@\@Z
     */
    MCAPI static bool getPosTowards(class Vec3&, class Mob&, int32_t, int32_t, class Vec3 const&);
    /**
     * @symbol ?getSpawnPos\@RandomPos\@\@SA_NAEAVBlockSource\@\@AEAVRandom\@\@AEAVVec3\@\@HHH\@Z
     */
    MCAPI static bool getSpawnPos(class BlockSource&, class Random&, class Vec3&, int32_t, int32_t, int32_t);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?generateRandomPos\@RandomPos\@\@CA_NAEAVVec3\@\@AEAVMob\@\@HHPEBV2\@_N3HW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool generateRandomPos(
        class Vec3&,
        class Mob&,
        int32_t,
        int32_t,
        class Vec3 const*,
        bool,
        bool,
        int32_t,
        enum class SolidityCheckType
    );
    /**
     * @symbol
     * ?generateRandomPos\@RandomPos\@\@CA_NAEAVRandomize\@\@AEAVVec3\@\@AEAVMob\@\@HHHPEBV3\@_N4AEBUIntRange\@\@HW4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool generateRandomPos(
        class Randomize&,
        class Vec3&,
        class Mob&,
        int32_t,
        int32_t,
        int32_t,
        class Vec3 const*,
        bool,
        bool,
        struct IntRange const&,
        int32_t,
        enum class SolidityCheckType
    );
    /**
     * @symbol ?snapToGround\@RandomPos\@\@CA_NAEAVBlockPos\@\@HHHV?$function\@$$A6A_NAEAVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static bool snapToGround(class BlockPos&, int32_t, int32_t, int32_t, std::function<bool(class BlockPos&)>);
    /**
     * @symbol ?snapToGround\@RandomPos\@\@CA_NAEAVBlockPos\@\@AEAVMob\@\@HAEBUIntRange\@\@W4SolidityCheckType\@\@\@Z
     */
    MCAPI static bool
    snapToGround(class BlockPos&, class Mob&, int32_t, struct IntRange const&, enum class SolidityCheckType);
    /**
     * @symbol ?snapToGround\@RandomPos\@\@CA_NAEAVBlockPos\@\@HHV?$function\@$$A6A_NAEAVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static bool snapToGround(class BlockPos&, int32_t, int32_t, std::function<bool(class BlockPos&)>);
    /**
     * @symbol ?spawnSnapToGround\@RandomPos\@\@CA_NAEAVBlockSource\@\@AEAVBlockPos\@\@MH\@Z
     */
    MCAPI static bool spawnSnapToGround(class BlockSource&, class BlockPos&, float, int32_t);
    // NOLINTEND
};
