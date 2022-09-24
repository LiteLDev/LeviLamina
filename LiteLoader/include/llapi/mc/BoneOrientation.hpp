/**
 * @file  BoneOrientation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    BoneOrientation() = delete;
#endif

public:
    /**
     * @hash   -366913020
     * @symbol ?applyShortestPathBlend@BoneOrientation@@QEAAXAEBV1@0MM@Z
     */
    MCAPI void applyShortestPathBlend(class BoneOrientation const &, class BoneOrientation const &, float, float);
    /**
     * @hash   -1377689962
     * @symbol ?getName@BoneOrientation@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   -1047200984
     * @symbol ?getPivot@BoneOrientation@@QEAAAEAVVec3@@XZ
     */
    MCAPI class Vec3 & getPivot();
    /**
     * @hash   -1835639322
     * @symbol ?getPivot@BoneOrientation@@QEBAAEBVVec3@@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @hash   421330403
     * @symbol ?setDefaultPose@BoneOrientation@@QEAAXXZ
     */
    MCAPI void setDefaultPose();

};