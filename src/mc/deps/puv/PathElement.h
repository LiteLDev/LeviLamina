#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SerializerContext.h"

namespace Puv::internal {

struct PathElement {
public:
    // prevent constructor by default
    PathElement& operator=(PathElement const&);
    PathElement(PathElement const&);
    PathElement();

public:
    // NOLINTBEGIN
    MCAPI PathElement(struct Puv::internal::PathElement&&);

    MCAPI
    PathElement(entt::meta_type metaType, uint id, std::string name, ::cereal::SerializerContext::ContextType type);

    MCAPI ~PathElement();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Puv::internal::PathElement&&);

    MCAPI void*
    ctor$(entt::meta_type metaType, uint id, std::string name, ::cereal::SerializerContext::ContextType type);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::internal
