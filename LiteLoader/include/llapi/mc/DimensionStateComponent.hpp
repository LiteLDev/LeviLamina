/**
 * @file  DimensionStateComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionStateComponent.
 *
 */
class DimensionStateComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONSTATECOMPONENT
public:
    class DimensionStateComponent& operator=(class DimensionStateComponent const &) = delete;
    DimensionStateComponent(class DimensionStateComponent const &) = delete;
    DimensionStateComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0DimensionStateComponent\@\@QEAA\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI DimensionStateComponent(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

};