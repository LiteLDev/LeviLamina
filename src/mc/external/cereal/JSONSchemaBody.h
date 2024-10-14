#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal::ext::internal { struct JSONSchemaDef; }
namespace cereal::internal { struct ConstraintDescription; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaBody {
public:
    // prevent constructor by default
    JSONSchemaBody();

public:
    // NOLINTBEGIN
    MCAPI JSONSchemaBody(struct cereal::ext::internal::JSONSchemaBody&&);

    MCAPI JSONSchemaBody(struct cereal::ext::internal::JSONSchemaBody const&);

    MCAPI void
    fillBody(struct cereal::internal::ExtendedSchemaInfo const& schemaInfo, std::map<std::string, int>& outRefs);

    MCAPI struct cereal::ext::internal::JSONSchemaBody& operator=(struct cereal::ext::internal::JSONSchemaBody&&);

    MCAPI struct cereal::ext::internal::JSONSchemaBody& operator=(struct cereal::ext::internal::JSONSchemaBody const&);

    MCAPI ~JSONSchemaBody();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void fill(struct cereal::internal::ConstraintDescription const& constraint);

    MCAPI static void overwriteIfAny(
        std::shared_ptr<struct cereal::ext::internal::JSONSchemaDef>&          that,
        std::shared_ptr<struct cereal::internal::ConstraintDescription> const& other
    );

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

}; // namespace cereal::ext::internal
