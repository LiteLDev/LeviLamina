#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorComponentDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_0::Brain::MemorySensors { struct InRangeOfEntitySensorEntryDefinition; }
// clang-format on

namespace SharedTypes::v1_26_0::Brain::MemorySensors {

struct InRangeOfEntityComponentDefinition
: public ::SharedTypes::v1_26_0::Brain::MemorySensors::BaseSensorComponentDefinition<
      ::SharedTypes::v1_26_0::Brain::MemorySensors::InRangeOfEntityComponentDefinition,
      ::SharedTypes::v1_26_0::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition> {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0::Brain::MemorySensors
