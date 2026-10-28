#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

struct BindingCategoryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4246af;
    ::ll::UntypedStorage<8, 32> mUnkf37642;
    ::ll::UntypedStorage<4, 4>  mUnk8b5156;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingCategoryInfo& operator=(BindingCategoryInfo const&);
    BindingCategoryInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BindingCategoryInfo(::Editor::Input::BindingCategoryInfo const&);

    MCNAPI ::Editor::Input::BindingCategoryInfo& operator=(::Editor::Input::BindingCategoryInfo&&);

    MCNAPI ~BindingCategoryInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Input::BindingCategoryInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Input
