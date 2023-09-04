#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class StaticString {
public:
    const char* str_;

    explicit StaticString(const char* czstring) : str_(czstring) {}
    explicit operator const char*() const { return str_; }
    [[nodiscard]] const char* c_str() const { return str_; }
};

}; // namespace Json
