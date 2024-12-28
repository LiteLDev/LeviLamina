#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DynamicProperties;
class ILevel;
// clang-format on

class DynamicPropertiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk3d5904;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesComponent& operator=(DynamicPropertiesComponent const&);
    DynamicPropertiesComponent(DynamicPropertiesComponent const&);
    DynamicPropertiesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DynamicPropertiesComponent(::DynamicPropertiesComponent&&);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::ILevel& level) const;

    MCAPI ::DynamicProperties& getProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DynamicPropertiesComponent&&);
    // NOLINTEND
};
