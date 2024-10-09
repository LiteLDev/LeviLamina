#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { class Writer; }
// clang-format on

namespace Json {

class StyledWriter : public ::Json::Writer {
public:
    using ChildValues = std::vector<std::string>;

    ChildValues childValues_;
    std::string document_;
    std::string indentString_;
    uint        rightMargin_;
    uint        indentSize_;
    bool        addChildValues_;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StyledWriter();

    // vIndex: 1
    virtual std::string write(class Json::Value const& root);

    MCAPI StyledWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void indent();

    MCAPI void pushValue(std::string const& value);

    MCAPI void unindent();

    MCAPI void writeArrayValue(class Json::Value const& value);

    MCAPI void writeValue(class Json::Value const& value);

    MCAPI void writeWithIndent(std::string const& value);

    // NOLINTEND
};

}; // namespace Json
