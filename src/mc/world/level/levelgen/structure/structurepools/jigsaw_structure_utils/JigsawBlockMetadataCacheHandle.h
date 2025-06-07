#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JigsawStructureUtils {

struct JigsawBlockMetadataCacheHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke9578d;
    ::ll::UntypedStorage<8, 8> mUnk40f85c;
    ::ll::UntypedStorage<8, 8> mUnkef6e6c;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockMetadataCacheHandle& operator=(JigsawBlockMetadataCacheHandle const&);
    JigsawBlockMetadataCacheHandle(JigsawBlockMetadataCacheHandle const&);
    JigsawBlockMetadataCacheHandle();
};

} // namespace JigsawStructureUtils
