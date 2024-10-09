#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedText : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectLocalizedText& operator=(TextObjectLocalizedText const&);
    TextObjectLocalizedText(TextObjectLocalizedText const&);
    TextObjectLocalizedText();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectLocalizedText() = default;

    // vIndex: 1
    virtual std::string asString() const;

    // vIndex: 2
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3
    virtual class Json::Value resolve(struct ResolveData const& resolveData) const;

    MCAPI explicit TextObjectLocalizedText(std::string text);

    // NOLINTEND
};
