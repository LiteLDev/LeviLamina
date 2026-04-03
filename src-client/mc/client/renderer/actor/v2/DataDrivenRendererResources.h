#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdc3e99;
    ::ll::UntypedStorage<8, 24> mUnk430c5f;
    ::ll::UntypedStorage<8, 24> mUnkbf533a;
    ::ll::UntypedStorage<8, 24> mUnk3ce70a;
    ::ll::UntypedStorage<8, 24> mUnkf0bb73;
    ::ll::UntypedStorage<8, 24> mUnkff7eb4;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererResources& operator=(DataDrivenRendererResources const&);
    DataDrivenRendererResources(DataDrivenRendererResources const&);
    DataDrivenRendererResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataDrivenRendererResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
