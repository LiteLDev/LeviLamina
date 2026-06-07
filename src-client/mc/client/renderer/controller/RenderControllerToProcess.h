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
    MCNAPI RenderControllerToProcess(
        ::std::shared_ptr<::RenderController> renderControllerPtr,
        ::std::weak_ptr<::DataDrivenGeometry> geo,
        uint64                                sortIndex
    );

    MCNAPI ~RenderControllerToProcess();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::RenderController> renderControllerPtr,
        ::std::weak_ptr<::DataDrivenGeometry> geo,
        uint64                                sortIndex
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
