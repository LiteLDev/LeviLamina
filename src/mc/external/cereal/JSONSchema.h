#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal::ext {

struct JSONSchema {
public:
    // prevent constructor by default
    JSONSchema& operator=(JSONSchema const&);
    JSONSchema(JSONSchema const&);
    JSONSchema();

public:
    // NOLINTBEGIN
    MCAPI ~JSONSchema();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static struct cereal::ext::JSONSchema
    fromDescriptions(std::vector<struct cereal::SchemaDescription> const& descriptions, uint64 pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::ext
