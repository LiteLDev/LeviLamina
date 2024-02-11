#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&);
    Constraint(Constraint const&);
    Constraint();

public:
    // NOLINTBEGIN
    // symbol: ?validate@Constraint@cereal@@QEBAXAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    MCAPI void validate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // NOLINTEND
};

}; // namespace cereal
