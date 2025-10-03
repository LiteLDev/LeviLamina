#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParticleRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5e8bd6;
    ::ll::UntypedStorage<8, 8> mUnkfe7997;
    ::ll::UntypedStorage<8, 8> mUnk8f7d8c;
    ::ll::UntypedStorage<8, 8> mUnke33622;
    ::ll::UntypedStorage<4, 4> mUnk99be73;
    ::ll::UntypedStorage<8, 8> mUnke27a4e;
    ::ll::UntypedStorage<4, 4> mUnk1643da;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleRenderContext& operator=(ParticleRenderContext const&);
    ParticleRenderContext(ParticleRenderContext const&);
    ParticleRenderContext();
};
