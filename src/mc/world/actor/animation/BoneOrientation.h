#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientation {

public:
    // prevent constructor by default
    BoneOrientation& operator=(BoneOrientation const&) = delete;
    BoneOrientation(BoneOrientation const&)            = delete;

public:
    /**
     * @symbol ??0BoneOrientation\@\@QEAA\@XZ
     */
    MCAPI BoneOrientation(); // NOLINT
    /**
     * @symbol ?getName\@BoneOrientation\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getName() const; // NOLINT
    /**
     * @symbol ?getPivot\@BoneOrientation\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3& getPivot(); // NOLINT
    /**
     * @symbol ?getPivot\@BoneOrientation\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPivot() const; // NOLINT
    /**
     * @symbol ?setDefaultPose\@BoneOrientation\@\@QEAAXXZ
     */
    MCAPI void setDefaultPose(); // NOLINT
};
