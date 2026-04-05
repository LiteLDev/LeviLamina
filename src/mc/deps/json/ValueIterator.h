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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ValueIterator();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ValueIterator& operator=(ValueIterator const&);
    ValueIterator();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ValueIterator(::Json::ValueIterator const& other);
#endif

    MCAPI explicit ValueIterator(::Json::ValueConstIterator const& other);

    MCAPI ~ValueIterator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::Json::ValueIterator const& other);
#endif

    MCFOLD void* $ctor(::Json::ValueConstIterator const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Json
