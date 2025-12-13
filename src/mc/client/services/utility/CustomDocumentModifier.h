#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CustomDocumentModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk35f101;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomDocumentModifier& operator=(CustomDocumentModifier const&);
    CustomDocumentModifier(CustomDocumentModifier const&);
    CustomDocumentModifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~CustomDocumentModifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
