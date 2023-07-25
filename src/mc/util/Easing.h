#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Easing {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EASING
public:
    Easing& operator=(Easing const&) = delete;
    Easing(Easing const&)            = delete;
    Easing()                         = delete;
#endif

public:
    /**
     * @symbol ?bindType\@Easing\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?getStringFromEasingType\@Easing\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4EasingType\@\@\@Z
     */
    MCAPI static std::string const& getStringFromEasingType(enum class EasingType);

    // private:

private:
    /**
     * @symbol
     * ?mEasingFuncs\@Easing\@\@0V?$vector\@V?$function\@$$A6AMMMM\@Z\@std\@\@V?$allocator\@V?$function\@$$A6AMMMM\@Z\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<class std::function<float(float, float, float)>> mEasingFuncs;
};
