/**
 * @file  CommandPosition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0CommandPosition\@\@QEAA\@XZ
     */
    MCAPI CommandPosition();
    /**
     * @symbol  ??0CommandPosition\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI CommandPosition(class Vec3 const &);
    /**
     * @symbol  ?getBlockPos\@CommandPosition\@\@QEBA?AVBlockPos\@\@AEBVVec3\@\@0\@Z
     */
    MCAPI class BlockPos getBlockPos(class Vec3 const &, class Vec3 const &) const;
    /**
     * @symbol  ?getBlockPos\@CommandPosition\@\@QEBA?AVBlockPos\@\@HAEBVCommandOrigin\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class BlockPos getBlockPos(int, class CommandOrigin const &, class Vec3 const &) const;
    /**
     * @symbol  ?getPosition\@CommandPosition\@\@QEBA?AVVec3\@\@AEBV2\@0\@Z
     */
    MCAPI class Vec3 getPosition(class Vec3 const &, class Vec3 const &) const;
    /**
     * @symbol  ?getPosition\@CommandPosition\@\@QEBA?AVVec3\@\@HAEBVCommandOrigin\@\@AEBV2\@\@Z
     */
    MCAPI class Vec3 getPosition(int, class CommandOrigin const &, class Vec3 const &) const;
    /**
     * @symbol  ?load\@CommandPosition\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol  ?serialize\@CommandPosition\@\@QEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const;

};