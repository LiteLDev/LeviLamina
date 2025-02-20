#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk64a37c;
    ::ll::UntypedStorage<8, 8>  mUnk6e6470;
    ::ll::UntypedStorage<8, 8>  mUnk4093cd;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBlockInfo& operator=(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo();
};
