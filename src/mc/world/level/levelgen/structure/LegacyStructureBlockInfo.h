#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdfefd1;
    ::ll::UntypedStorage<8, 8>  mUnkcf2cd6;
    ::ll::UntypedStorage<8, 8>  mUnk76801c;
    ::ll::UntypedStorage<8, 8>  mUnk453e8e;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureBlockInfo& operator=(LegacyStructureBlockInfo const&);
    LegacyStructureBlockInfo(LegacyStructureBlockInfo const&);
    LegacyStructureBlockInfo();
};
