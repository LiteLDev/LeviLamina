#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextMeasureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> fontSize;
    ::ll::TypedStorage<4, 4, float const> linePadding;
    ::ll::TypedStorage<1, 1, bool const>  renderShadow;
    ::ll::TypedStorage<1, 1, bool const>  showColorSymbol;
    ::ll::TypedStorage<1, 1, bool const>  hideHyphen;
    // NOLINTEND
};
