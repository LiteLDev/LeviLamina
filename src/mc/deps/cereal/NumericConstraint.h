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
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1, symbol: __gen_??1NumericConstraint@cereal@@UEAA@XZ
    virtual ~NumericConstraint() = default;

    // vIndex: 2, symbol: ?description@NumericConstraint@cereal@@UEBA?AUConstraintDescription@internal@2@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol: ?max@NumericConstraint@cereal@@QEAAAEAV12@N@Z
    MCAPI class cereal::NumericConstraint& max(double max);

    // symbol: ?min@NumericConstraint@cereal@@QEAAAEAV12@N@Z
    MCAPI class cereal::NumericConstraint& min(double min);

    // symbol: ?multipleOf@NumericConstraint@cereal@@QEAAAEAV12@N@Z
    MCAPI class cereal::NumericConstraint& multipleOf(double);

    // symbol: ?range@NumericConstraint@cereal@@QEAAAEAV12@NN_N@Z
    MCAPI class cereal::NumericConstraint& range(double, double, bool);

    // NOLINTEND
};

}; // namespace cereal
