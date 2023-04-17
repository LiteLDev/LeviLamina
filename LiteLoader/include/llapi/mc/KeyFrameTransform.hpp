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
     * @symbol ??0KeyFrameTransform\@\@QEAA\@M\@Z
     */
    MCAPI KeyFrameTransform(float);
    /**
     * @symbol ??4KeyFrameTransform\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class KeyFrameTransform & operator=(class KeyFrameTransform &&);
    /**
     * @symbol ?optimizeAndGetDataValues\@KeyFrameTransform\@\@QEAA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool optimizeAndGetDataValues(class Vec3 &, class Vec3 &);
    /**
     * @symbol ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void set(class ExpressionNode const &, int);
    /**
     * @symbol ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void set(class ExpressionNode const &);
    /**
     * @symbol ??1KeyFrameTransform\@\@QEAA\@XZ
     */
    MCAPI ~KeyFrameTransform();
    /**
     * @symbol ?computeCubicPolynomial\@KeyFrameTransform\@\@SAXPEAV1\@AEAV1\@10\@Z
     */
    MCAPI static void computeCubicPolynomial(class KeyFrameTransform *, class KeyFrameTransform &, class KeyFrameTransform &, class KeyFrameTransform *);

};
