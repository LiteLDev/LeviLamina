#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONEORIENTATION
public:
    BoneOrientation& operator=(BoneOrientation const&) = delete;
    BoneOrientation(BoneOrientation const&)            = delete;
#endif

public:
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
};
