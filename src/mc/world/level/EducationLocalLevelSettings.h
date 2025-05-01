#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationLocalLevelSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> codeBuilderOverrideUri;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EducationLocalLevelSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
