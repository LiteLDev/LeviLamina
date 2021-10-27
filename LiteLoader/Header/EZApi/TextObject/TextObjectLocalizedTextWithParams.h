#pragma once

#include <memory>
#include <vector>

#include "../dll.h"
#include "ITextObject.h"
#include "TextObjectRoot.h"
#include "TextObjectText.h"

class TextObjectLocalizedTextWithParams : public ITextObject {
public:
    std::string                     format;
    std::unique_ptr<TextObjectRoot> arg;

    TextObjectLocalizedTextWithParams(std::string format, std::unique_ptr<TextObjectRoot> root)
        : format(format)
        , arg(std::move(root)) {
    }
    TextObjectLocalizedTextWithParams(std::string format, std::initializer_list<std::string> params)
        : format(format)
        , arg(std::make_unique<TextObjectRoot>()) {
        for (auto const& item : params) {
            arg->addChild<TextObjectText>(item);
        }
    }

    MCAPI std::string asString() const;
    MCAPI Json::Value asJsonValue() const;

    inline static auto build(std::string text, std::initializer_list<std::string> params) {
        return std::make_unique<TextObjectLocalizedTextWithParams>(text, std::move(params));
    }
};