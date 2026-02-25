#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class AllowListQRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mID;
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<8, 32, ::std::string> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListQRCode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListQRCode(::std::string id, ::std::string target);

    MCAPI ~AllowListQRCode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string id, ::std::string target);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
