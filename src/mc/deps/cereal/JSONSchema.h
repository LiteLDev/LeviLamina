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

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static struct cereal::ext::JSONSchema
    fromDescriptions(std::vector<struct cereal::SchemaDescription> const&, uint64);

    // NOLINTEND
};

}; // namespace cereal::ext
