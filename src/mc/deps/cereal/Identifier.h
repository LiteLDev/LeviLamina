#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace BlockGeometryConstraint {

class Identifier : public ::cereal::Constraint {
public:
    // prevent constructor by default
    Identifier& operator=(Identifier const&);
    Identifier(Identifier const&);
    Identifier();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@Identifier@BlockGeometryConstraint@@UEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: __gen_??1Identifier@BlockGeometryConstraint@@UEAA@XZ
    virtual ~Identifier() = default;

    // vIndex: 2, symbol:
    // ?description@Identifier@BlockGeometryConstraint@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND
};

}; // namespace BlockGeometryConstraint
