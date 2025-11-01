#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct CompressedBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf4e167;
    ::ll::UntypedStorage<4, 4> mUnk5359ce;
    ::ll::UntypedStorage<8, 8> mUnk9028ef;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedBlockInfo& operator=(CompressedBlockInfo const&);
    CompressedBlockInfo(CompressedBlockInfo const&);
    CompressedBlockInfo();

};

}
