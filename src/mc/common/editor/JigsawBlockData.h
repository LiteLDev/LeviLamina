#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct JigsawBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1a03e;
    ::ll::UntypedStorage<8, 32> mUnk3043cd;
    ::ll::UntypedStorage<8, 32> mUnk52ca9c;
    ::ll::UntypedStorage<8, 32> mUnkb5aa11;
    ::ll::UntypedStorage<1, 1>  mUnk58f6f4;
    ::ll::UntypedStorage<4, 4>  mUnk5eef34;
    ::ll::UntypedStorage<4, 4>  mUnk58c9b5;
    ::ll::UntypedStorage<1, 1>  mUnke6ef36;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockData& operator=(JigsawBlockData const&);
    JigsawBlockData(JigsawBlockData const&);
    JigsawBlockData();
};

} // namespace Editor::Services
