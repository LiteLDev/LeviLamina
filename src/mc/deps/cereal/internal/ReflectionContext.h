#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::meta_ctx>                                       mMetaCtx;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::entt::type_info>> mKnownProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionContext& operator=(ReflectionContext const&);
    ReflectionContext(ReflectionContext const&);
    ReflectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReflectionContext(::cereal::internal::ReflectionContext&&);

    MCAPI ~ReflectionContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::ReflectionContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
