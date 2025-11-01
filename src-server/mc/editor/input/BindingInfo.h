#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

struct BindingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk3b83ff;
    ::ll::UntypedStorage<1, 1> mUnk4e23d1;
    ::ll::UntypedStorage<8, 40> mUnk9c064c;
    ::ll::UntypedStorage<8, 40> mUnk575cff;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingInfo(BindingInfo const&);
    BindingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Input::BindingInfo& operator=(::Editor::Input::BindingInfo&&);

    MCNAPI ::Editor::Input::BindingInfo& operator=(::Editor::Input::BindingInfo const&);

    MCNAPI ~BindingInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
