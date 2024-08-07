#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectText : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectText& operator=(TextObjectText const&);
    TextObjectText(TextObjectText const&);
    TextObjectText();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectText() = default;

    // vIndex: 1
    virtual std::string asString() const;

    // vIndex: 2
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3
    virtual class Json::Value resolve(struct ResolveData const&) const;

    MCAPI explicit TextObjectText(std::string text);

    MCAPI static class Json::Value asJsonValue(std::string const& textField);

    // NOLINTEND
};
