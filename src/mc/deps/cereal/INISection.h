#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct INISection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd4aa79;
    ::ll::UntypedStorage<8, 64> mUnke86dee;
    // NOLINTEND

public:
    // prevent constructor by default
    INISection& operator=(INISection const&);
    INISection(INISection const&);
    INISection();
};

} // namespace cereal
