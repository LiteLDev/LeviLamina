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
    // prevent constructor by default
    StyledWriter& operator=(StyledWriter const&);
    StyledWriter(StyledWriter const&);

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI std::string write$(class Json::Value const& root);

    // NOLINTEND
};

}; // namespace Json
