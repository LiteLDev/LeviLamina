#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class ValueIteratorBase {
public:
    // ValueIteratorBase inner types define
    using SelfType = ::Json::ValueIteratorBase;

    using difference_type = int;

    using iterator_category = ::std::bidirectional_iterator_tag;

    using size_t = uint;

public:
    ~ValueIteratorBase() {
        if (isArray_) {
            using IterT = decltype(array_);
            array_.~IterT();
        } else {
            using IterT = decltype(map_);
            map_.~IterT();
        }
    }

public:
    // member variables
    // NOLINTBEGIN
    union {
        Json::Value::ArrayValues::iterator  array_;
        Json::Value::ObjectValues::iterator map_;
    };
    ::ll::TypedStorage<1, 1, bool> isArray_;
    // NOLINTEND

public:
    // prevent constructor by default
    ValueIteratorBase& operator=(ValueIteratorBase const&);
    ValueIteratorBase();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ValueIteratorBase(::Json::ValueIteratorBase const& other);

    MCAPI ::Json::Value& deref() const;

    MCAPI void increment();

    MCFOLD bool isEqual(::Json::ValueIteratorBase const& other) const;

    MCAPI char const* memberName() const;

    MCAPI bool operator!=(::Json::ValueIteratorBase const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Json::ValueIteratorBase const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Json
