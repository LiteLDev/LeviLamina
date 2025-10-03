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

class BiomeReplacementConstraint : public ::cereal::Constraint {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 2
    virtual ~BiomeReplacementConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;

    MCNAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
