#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class NumericConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    NumericConstraint& operator=(NumericConstraint const&);
    NumericConstraint(NumericConstraint const&);
    NumericConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@NumericConstraint@cereal@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // symbol: ?max@NumericConstraint@cereal@@QEAAAEAV12@N@Z
    MCAPI class cereal::NumericConstraint& max(double);

    // symbol: ?min@NumericConstraint@cereal@@QEAAAEAV12@N@Z
    MCAPI class cereal::NumericConstraint& min(double);

    // symbol: ?range@NumericConstraint@cereal@@QEAAAEAV12@NN@Z
    MCAPI class cereal::NumericConstraint& range(double, double);

    // NOLINTEND
};

}; // namespace cereal
