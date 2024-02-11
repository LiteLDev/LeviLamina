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

class SemVersionConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    SemVersionConstraint& operator=(SemVersionConstraint const&);
    SemVersionConstraint(SemVersionConstraint const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@SemVersionConstraint@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1, symbol: ??1SemVersionConstraint@@UEAA@XZ
    virtual ~SemVersionConstraint();

    // vIndex: 2, symbol: ?description@SemVersionConstraint@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol: ??0SemVersionConstraint@@QEAA@XZ
    MCAPI SemVersionConstraint();

    // symbol: ?min@SemVersionConstraint@@QEAAAEAV1@AEBVSemVersion@@@Z
    MCAPI class SemVersionConstraint& min(class SemVersion const& m);

    // NOLINTEND
};
