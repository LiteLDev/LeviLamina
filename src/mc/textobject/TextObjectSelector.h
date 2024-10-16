#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectSelector : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectSelector& operator=(TextObjectSelector const&);
    TextObjectSelector(TextObjectSelector const&);
    TextObjectSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectSelector() = default;

    // vIndex: 1
    virtual std::string asString() const;

    // vIndex: 2
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3
    virtual class Json::Value resolve(struct ResolveData const& resolveData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Json::Value asJsonValue$() const;

    MCAPI std::string asString$() const;

    MCAPI class Json::Value resolve$(struct ResolveData const& resolveData) const;

    MCAPI static std::string const& RAW_TEXT_SELECTOR_KEY();

    MCAPI static std::string const& RAW_TEXT_SELECTOR_STAR();

    // NOLINTEND
};
