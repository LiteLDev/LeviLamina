#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

struct BindingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk84c197;
    ::ll::UntypedStorage<1, 1>  mUnk4e23d1;
    ::ll::UntypedStorage<8, 40> mUnk2af607;
    ::ll::UntypedStorage<8, 40> mUnkb20737;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingInfo& operator=(BindingInfo const&);
    BindingInfo(BindingInfo const&);
    BindingInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI BindingInfo(
        ::std::string                  label,
        bool                           canRebind,
        ::std::optional<::std::string> tooltip,
        ::std::optional<::std::string> actionId
    );
#endif

    MCNAPI ::Editor::Input::BindingInfo& operator=(::Editor::Input::BindingInfo&&);

    MCNAPI ~BindingInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::string                  label,
        bool                           canRebind,
        ::std::optional<::std::string> tooltip,
        ::std::optional<::std::string> actionId
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Input
