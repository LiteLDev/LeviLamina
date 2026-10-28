#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct EnvironmentAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk483852;
    ::ll::UntypedStorage<8, 160> mUnk7dd726;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentAttributeData& operator=(EnvironmentAttributeData const&);
    EnvironmentAttributeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnvironmentAttributeData(::EAS::EnvironmentAttributeData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EAS::EnvironmentAttributeData const&);
    // NOLINTEND
};

} // namespace EAS
