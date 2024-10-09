#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace BlockGeometrySerializer {

class Constraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&);
    Constraint(Constraint const&);
    Constraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~Constraint() = default;

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    MCAPI static bool checkValidVanillaName(std::string const& geoName);

    // NOLINTEND
};

}; // namespace BlockGeometrySerializer
