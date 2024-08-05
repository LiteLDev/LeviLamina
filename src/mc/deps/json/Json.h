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
MCAPI std::string valueToQuotedString(char const*);

MCAPI std::string valueToString(int64);

MCAPI std::string valueToString(double);

MCAPI std::string valueToString(uint64);
// NOLINTEND

}; // namespace Json
