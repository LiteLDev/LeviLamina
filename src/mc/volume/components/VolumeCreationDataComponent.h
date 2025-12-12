#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeCreationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string> mInstanceName;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::VolumeCreationDataComponent& operator=(::VolumeCreationDataComponent&&);
    // NOLINTEND
};
