#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RenderController;
// clang-format on

class RenderControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb5dcd0;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerPtr& operator=(RenderControllerPtr const&);
    RenderControllerPtr(RenderControllerPtr const&);
    RenderControllerPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool isNull() const;

    MCNAPI_C ::RenderController const* operator->() const;

    MCNAPI_C ::RenderController* operator->();

    MCNAPI_C ~RenderControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::RenderControllerPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
