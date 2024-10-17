#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedTextWithParams : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectLocalizedTextWithParams& operator=(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectLocalizedTextWithParams() = default;

    // vIndex: 1
    virtual std::string asString() const;

    // vIndex: 2
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3
    virtual class Json::Value resolve(struct ResolveData const& resolveData) const;

    MCAPI TextObjectLocalizedTextWithParams(std::string text, std::vector<std::string> const& params);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string text, std::vector<std::string> const& params);

    MCAPI class Json::Value asJsonValue$() const;

    MCAPI std::string asString$() const;

    MCAPI class Json::Value resolve$(struct ResolveData const& resolveData) const;

    // NOLINTEND
};
