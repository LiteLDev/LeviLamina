#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ParseHandler
: public ::rapidjson::BaseReaderHandler<::rapidjson::UTF8<char>, ::Bedrock::JSONObject::ParseHandler> {
public:
    // ParseHandler inner types declare
    // clang-format off
    struct StackEntry;
    // clang-format on

    // ParseHandler inner types define
    struct StackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk69c924;
        ::ll::UntypedStorage<8, 8> mUnkf7a1f4;
        ::ll::UntypedStorage<8, 8> mUnk8e9ec9;
        // NOLINTEND

    public:
        // prevent constructor by default
        StackEntry& operator=(StackEntry const&);
        StackEntry(StackEntry const&);
        StackEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk20ca89;
    ::ll::UntypedStorage<8, 8> mUnk660ee3;
    // NOLINTEND

public:
    // prevent constructor by default
    ParseHandler& operator=(ParseHandler const&);
    ParseHandler(ParseHandler const&);
    ParseHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Bool(bool b);

    MCAPI bool Double(double d);

    MCAPI bool Int(int i);

    MCFOLD bool Int64(int64 i);

    MCFOLD bool Key(char const* str, uint length, bool copy);

    MCAPI bool Null();

    MCAPI bool StartArray();

    MCAPI bool StartObject();

    MCFOLD bool String(char const* str, uint length, bool copy);

    MCAPI bool Uint(uint u);

    MCFOLD bool Uint64(uint64 u);

    MCAPI bool _addObjectOrArray(::Bedrock::JSONObject::ValueWrapper const& value);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
