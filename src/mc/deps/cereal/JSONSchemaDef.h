#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaDef {
public:
    // NOLINTBEGIN
    MCAPI JSONSchemaDef();

    MCAPI JSONSchemaDef(struct cereal::ext::internal::JSONSchemaDef const&);

    MCAPI explicit JSONSchemaDef(struct cereal::internal::SchemaInfo const&);

    MCAPI JSONSchemaDef(struct cereal::internal::ExtendedSchemaInfo const&, std::map<std::string, int>&);

    MCAPI void
    normalizeRefs(std::map<std::string, int>&, std::map<std::string, struct cereal::ext::internal::JSONSchemaDef>&);

    MCAPI struct cereal::ext::internal::JSONSchemaDef& operator=(struct cereal::ext::internal::JSONSchemaDef&&);

    MCAPI struct cereal::ext::internal::JSONSchemaDef& operator=(struct cereal::ext::internal::JSONSchemaDef const&);

    MCAPI ~JSONSchemaDef();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace cereal::ext::internal
