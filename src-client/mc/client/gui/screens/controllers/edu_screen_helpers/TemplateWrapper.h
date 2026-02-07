#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/edu_screen_helpers/TemplateType.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on

namespace EDUScreenHelpers {

class TemplateWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUScreenHelpers::TemplateType> mType;
    ::ll::TypedStorage<8, 8, ::WorldTemplateInfo const*>       mLocalInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getSubtext1();
    // NOLINTEND
};

} // namespace EDUScreenHelpers
