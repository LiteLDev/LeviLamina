#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TextBoxSelection.h"

namespace Bedrock {

class ValidatedTextState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mText;
    ::ll::TypedStorage<4, 12, ::TextBoxSelection> mSelection;
    ::ll::TypedStorage<4, 4, int>                 mMaxCharCount;
    // NOLINTEND
};

} // namespace Bedrock
