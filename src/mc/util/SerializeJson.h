#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace Json { class Value; }
// clang-format on

namespace SerializeJson {
// functions
// NOLINTBEGIN
MCNAPI bool parseWithDepthLimit(::std::string_view serializedJson, ::Json::Value& result);

MCNAPI ::Bedrock::Result<::Json::Value> readWithDepthLimit(::ReadOnlyBinaryStream& stream);
// NOLINTEND

} // namespace SerializeJson
