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

class VolumeTriggerConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    VolumeTriggerConstraint& operator=(VolumeTriggerConstraint const&);
    VolumeTriggerConstraint(VolumeTriggerConstraint const&);
    VolumeTriggerConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@VolumeTriggerConstraint@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: __gen_??1VolumeTriggerConstraint@@UEAA@XZ
    virtual ~VolumeTriggerConstraint() = default;

    // vIndex: 2, symbol: ?description@VolumeTriggerConstraint@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND
};
