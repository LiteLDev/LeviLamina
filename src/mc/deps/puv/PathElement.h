#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

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

    MCAPI PathElement(entt::meta_type, uint, std::string, ::cereal::SerializerContext::ContextType);

    MCAPI ~PathElement();

    // NOLINTEND
};

}; // namespace Puv::internal
