/**
 * @file  CommandPosition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "BlockPos.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class CommandPosition.
 *
 */
class CommandPosition {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
    float offsetX;
    float offsetY;
    float offsetZ;
    bool relativeX;
    bool relativeY;
    bool relativeZ;
    bool local;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
public:
    class CommandPosition& operator=(class CommandPosition const &) = delete;
    CommandPosition(class CommandPosition const &) = delete;
#endif

public:
    /**
     * @hash   -765015088
     * @symbol ??0CommandPosition@@QEAA@XZ
     */
    MCAPI CommandPosition();
    /**
     * @hash   -588153209
     * @symbol ??0CommandPosition@@QEAA@AEBVVec3@@@Z
     */
    MCAPI CommandPosition(class Vec3 const &);
    /**
     * @hash   -1631881017
     * @symbol ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@AEBVVec3@@0@Z
     */
    MCAPI class BlockPos getBlockPos(class Vec3 const &, class Vec3 const &) const;
    /**
     * @symbol ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@HAEBVCommandOrigin@@AEBVVec3@@@Z
     */
    MCAPI class BlockPos getBlockPos(int, class CommandOrigin const &, class Vec3 const &) const;
    /**
     * @hash   -2024382730
     * @symbol ?getPosition@CommandPosition@@QEBA?AVVec3@@AEBV2@0@Z
     */
    MCAPI class Vec3 getPosition(class Vec3 const &, class Vec3 const &) const;
    /**
     * @symbol ?getPosition@CommandPosition@@QEBA?AVVec3@@HAEBVCommandOrigin@@AEBV2@@Z
     */
    MCAPI class Vec3 getPosition(int, class CommandOrigin const &, class Vec3 const &) const;
    /**
     * @hash   2078209640
     * @symbol ?load@CommandPosition@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   1316479498
     * @symbol ?serialize@CommandPosition@@QEBA?AVCompoundTag@@XZ
     */
    MCAPI class CompoundTag serialize() const;

};