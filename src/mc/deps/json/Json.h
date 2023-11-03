#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Reader.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/json/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Features; }
namespace Json { class Value; }
namespace Json { class ValueConstIterator; }
namespace Json { class ValueIterator; }
namespace Json { class ValueIteratorBase; }
namespace Json { class Writer; }
// clang-format on

namespace Json {
// NOLINTBEGIN
// symbol: ?valueToQuotedString@Json@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
MCAPI std::string valueToQuotedString(char const*);

// symbol: ?valueToString@Json@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
MCAPI std::string valueToString(int64);

// symbol: ?valueToString@Json@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@Z
MCAPI std::string valueToString(double);

// symbol: ?valueToString@Json@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
MCAPI std::string valueToString(uint64);
// NOLINTEND

}; // namespace Json
