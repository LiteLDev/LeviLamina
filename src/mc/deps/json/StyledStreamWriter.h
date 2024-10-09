#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledStreamWriter {
public:
    // prevent constructor by default
    StyledStreamWriter& operator=(StyledStreamWriter const&);
    StyledStreamWriter(StyledStreamWriter const&);
    StyledStreamWriter();

public:
    // NOLINTBEGIN
    MCAPI explicit StyledStreamWriter(std::string indentation);

    MCAPI void write(std::ostream& out, class Json::Value const& root);

    MCAPI ~StyledStreamWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void pushValue(std::string const& value);

    MCAPI void unindent();

    MCAPI void writeArrayValue(class Json::Value const& value);

    MCAPI void writeValue(class Json::Value const& value);

    // NOLINTEND
};

}; // namespace Json
