#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::BlockDefinition { struct BoundingBoxData; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct SingleBoundingBoxConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::BlockDefinition::SingleBoundingBoxConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mMinBounds;
    ::ll::TypedStorage<4, 12, ::Vec3> mMaxBounds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCAPI void validateValue(
        ::SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData const& boundingBox,
        ::cereal::SerializerContext&                                     context
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& INVALID_BOX_DESCRIPTION();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
