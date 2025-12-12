#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SenderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaf0f45;
    ::ll::UntypedStorage<8, 24> mUnka98dad;
    ::ll::UntypedStorage<8, 24> mUnk4cb572;
    ::ll::UntypedStorage<8, 24> mUnk4fd38f;
    ::ll::UntypedStorage<4, 4>  mUnk10a644;
    // NOLINTEND

public:
    // prevent constructor by default
    SenderOptions& operator=(SenderOptions const&);
    SenderOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SenderOptions(::cricket::SenderOptions&&);

    MCNAPI SenderOptions(::cricket::SenderOptions const&);

    MCNAPI ::cricket::SenderOptions& operator=(::cricket::SenderOptions&&);

    MCNAPI ~SenderOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::SenderOptions&&);

    MCNAPI void* $ctor(::cricket::SenderOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
