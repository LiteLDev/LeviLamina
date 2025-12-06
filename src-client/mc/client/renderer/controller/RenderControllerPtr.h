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
    MCNAPI bool isNull() const;

    MCNAPI ::RenderController const* operator->() const;

    MCNAPI ::RenderController* operator->();

    MCNAPI ~RenderControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RenderControllerPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
