#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::DataDrivenUI::Styling {

struct BoxSizeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTop;
    ::ll::TypedStorage<4, 4, int> mRight;
    ::ll::TypedStorage<4, 4, int> mBottom;
    ::ll::TypedStorage<4, 4, int> mLeft;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::DataDrivenUI::Styling
