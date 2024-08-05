#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
// NOLINTBEGIN
MCAPI void addObjectField(class Json::Value&, std::string const& fieldName, class Json::Value const& object);

MCAPI void addStringField(class Json::Value&, std::string const& fieldName, std::string const& value);

MCAPI bool parseJson(std::string const& str, class Json::Value& root);

MCAPI std::string serialize(class Json::Value const&);
// NOLINTEND

}; // namespace JsonHelpers
