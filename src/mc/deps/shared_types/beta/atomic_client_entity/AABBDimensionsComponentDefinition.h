#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::AtomicClientEntity {

struct AABBDimensionsComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mWidth;
    ::ll::TypedStorage<4, 4, float> mHeight;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& HEIGHT();

    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::std::string_view const& WIDTH();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
