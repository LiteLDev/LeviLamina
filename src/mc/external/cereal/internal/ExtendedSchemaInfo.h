#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal::internal {

struct ExtendedSchemaInfo {
public:
    // prevent constructor by default
    ExtendedSchemaInfo();

public:
    // NOLINTBEGIN
    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo&&);

    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo const&);

    MCAPI explicit ExtendedSchemaInfo(struct cereal::internal::SchemaInfo info);

    MCAPI struct cereal::internal::ExtendedSchemaInfo& operator=(struct cereal::internal::ExtendedSchemaInfo&&);

    MCAPI struct cereal::internal::ExtendedSchemaInfo& operator=(struct cereal::internal::ExtendedSchemaInfo const&);

    MCAPI ~ExtendedSchemaInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::internal
