#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

class SensorResponseConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
