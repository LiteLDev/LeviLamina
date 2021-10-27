#pragma once

#include "../dll.h"
#include "ITextObject.h"

class TextObjectLocalizedText : public ITextObject {
    std::string text;

public:
    MCAPI TextObjectLocalizedText(std::string);
    MCAPI std::string asString() const;
    MCAPI Json::Value asJsonValue() const;
};