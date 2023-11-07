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

class NullConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    NullConstraint& operator=(NullConstraint const&);
    NullConstraint(NullConstraint const&);
    NullConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@NullConstraint@cereal@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: ??1NullConstraint@cereal@@UEAA@XZ
    virtual ~NullConstraint();

    // NOLINTEND
};

}; // namespace cereal
