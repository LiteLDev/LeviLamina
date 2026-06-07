#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_20::Brain { struct MemorySetterDefinition; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct SensorResponseProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                        mEventName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::Brain::MemorySetterDefinition>> mSetters;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
