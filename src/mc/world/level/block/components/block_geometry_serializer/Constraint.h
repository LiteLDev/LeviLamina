#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace BlockGeometrySerializer { struct Proxy; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace BlockGeometrySerializer {

struct Constraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&);
    Constraint(Constraint const&);
    Constraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~Constraint() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

} // namespace BlockGeometrySerializer
