#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T, typename Tag>
struct TypeWrapper : T {
    TypeWrapper() = default;
    TypeWrapper(const T &other) : T(other) {}
};
