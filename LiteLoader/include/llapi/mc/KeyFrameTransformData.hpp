/**
 * @file  MC/KeyFrameTransformData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1506135489
     * @symbol ??0KeyFrameTransformData@@QEAA@AEBV0@@Z
     */
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const &);
    /**
     * @hash   1888158077
     * @symbol ?addChannelTransform@KeyFrameTransformData@@QEAAXAEBVExpressionNode@@H@Z
     */
    MCAPI void addChannelTransform(class ExpressionNode const &, int);
    /**
     * @hash   -2098996513
     * @symbol ??8KeyFrameTransformData@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class KeyFrameTransformData const &) const;

};