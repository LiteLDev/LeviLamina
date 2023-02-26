/**
 * @file  KeyFrameTransformData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KeyFrameTransformData.
 *
 */
class KeyFrameTransformData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORMDATA
public:
    class KeyFrameTransformData& operator=(class KeyFrameTransformData const &) = delete;
    KeyFrameTransformData() = delete;
#endif

public:
    /**
     * @symbol  ??0KeyFrameTransformData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const &);
    /**
     * @symbol  ?addChannelTransform\@KeyFrameTransformData\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void addChannelTransform(class ExpressionNode const &, int);
    /**
     * @symbol  ??8KeyFrameTransformData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class KeyFrameTransformData const &) const;

};