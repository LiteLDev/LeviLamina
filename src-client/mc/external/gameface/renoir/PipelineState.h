#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct PipelineState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4e1ec2;
    ::ll::UntypedStorage<4, 4>  mUnk93f479;
    ::ll::UntypedStorage<4, 44> mUnk277444;
    ::ll::UntypedStorage<4, 52> mUnk510d39;
    ::ll::UntypedStorage<1, 1>  mUnkbb0e96;
    ::ll::UntypedStorage<1, 1>  mUnk681242;
    ::ll::UntypedStorage<4, 4>  mUnk47835f;
    ::ll::UntypedStorage<4, 4>  mUnk9eac92;
    ::ll::UntypedStorage<4, 4>  mUnk8ee613;
    ::ll::UntypedStorage<4, 4>  mUnk373d60;
    ::ll::UntypedStorage<4, 4>  mUnkaf0e0b;
    ::ll::UntypedStorage<4, 4>  mUnkfae973;
    ::ll::UntypedStorage<4, 4>  mUnkb6cda1;
    ::ll::UntypedStorage<4, 4>  mUnkd17f0e;
    ::ll::UntypedStorage<4, 4>  mUnkeba9f0;
    ::ll::UntypedStorage<4, 4>  mUnkf3a155;
    // NOLINTEND

public:
    // prevent constructor by default
    PipelineState& operator=(PipelineState const&);
    PipelineState(PipelineState const&);
    PipelineState();
};

} // namespace renoir
