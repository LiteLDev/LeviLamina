#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeCreationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string> mInstanceName;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::VolumeCreationDataComponent& operator=(::VolumeCreationDataComponent&&);
#endif
    // NOLINTEND
};
