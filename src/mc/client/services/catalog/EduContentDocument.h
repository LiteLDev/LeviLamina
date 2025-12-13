#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduContentDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1208> mUnk862a3a;
    ::ll::UntypedStorage<8, 1728> mUnk86b802;
    // NOLINTEND

public:
    // prevent constructor by default
    EduContentDocument& operator=(EduContentDocument const&);
    EduContentDocument(EduContentDocument const&);
    EduContentDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~EduContentDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
