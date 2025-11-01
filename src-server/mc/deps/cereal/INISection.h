#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct INISection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka4f6fd;
    ::ll::UntypedStorage<8, 64> mUnk51fc20;
    // NOLINTEND

public:
    // prevent constructor by default
    INISection& operator=(INISection const&);
    INISection(INISection const&);
    INISection();

};

}
