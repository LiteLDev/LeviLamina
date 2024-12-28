#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

template <typename T, size_t... Ns>
class MultidimensionalArray : public std::array<T, [] {
    size_t v = 1;
    ((v *= Ns), ...);
    return v;
}()> {
public:
    consteval size_t dim() const { return sizeof...(Ns); }
};

} // namespace Util
