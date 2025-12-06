#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderControllerToProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk176ade;
    ::ll::UntypedStorage<8, 16> mUnkabc415;
    ::ll::UntypedStorage<8, 8>  mUnkb50ef8;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerToProcess& operator=(RenderControllerToProcess const&);
    RenderControllerToProcess(RenderControllerToProcess const&);
    RenderControllerToProcess();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderControllerToProcess();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
