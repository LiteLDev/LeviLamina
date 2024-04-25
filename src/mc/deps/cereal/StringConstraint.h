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

class StringConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
    StringConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@StringConstraint@cereal@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1, symbol: ??1StringConstraint@cereal@@UEAA@XZ
    virtual ~StringConstraint();

    // vIndex: 2, symbol: ?description@StringConstraint@cereal@@UEBA?AUConstraintDescription@internal@2@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol: ??0StringConstraint@cereal@@QEAA@$$QEAV01@@Z
    MCAPI StringConstraint(class cereal::StringConstraint&&);

    // symbol: ??0StringConstraint@cereal@@QEAA@AEBV01@@Z
    MCAPI StringConstraint(class cereal::StringConstraint const&);

    // symbol: ?maxSize@StringConstraint@cereal@@QEAAAEAV12@_K@Z
    MCAPI class cereal::StringConstraint& maxSize(uint64 size);

    // symbol:
    // ?regex@StringConstraint@cereal@@QEAAAEAV12@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cereal::StringConstraint& regex(std::string str);

    // symbol: ?rejectEmpty@StringConstraint@cereal@@QEAAAEAV12@XZ
    MCAPI class cereal::StringConstraint& rejectEmpty();

    // NOLINTEND
};

}; // namespace cereal
