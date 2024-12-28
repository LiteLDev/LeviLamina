#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct JigsawSectionEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk56e4ae;
    ::ll::UntypedStorage<8, 8> mUnk317a08;
    ::ll::UntypedStorage<8, 8> mUnk79100b;
    ::ll::UntypedStorage<8, 8> mUnk5f15e9;
    ::ll::UntypedStorage<8, 8> mUnk64b3e0;
    ::ll::UntypedStorage<8, 8> mUnke736bb;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawSectionEntry& operator=(JigsawSectionEntry const&);
    JigsawSectionEntry(JigsawSectionEntry const&);
    JigsawSectionEntry();
};

} // namespace br::worldgen
