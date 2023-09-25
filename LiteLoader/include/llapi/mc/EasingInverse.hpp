/**
 * @file  EasingInverse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class EasingInverse {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EASINGINVERSE
public:
    class EasingInverse& operator=(class EasingInverse const &) = delete;
    EasingInverse(class EasingInverse const &) = delete;
    EasingInverse() = delete;
#endif

public:

//private:

private:
    /**
     * @symbol ?mEasingFuncs\@EasingInverse\@\@0V?$vector\@V?$function\@$$A6AMMMM\@Z\@std\@\@V?$allocator\@V?$function\@$$A6AMMMM\@Z\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<class std::function<float (float, float, float)>> mEasingFuncs;

};
