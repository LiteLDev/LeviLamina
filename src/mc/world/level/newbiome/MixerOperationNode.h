#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename... T2>
class MixerOperationNode {
public:
    // prevent constructor by default
    MixerOperationNode& operator=(MixerOperationNode const&);
    MixerOperationNode(MixerOperationNode const&);
    MixerOperationNode();
};
