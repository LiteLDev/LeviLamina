#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class QRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk32ecba;
    // NOLINTEND

public:
    // prevent constructor by default
    QRCode& operator=(QRCode const&);
    QRCode(QRCode const&);
    QRCode();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& targetString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
