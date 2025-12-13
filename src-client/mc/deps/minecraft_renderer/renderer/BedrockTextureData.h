#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BedrockTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd61828;
    ::ll::UntypedStorage<4, 64> mUnk15174b;
    ::ll::UntypedStorage<1, 1>  mUnkbc4013;
    ::ll::UntypedStorage<1, 1>  mUnke88e15;
    ::ll::UntypedStorage<8, 24> mUnk3d3a01;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockTextureData& operator=(BedrockTextureData const&);
    BedrockTextureData(BedrockTextureData const&);
    BedrockTextureData();
};
