#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class LifeToken; }
namespace OreUI::Experimental::Detail { class ICallable; }
// clang-format on

namespace OreUI::Experimental {

class InvocationStatus {
public:
    // InvocationStatus inner types define
    using CallablePtr = ::OreUI::Experimental::Detail::ICallable*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::ICallable*>          mCallable;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::OreUI::Experimental::LifeToken>> mToken;
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

} // namespace OreUI::Experimental
