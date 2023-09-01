#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&) = delete;
    Constraint(Constraint const&)            = delete;
    Constraint()                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@ExpressionNodeCerealConstraint@@EEBA_NAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual bool doValidate(entt::meta_any const&, class cereal::SerializerContext&) const = 0;

    // symbol: ??1Constraint@cereal@@UEAA@XZ
    MCVAPI ~Constraint();

    // symbol: ?validate@Constraint@cereal@@QEBA_NAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    MCAPI bool validate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // NOLINTEND
};

}; // namespace cereal
