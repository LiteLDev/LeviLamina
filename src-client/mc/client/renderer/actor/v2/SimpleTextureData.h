#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SimpleTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkd42640;
    ::ll::UntypedStorage<4, 20>  mUnk7101c9;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleTextureData& operator=(SimpleTextureData const&);
    SimpleTextureData(SimpleTextureData const&);
    SimpleTextureData();
};
