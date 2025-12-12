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
    using SelfType = ::Json::ValueConstIterator;

    using difference_type = int;

    using pointer = ::Json::Value const*;

    using reference = ::Json::Value const&;

    using size_t = uint;

    using value_type = ::Json::Value;

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Json::ValueConstIterator& operator=(::Json::ValueIteratorBase const& other);

    MCAPI ~ValueConstIterator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Json
