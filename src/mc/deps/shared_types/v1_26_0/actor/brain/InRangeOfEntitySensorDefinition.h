#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_0::Brain { struct InRangeOfEntitySensorEntryDefinition; }
// clang-format on

namespace SharedTypes::v1_26_0::Brain {

struct InRangeOfEntitySensorDefinition : public ::SharedTypes::v1_26_0::Brain::BaseSensorDefinition<
                                             ::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorDefinition,
                                             ::SharedTypes::v1_26_0::Brain::InRangeOfEntitySensorEntryDefinition> {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0::Brain
