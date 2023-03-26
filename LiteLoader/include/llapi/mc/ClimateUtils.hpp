/**
 * @file  ClimateUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ClimateUtils.
 *
 */
namespace ClimateUtils {

#define AFTER_EXTRA
// Add Member There
struct TargetSpace {
    TargetSpace() = delete;
    TargetSpace(TargetSpace const&) = delete;
    TargetSpace(TargetSpace const&&) = delete;
};
struct Parameter {
    long long max, min;
    inline Parameter(float _max, float _min)
    {
        max = _max * 10000;
        min = _min * 10000;
    }
};

#undef AFTER_EXTRA
    /**
     * @symbol ?squareDistance\@ClimateUtils\@\@YA_JAEBV?$array\@UParameter\@ClimateUtils\@\@$06\@std\@\@AEBUTargetSpace\@1\@\@Z
     */
    MCAPI __int64 squareDistance(class std::array<struct ClimateUtils::Parameter, 7> const &, struct ClimateUtils::TargetSpace const &);

};
