#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CertificateSNIType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9370c6;
    ::ll::UntypedStorage<8, 24> mUnk252cae;
    // NOLINTEND

public:
    // prevent constructor by default
    CertificateSNIType& operator=(CertificateSNIType const&);
    CertificateSNIType(CertificateSNIType const&);
    CertificateSNIType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CertificateSNIType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
