#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::meta_ctx>                                             mMetaCtx;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::entt::type_info>>> mKnownProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionContext& operator=(ReflectionContext const&);
    ReflectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ReflectionContext(::cereal::internal::ReflectionContext const&);

    MCAPI ~ReflectionContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::cereal::internal::ReflectionContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
