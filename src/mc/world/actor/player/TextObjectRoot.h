#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectRoot : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectRoot& operator=(TextObjectRoot const&);
    TextObjectRoot(TextObjectRoot const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectRoot();

    // vIndex: 1
    virtual std::string asString() const;

    // vIndex: 2
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3
    virtual class Json::Value resolve(struct ResolveData const&) const;

    MCAPI TextObjectRoot();

    MCAPI void addChild(std::unique_ptr<class ITextObject> childObject);

    MCAPI std::vector<std::string> asStringVector() const;

    MCAPI void clear();

    MCAPI bool isEmpty() const;

    MCAPI class ResolvedTextObject resolveRoot(class Actor const& actor, class Scoreboard const& scoreboard) const;

    // NOLINTEND
};
