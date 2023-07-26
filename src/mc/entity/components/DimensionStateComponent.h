#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionStateComponent {
public:
    // DimensionStateComponent inner types declare
    // clang-format off

    // clang-format on

    // DimensionStateComponent inner types define
    enum class DimensionState {};

public:
    // prevent constructor by default
    DimensionStateComponent& operator=(DimensionStateComponent const&) = delete;
    DimensionStateComponent(DimensionStateComponent const&)            = delete;
    DimensionStateComponent()                                          = delete;

public:
    /**
     * @symbol
     * ??0DimensionStateComponent\@\@QEAA\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI DimensionStateComponent(class std::chrono::time_point<
                                  struct std::chrono::steady_clock,
                                  class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
};
