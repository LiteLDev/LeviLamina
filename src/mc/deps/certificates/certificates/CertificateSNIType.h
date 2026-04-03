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
    MCNAPI ~CertificateSNIType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
