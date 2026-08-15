#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Input {

struct BindingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk84c197;
    ::ll::UntypedStorage<1, 1>  mUnk4e23d1;
    ::ll::UntypedStorage<8, 40> mUnk2af607;
    ::ll::UntypedStorage<8, 40> mUnkb20737;
    ::ll::UntypedStorage<8, 40> mUnk558688;
    ::ll::UntypedStorage<4, 8>  mUnk2bf33b;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingInfo(BindingInfo const&);
    BindingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Input::BindingInfo& operator=(::Editor::Input::BindingInfo const&);

    MCNAPI ~BindingInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Input
