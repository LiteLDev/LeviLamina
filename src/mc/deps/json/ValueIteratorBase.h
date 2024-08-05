#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class ValueIteratorBase {
public:
    // prevent constructor by default
    ValueIteratorBase& operator=(ValueIteratorBase const&);
    ValueIteratorBase();

    using iterator_category = std::forward_iterator_tag;

    Value::ObjectValues::iterator current_;
    bool                          isNull_;

    bool operator==(ValueIteratorBase const& other) const { return isEqual(other); }
    bool operator!=(ValueIteratorBase const& other) const { return !isEqual(other); }


    ValueIteratorBase& operator++() {
        increment();
        return *this;
    }

    Json::Value& operator*() const { return deref(); }

public:
    // NOLINTBEGIN
    MCAPI ValueIteratorBase(class Json::ValueIteratorBase const& other);

    MCAPI char const* memberName() const;

    MCAPI ~ValueIteratorBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Json::Value& deref() const;

    MCAPI void increment();

    MCAPI bool isEqual(class Json::ValueIteratorBase const& other) const;

    // NOLINTEND
};

}; // namespace Json
