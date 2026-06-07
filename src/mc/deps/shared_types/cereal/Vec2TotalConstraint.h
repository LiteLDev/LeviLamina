#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace cereal { class SerializerContext; }
// clang-format on

namespace SharedTypes {

class Vec2TotalConstraint : public ::cereal::ConstraintHandle<::SharedTypes::Vec2TotalConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTotal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::Vec2TotalConstraint total(float constraint);

    MCAPI void validateValue(::Vec2 const& vec, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
