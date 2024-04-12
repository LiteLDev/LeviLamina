#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
// NOLINTBEGIN
// symbol:
// ?addObjectField@JsonHelpers@@YAXAEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI void addObjectField(class Json::Value&, std::string const& fieldName, class Json::Value const& object);

// symbol:
// ?addStringField@JsonHelpers@@YAXAEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI void addStringField(class Json::Value&, std::string const& fieldName, std::string const& value);

// symbol:
// ?parseJson@JsonHelpers@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
MCAPI bool parseJson(std::string const& str, class Json::Value& root);

// symbol: ?serialize@JsonHelpers@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
MCAPI std::string serialize(class Json::Value const&);
// NOLINTEND

}; // namespace JsonHelpers
