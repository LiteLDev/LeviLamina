#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ParseHandler {
public:
    // prevent constructor by default
    ParseHandler& operator=(ParseHandler const&);
    ParseHandler(ParseHandler const&);
    ParseHandler();

public:
    // NOLINTBEGIN
    MCAPI bool Bool(bool b);

    MCAPI bool Double(double d);

    MCAPI bool Int(int i);

    MCAPI bool Int64(int64 i);

    MCAPI bool Key(char const* str, uint length, bool copy);

    MCAPI bool Null();

    MCAPI bool String(char const* str, uint length, bool copy);

    MCAPI bool Uint(uint u);

    MCAPI bool Uint64(uint64 u);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _addObjectOrArray(class Bedrock::JSONObject::ValueWrapper const& value);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
