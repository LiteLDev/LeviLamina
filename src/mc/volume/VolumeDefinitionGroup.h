#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct VolumeDefinition;
// clang-format on

class VolumeDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2a9381;
    ::ll::UntypedStorage<8, 24> mUnk66e645;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeDefinitionGroup& operator=(VolumeDefinitionGroup const&);
    VolumeDefinitionGroup(VolumeDefinitionGroup const&);
    VolumeDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VolumeDefinition const* tryGetVolumeDefinition(::std::string const& identifier) const;
    // NOLINTEND
};
