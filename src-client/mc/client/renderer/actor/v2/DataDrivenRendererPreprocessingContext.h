#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRendererPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkedf941;
    ::ll::UntypedStorage<8, 16> mUnk4cb674;
    ::ll::UntypedStorage<8, 8>  mUnk61744b;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererPreprocessingContext& operator=(DataDrivenRendererPreprocessingContext const&);
    DataDrivenRendererPreprocessingContext(DataDrivenRendererPreprocessingContext const&);
    DataDrivenRendererPreprocessingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataDrivenRendererPreprocessingContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
