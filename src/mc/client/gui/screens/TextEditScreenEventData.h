#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/TextCharEventResult.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct TextEditScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                  id;
    ::ll::TypedStorage<4, 4, int>                   index;
    ::ll::TypedStorage<1, 1, bool>                  finished;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*>      properties;
    ::ll::TypedStorage<1, 4, ::TextCharEventResult> result;
    ::ll::TypedStorage<1, 1, bool>                  hasSelectedTextBox;
    // NOLINTEND
};
