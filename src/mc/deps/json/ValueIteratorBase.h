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
    using size_t = uint;

    using difference_type = int;

    using SelfType = ::Json::ValueIteratorBase;

    using iterator_category = ::std::bidirectional_iterator_tag;

public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::TypedStorage<8, 8, ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::Json::Value*>>>>
            array_;
        ::ll::TypedStorage<
            8,
            8,
            ::std::_Tree_iterator<
                ::std::_Tree_val<::std::_Tree_simple_types<::std::pair<::Json::Value::CZString const, ::Json::Value>>>>>
            map_;
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

    MCAPI bool isEqual(::Json::ValueIteratorBase const& other) const;

    MCAPI char const* memberName() const;

    MCAPI bool operator!=(::Json::ValueIteratorBase const& other) const;

    MCAPI ~ValueIteratorBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::ValueIteratorBase const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Json
