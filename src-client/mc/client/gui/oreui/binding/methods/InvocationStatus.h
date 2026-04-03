#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LifeToken; }
namespace OreUI::Detail { class ICallable; }
// clang-format on

namespace OreUI {

class InvocationStatus {
public:
    // InvocationStatus inner types define
    using CallablePtr = ::OreUI::Detail::ICallable*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::ICallable*>          mCallable;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::OreUI::LifeToken>> mToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fail() const;

    MCAPI void success() const;

    MCAPI ~InvocationStatus();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
