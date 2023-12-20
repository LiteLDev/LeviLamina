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

namespace Puv::v1_20_50 {

class EnchantSlotConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    EnchantSlotConstraint& operator=(EnchantSlotConstraint const&);
    EnchantSlotConstraint(EnchantSlotConstraint const&);
    EnchantSlotConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@EnchantSlotConstraint@v1_20_50@Puv@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: __gen_??1EnchantSlotConstraint@v1_20_50@Puv@@UEAA@XZ
    virtual ~EnchantSlotConstraint() = default;

    // vIndex: 2, symbol:
    // ?description@EnchantSlotConstraint@v1_20_50@Puv@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
