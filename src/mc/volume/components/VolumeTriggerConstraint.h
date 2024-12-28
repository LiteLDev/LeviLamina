#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const /*override*/;

    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~VolumeTriggerConstraint() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const;

    MCAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND
};
