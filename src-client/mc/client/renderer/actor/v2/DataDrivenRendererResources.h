#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9bb23c;
    ::ll::UntypedStorage<8, 24> mUnkc88d6b;
    ::ll::UntypedStorage<8, 24> mUnka85028;
    ::ll::UntypedStorage<8, 24> mUnk5be7cd;
    ::ll::UntypedStorage<8, 24> mUnk79602f;
    ::ll::UntypedStorage<8, 24> mUnkc2d9df;
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
