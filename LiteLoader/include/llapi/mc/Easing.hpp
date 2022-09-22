/**
 * @file  Easing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class Easing {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EASING
public:
    class Easing& operator=(class Easing const &) = delete;
    Easing(class Easing const &) = delete;
    Easing() = delete;
#endif

public:
    /**
     * @symbol ?bindType@Easing@@SAXXZ
     */
    MCAPI static void bindType();

//private:

private:
    /**
     * @symbol ?mEasingFuncs@Easing@@0V?$vector@V?$function@$$A6AMMMM@Z@std@@V?$allocator@V?$function@$$A6AMMMM@Z@std@@@2@@std@@A
     */
    MCAPI static std::vector<class std::function<float (float, float, float)>> mEasingFuncs;

};