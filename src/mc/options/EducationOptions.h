#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class EducationOptions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke6a413;
    ::ll::UntypedStorage<8, 8> mUnk3e959f;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationOptions& operator=(EducationOptions const&);
    EducationOptions(EducationOptions const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationOptions() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EducationOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isChemistryEnabled();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
