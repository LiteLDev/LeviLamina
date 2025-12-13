#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueIteratorBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { class ValueConstIterator; }
// clang-format on

namespace Json {

class ValueIterator : public ::Json::ValueIteratorBase {
public:
    // ValueIterator inner types define
    using SelfType = ::Json::ValueIterator;

    using difference_type = int;

    using pointer = ::Json::Value*;

    using reference = ::Json::Value&;

    using size_t = uint;

    using value_type = ::Json::Value;

public:
    // prevent constructor by default
    ValueIterator& operator=(ValueIterator const&);
    ValueIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ValueIterator(::Json::ValueIterator const& other);

    MCAPI explicit ValueIterator(::Json::ValueConstIterator const& other);

    MCAPI ~ValueIterator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD_C void* $ctor(::Json::ValueIterator const& other);

    MCFOLD void* $ctor(::Json::ValueConstIterator const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Json
