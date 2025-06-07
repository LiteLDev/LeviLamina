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
    // member functions
    // NOLINTBEGIN
    MCAPI void increment();

    MCAPI bool operator!=(::Json::ValueIteratorBase const& other) const;
    // NOLINTEND
};

} // namespace Json
