#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueIteratorBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class ValueConstIterator : public ::Json::ValueIteratorBase {
public:
    // ValueConstIterator inner types define
    using size_t = uint;

    using difference_type = int;

    using reference = ::Json::Value const&;

    using pointer = ::Json::Value const*;

    using SelfType = ::Json::ValueConstIterator;

    using value_type = ::Json::Value;

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Json::Value const& operator*() const;

    MCFOLD ::Json::ValueConstIterator& operator++();
    // NOLINTEND
};

} // namespace Json
