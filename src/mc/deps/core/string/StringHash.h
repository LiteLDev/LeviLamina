#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StringHash {
    uint mHash{2166136261u};

public:
    template <size_t N>
    consteval StringHash(char const (&str)[N]) : StringHash(std::string_view{str}) {}
    constexpr StringHash(std::string_view str) {
        for (auto c : str) {
            mHash ^= c;
            mHash *= 16777619u;
        }
    }
    [[nodiscard]] uint hash() const { return mHash; }
    operator uint() const { return mHash; }
};
