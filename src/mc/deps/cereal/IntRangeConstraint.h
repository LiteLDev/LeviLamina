#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class NumericConstraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace Puv {

class IntRangeConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    IntRangeConstraint& operator=(IntRangeConstraint const&);
    IntRangeConstraint(IntRangeConstraint const&);
    IntRangeConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@IntRangeConstraint@Puv@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: ??1IntRangeConstraint@Puv@@UEAA@XZ
    virtual ~IntRangeConstraint();

    // vIndex: 2, symbol: ?description@IntRangeConstraint@Puv@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol: ?constraintMax@IntRangeConstraint@Puv@@QEAAAEAV12@VNumericConstraint@cereal@@@Z
    MCAPI class Puv::IntRangeConstraint& constraintMax(class cereal::NumericConstraint);

    // symbol: ?constraintMin@IntRangeConstraint@Puv@@QEAAAEAV12@VNumericConstraint@cereal@@@Z
    MCAPI class Puv::IntRangeConstraint& constraintMin(class cereal::NumericConstraint);

    // NOLINTEND
};

}; // namespace Puv
