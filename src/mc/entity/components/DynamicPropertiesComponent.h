#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/persistence/DynamicProperties.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevel;
// clang-format on

class DynamicPropertiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::DynamicProperties> mDynamicProperties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::ILevel& level) const;
    // NOLINTEND
};
