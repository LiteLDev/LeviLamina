#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandPosition {

public:
    // prevent constructor by default
    CommandPosition& operator=(CommandPosition const&) = delete;
    CommandPosition(CommandPosition const&)            = delete;

public:
    /**
     * @symbol ??0CommandPosition\@\@QEAA\@XZ
     */
    MCAPI CommandPosition(); // NOLINT
    /**
     * @symbol ??0CommandPosition\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI CommandPosition(class Vec3 const&); // NOLINT
    /**
     * @symbol ?getBlockPos\@CommandPosition\@\@QEBA?AVBlockPos\@\@AEBVVec3\@\@0\@Z
     */
    MCAPI class BlockPos getBlockPos(class Vec3 const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?getBlockPos\@CommandPosition\@\@QEBA?AVBlockPos\@\@HAEBVCommandOrigin\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class BlockPos getBlockPos(int, class CommandOrigin const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?getPosition\@CommandPosition\@\@QEBA?AVVec3\@\@AEBV2\@0\@Z
     */
    MCAPI class Vec3 getPosition(class Vec3 const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?getPosition\@CommandPosition\@\@QEBA?AVVec3\@\@HAEBVCommandOrigin\@\@AEBV2\@\@Z
     */
    MCAPI class Vec3 getPosition(int, class CommandOrigin const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?serialize\@CommandPosition\@\@QEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const; // NOLINT
};
