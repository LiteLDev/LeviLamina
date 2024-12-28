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
    ::ll::UntypedStorage<8, 40> mUnk3b83ff;
    ::ll::UntypedStorage<1, 1>  mUnk4e23d1;
    ::ll::UntypedStorage<8, 40> mUnk9c064c;
    ::ll::UntypedStorage<8, 40> mUnk575cff;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingInfo& operator=(BindingInfo const&);
    BindingInfo(BindingInfo const&);
    BindingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::Input::BindingInfo& operator=(::Editor::Input::BindingInfo&&);

    MCAPI ~BindingInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Input
