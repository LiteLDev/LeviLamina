#pragma once

#include "../dll.h"
#include "ITextObject.h"

class TextObjectText : public ITextObject {
public:
    std::string text;
    inline TextObjectText(std::string text)
        : text(text) {
    }

    MCAPI std::string asString() const;
    MCAPI Json::Value asJsonValue() const;
};