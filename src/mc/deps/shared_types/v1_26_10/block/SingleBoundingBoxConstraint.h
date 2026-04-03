#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_10::BlockDefinition { struct BoundingBoxData; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct SingleBoundingBoxConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_10::BlockDefinition::SingleBoundingBoxConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SingleBoundingBoxConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::internal::ConstraintDescription description(::cereal::ContextArea);

    MCAPI static void validateValue(
        ::SharedTypes::v1_26_10::BlockDefinition::BoundingBoxData const& boundingBox,
        ::cereal::SerializerContext&                                     context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
