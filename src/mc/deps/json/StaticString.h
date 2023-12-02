#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class StaticString {
public:
    char const* str_;

    explicit StaticString(char const* czstring) : str_(czstring) {}
    explicit                  operator char const*() const { return str_; }
    [[nodiscard]] char const* c_str() const { return str_; }
};

}; // namespace Json
