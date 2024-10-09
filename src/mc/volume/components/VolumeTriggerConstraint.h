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

class VolumeTriggerConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    VolumeTriggerConstraint& operator=(VolumeTriggerConstraint const&);
    VolumeTriggerConstraint(VolumeTriggerConstraint const&);
    VolumeTriggerConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~VolumeTriggerConstraint() = default;

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND
};
