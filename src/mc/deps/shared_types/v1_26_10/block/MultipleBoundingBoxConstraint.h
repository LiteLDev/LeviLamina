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

struct MultipleBoundingBoxConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_10::BlockDefinition::MultipleBoundingBoxConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultipleBoundingBoxConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void validateValue(
        ::std::vector<::SharedTypes::v1_26_10::BlockDefinition::BoundingBoxData> const& boundingBoxDataVector,
        ::cereal::SerializerContext&                                                    context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
