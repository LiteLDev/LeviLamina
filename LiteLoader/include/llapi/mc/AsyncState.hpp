/**
 * @file  AsyncState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AsyncState.
 *
 */
class AsyncState {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCSTATE
public:
    class AsyncState& operator=(class AsyncState const &) = delete;
    AsyncState(class AsyncState const &) = delete;
    AsyncState() = delete;
#endif

public:
    /**
     * @symbol  ?Release\@AsyncState\@\@QEAAXXZ
     */
    MCAPI void Release();

};