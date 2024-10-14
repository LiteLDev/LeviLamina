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

class NamespaceCerealConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    NamespaceCerealConstraint& operator=(NamespaceCerealConstraint const&);
    NamespaceCerealConstraint(NamespaceCerealConstraint const&);
    NamespaceCerealConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // vIndex: 1
    virtual ~NamespaceCerealConstraint();

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    MCAPI class NamespaceCerealConstraint& disallowNamespace(std::string const& disallowedNamespace);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string getRegexString(std::optional<std::string> disallowedNamespace) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI struct cereal::internal::ConstraintDescription description$() const;

    MCAPI void doValidate$(entt::meta_any const& any, class cereal::SerializerContext& context) const;

    // NOLINTEND
};
