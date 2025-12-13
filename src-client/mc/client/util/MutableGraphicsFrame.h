#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MutableGraphicsFrame {
public:
    // MutableGraphicsFrame inner types declare
    // clang-format off
    struct Lifetime;
    // clang-format on

    // MutableGraphicsFrame inner types define
    enum class InsertError : int {};

    enum class SubmitError : int {};

    struct Lifetime {};
};
