#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct NewType {
public:
    T0 mValue;

    // not trivially copyable
    NewType(NewType const& other) : mValue{other.mValue} {}

    NewType& operator=(NewType const& other) {
        mValue = other.mValue;
        return *this;
    }
    [[nodiscard]] inline bool operator==(NewType const& other) const
        requires(requires { mValue == other.mValue; })
    {
        return mValue == other.mValue;
    }
};

namespace std {
template <class T>
class hash<NewType<T>> {
public:
    size_t operator()(NewType<T> const& t) const { return std::hash<T>{}(t.mValue); }
};
} // namespace std
