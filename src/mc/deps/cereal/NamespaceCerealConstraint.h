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

class NamespaceCerealConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    NamespaceCerealConstraint& operator=(NamespaceCerealConstraint const&);
    NamespaceCerealConstraint(NamespaceCerealConstraint const&);
    NamespaceCerealConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@NamespaceCerealConstraint@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: ??1NamespaceCerealConstraint@@UEAA@XZ
    virtual ~NamespaceCerealConstraint();

    // vIndex: 2, symbol: ?description@NamespaceCerealConstraint@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol:
    // ?disallowNamespace@NamespaceCerealConstraint@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class NamespaceCerealConstraint& disallowNamespace(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?getRegexString@NamespaceCerealConstraint@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@@Z
    MCAPI std::string getRegexString(std::optional<std::string>) const;

    // NOLINTEND
};
