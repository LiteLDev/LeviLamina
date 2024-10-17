#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITextObject {
public:
    // prevent constructor by default
    ITextObject& operator=(ITextObject const&);
    ITextObject(ITextObject const&);
    ITextObject();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& RAW_TEXT_OBJECT_KEY();

    MCAPI static std::string const& RAW_TEXT_TEXT_KEY();

    MCAPI static std::string const& RAW_TEXT_TRANSLATE_KEY();

    MCAPI static std::string const& RAW_TEXT_WITH_KEY();

    // NOLINTEND
};
