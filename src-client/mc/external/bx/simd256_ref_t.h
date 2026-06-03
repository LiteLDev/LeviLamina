#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/simd128_ref_t.h"

namespace bx {

struct simd256_ref_t {
public:
    // simd256_ref_t inner types define
    using type = ::bx::simd128_ref_t;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::bx::simd128_ref_t> simd128_0;
    ::ll::TypedStorage<4, 16, ::bx::simd128_ref_t> simd128_1;
    // NOLINTEND
};

} // namespace bx
