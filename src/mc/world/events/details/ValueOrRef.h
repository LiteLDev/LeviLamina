#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Details {

template <typename T>
class ValueOrRef {
public:
    ValueOrRef(std::reference_wrapper<T> ref) : is_pointer_(true), variant_(&ref.get()) {}

    ~ValueOrRef() {
        if (!is_pointer_) {
            variant_.value.~T();
        }
    }

    ValueOrRef(ValueOrRef const& other) = delete;

    ValueOrRef(ValueOrRef&& other) noexcept
    : is_pointer_(other.is_pointer_),
      variant_(other.is_pointer_ ? Variant(other.variant_.pointer) : Variant(std::move(other.variant_.value))) {}

    T& value() noexcept { return is_pointer_ ? *variant_.pointer : variant_.value; }

    T const& value() const noexcept { return is_pointer_ ? *variant_.pointer : variant_.value; }

private:
    ValueOrRef(T value) : is_pointer_(false), variant_(std::move(value)) {}

    union Variant {
        Variant() : pointer(nullptr) {}
        Variant(T* ptr) : pointer(ptr) {}
        Variant(T&& val) : value(std::move(val)) {}
        ~Variant() {}
        T* pointer;
        T  value;
    };
    Variant    variant_;
    bool const is_pointer_;
};

} // namespace Details
