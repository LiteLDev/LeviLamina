#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

class ExpressionNodeCerealConstraint : public ::cereal::Constraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9589f3;
    ::ll::UntypedStorage<1, 1>  mUnk34d183;
    ::ll::UntypedStorage<1, 1>  mUnk31fd9c;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNodeCerealConstraint& operator=(ExpressionNodeCerealConstraint const&);
    ExpressionNodeCerealConstraint(ExpressionNodeCerealConstraint const&);
    ExpressionNodeCerealConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~ExpressionNodeCerealConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ExpressionNodeCerealConstraint& disallowSideEffects(bool countRandomAsSideEffect);

    MCAPI ::ExpressionNodeCerealConstraint& onlyAllowQueries(::std::vector<::std::string> const& allowedQueries);
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

    MCFOLD ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
