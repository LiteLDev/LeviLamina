#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CertificateSNIType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkeb519e;
    ::ll::UntypedStorage<8, 24> mUnkcdc81f;
    // NOLINTEND

public:
    // prevent constructor by default
    CertificateSNIType& operator=(CertificateSNIType const&);
    CertificateSNIType(CertificateSNIType const&);
    CertificateSNIType();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~CertificateSNIType();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
