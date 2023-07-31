#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientation {

public:
    // prevent constructor by default
    BoneOrientation& operator=(BoneOrientation const&) = delete;
    BoneOrientation(BoneOrientation const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BoneOrientation\@\@QEAA\@XZ
     */
    MCAPI BoneOrientation();
    /**
     * @symbol ?getName\@BoneOrientation\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getName() const;
    /**
     * @symbol ?getPivot\@BoneOrientation\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3& getPivot();
    /**
     * @symbol ?getPivot\@BoneOrientation\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPivot() const;
    /**
     * @symbol ?setDefaultPose\@BoneOrientation\@\@QEAAXXZ
     */
    MCAPI void setDefaultPose();
    // NOLINTEND
};
