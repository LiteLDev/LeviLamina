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
    MCAPI ::EducationLocalLevelSettings& operator=(::EducationLocalLevelSettings const&);

    MCAPI ~EducationLocalLevelSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
