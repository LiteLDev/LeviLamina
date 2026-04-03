#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct DynamicProfLabel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd2a2cf;
    ::ll::UntypedStorage<8, 16> mUnkf2dba9;
    ::ll::UntypedStorage<1, 1>  mUnk6aed13;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicProfLabel& operator=(DynamicProfLabel const&);
    DynamicProfLabel(DynamicProfLabel const&);
    DynamicProfLabel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicProfLabel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profiler::details
