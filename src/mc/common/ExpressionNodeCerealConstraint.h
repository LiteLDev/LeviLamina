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

class ExpressionNodeCerealConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    ExpressionNodeCerealConstraint& operator=(ExpressionNodeCerealConstraint const&);
    ExpressionNodeCerealConstraint(ExpressionNodeCerealConstraint const&);
    ExpressionNodeCerealConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@ExpressionNodeCerealConstraint@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: ??1ExpressionNodeCerealConstraint@@UEAA@XZ
    virtual ~ExpressionNodeCerealConstraint();

    // vIndex: 2, symbol: ?description@ExpressionNodeCerealConstraint@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol: ?disallowSideEffects@ExpressionNodeCerealConstraint@@QEAAAEAV1@_N@Z
    MCAPI class ExpressionNodeCerealConstraint& disallowSideEffects(bool);

    // symbol:
    // ?onlyAllowQueries@ExpressionNodeCerealConstraint@@QEAAAEAV1@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI class ExpressionNodeCerealConstraint& onlyAllowQueries(std::vector<std::string> const&);

    // NOLINTEND
};
