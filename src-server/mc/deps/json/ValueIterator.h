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
    using size_t = uint;
    
    using difference_type = int;
    
    using reference = ::Json::Value&;
    
    using pointer = ::Json::Value*;
    
    using SelfType = ::Json::ValueIterator;
    
    using value_type = ::Json::Value;
    
public:
    // prevent constructor by default
    ValueIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ValueIterator(::Json::ValueConstIterator const& other);

    MCAPI ~ValueIterator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Json::ValueConstIterator const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
