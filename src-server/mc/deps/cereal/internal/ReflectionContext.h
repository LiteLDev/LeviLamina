#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::meta_ctx> mMetaCtx;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::entt::type_info>>> mKnownProperties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ReflectionContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
