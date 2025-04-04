#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class NamespaceConstraint : public ::cereal::Constraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk922a3d;
    // NOLINTEND

public:
    // prevent constructor by default
    NamespaceConstraint& operator=(NamespaceConstraint const&);
    NamespaceConstraint(NamespaceConstraint const&);
    NamespaceConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~NamespaceConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getRegexString(::std::optional<::std::string> disallowedNamespace) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;

    MCAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
