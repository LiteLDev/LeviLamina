#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class RenderController;
// clang-format on

struct RenderControllerToProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderController>> mRenderController;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenGeometry>> mGeo;
    ::ll::TypedStorage<8, 8, uint64>                                 mSortIndex;
    // NOLINTEND

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
