/**
 * @file  BoneOrientation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoneOrientation.
 *
 */
class BoneOrientation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONEORIENTATION
public:
    class BoneOrientation& operator=(class BoneOrientation const &) = delete;
    BoneOrientation(class BoneOrientation const &) = delete;
#endif

public:
    /**
     * @symbol ??0BoneOrientation\@\@QEAA\@XZ
     */
    MCAPI BoneOrientation();
    /**
     * @symbol ?getName\@BoneOrientation\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol ?getPivot\@BoneOrientation\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3 & getPivot();
    /**
     * @symbol ?getPivot\@BoneOrientation\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @symbol ?setDefaultPose\@BoneOrientation\@\@QEAAXXZ
     */
    MCAPI void setDefaultPose();

};
