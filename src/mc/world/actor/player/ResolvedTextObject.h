#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ResolvedTextObject {
public:
    // prevent constructor by default
    ResolvedTextObject& operator=(ResolvedTextObject const&);
    ResolvedTextObject(ResolvedTextObject const&);
    ResolvedTextObject();

public:
    // NOLINTBEGIN
    MCAPI std::string getAsJsonString() const;

    MCAPI class Json::Value const& getJson() const;

    MCAPI ~ResolvedTextObject();

    // NOLINTEND
};
