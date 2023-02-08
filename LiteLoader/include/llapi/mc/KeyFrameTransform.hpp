/**
 * @file  KeyFrameTransform.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KeyFrameTransform.
 *
 */
class KeyFrameTransform {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORM
public:
    class KeyFrameTransform& operator=(class KeyFrameTransform const &) = delete;
    KeyFrameTransform(class KeyFrameTransform const &) = delete;
    KeyFrameTransform() = delete;
#endif

public:
    /**
     * @hash   935206095
     * @symbol  ??0KeyFrameTransform\@\@QEAA\@M\@Z
     */
    MCAPI KeyFrameTransform(float);
    /**
     * @hash   167426192
     * @symbol  ?getLerpMode\@KeyFrameTransform\@\@QEAAAEAVKeyFrameLerpMode\@\@XZ
     */
    MCAPI class KeyFrameLerpMode & getLerpMode();
    /**
     * @hash   511841264
     * @symbol  ??4KeyFrameTransform\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class KeyFrameTransform & operator=(class KeyFrameTransform &&);
    /**
     * @hash   -1597180076
     * @symbol  ?optimizeAndGetDataValues\@KeyFrameTransform\@\@QEAA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool optimizeAndGetDataValues(class Vec3 &, class Vec3 &);
    /**
     * @hash   11580178
     * @symbol  ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void set(class ExpressionNode const &);
    /**
     * @hash   1052497363
     * @symbol  ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void set(class ExpressionNode const &, class Vec3 const &);
    /**
     * @hash   1205785185
     * @symbol  ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void set(class ExpressionNode const &, int);
    /**
     * @hash   -362733951
     * @symbol  ?setPost\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void setPost(class ExpressionNode const &, int);
    /**
     * @hash   2073436931
     * @symbol  ?setPre\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void setPre(class ExpressionNode const &, int);
    /**
     * @hash   1877816666
     * @symbol  ??1KeyFrameTransform\@\@QEAA\@XZ
     */
    MCAPI ~KeyFrameTransform();
    /**
     * @hash   1593264551
     * @symbol  ?computeCubicPolynomial\@KeyFrameTransform\@\@SAXPEAV1\@AEAV1\@10\@Z
     */
    MCAPI static void computeCubicPolynomial(class KeyFrameTransform *, class KeyFrameTransform &, class KeyFrameTransform &, class KeyFrameTransform *);

};