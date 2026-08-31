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
#ifdef LL_PLAT_C
    MCNAPI explicit QRCode(::std::string const& targetString);

    MCNAPI ~QRCode();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& targetString);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock
