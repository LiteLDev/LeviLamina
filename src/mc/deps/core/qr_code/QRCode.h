#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class QRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6df00f;
    // NOLINTEND

public:
    // prevent constructor by default
    QRCode& operator=(QRCode const&);
    QRCode(QRCode const&);
    QRCode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit QRCode(::std::string const& targetString);

    MCNAPI_C ~QRCode();
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
