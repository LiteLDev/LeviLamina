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
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator!=(::Json::ValueIteratorBase const& other) const;
    // NOLINTEND
};

} // namespace Json
