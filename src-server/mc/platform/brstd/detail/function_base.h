#pragma once

#include <functional>

#include "mc/platform/brstd/detail/DerivedType.h"

namespace brstd::detail::function {

template <DerivedType, class Base>
class function_base : public Base {
protected:
    function_base() { this->construct_empty(); }
    ~function_base() {
        if (*this) {
            this->get_vtable().destroy(this->mStorage);
        }
    }
    function_base(function_base&& other) {
        if (other) {
            other.get_vtable().move_to(other.mStorage, this->mStorage);
            this->mStorage.vfptr = std::exchange(other.mStorage.vfptr, nullptr);
        } else {
            this->construct_empty();
        }
    }
    function_base& operator=(function_base&& other) {
        if (this != std::addressof(other)) {
            if (*this) {
                this->get_vtable().destroy(this->mStorage);
            }
            if (other) {
                other.get_vtable().move_to(other.mStorage, this->mStorage);
                this->mStorage.vfptr = std::exchange(other.mStorage.vfptr, nullptr);
            } else {
                this->construct_empty();
            }
        }
        return *this;
    }

public:
    function_base& operator=(std::nullptr_t) {
        if (*this) {
            this->get_vtable().destroy(this->mStorage);
            this->mStorage.vfptr = nullptr;
        }
        return *this;
    }

    [[nodiscard]] friend bool operator==(function_base const& self, nullptr_t) noexcept {
        return !static_cast<bool>(self);
    }
};

template <class Base>
class function_base<DerivedType::Copyable, Base> : public function_base<DerivedType::MoveOnly, Base> {
protected:
    function_base()                           = default;
    function_base(function_base&&)            = default;
    function_base& operator=(function_base&&) = default;

    function_base(function_base const& other) {
        if (other) {
            other.get_vtable().copy_to(other.mStorage, this->mStorage);
            this->mStorage.vfptr = other.mStorage.vfptr;
        } else {
            this->construct_empty();
        }
    }
    function_base& operator=(function_base const& other) {
        if (this != std::addressof(other)) {
            if (*this) {
                this->get_vtable().destroy(this->mStorage);
            }
            if (other) {
                other.get_vtable().copy_to(other.mStorage, this->mStorage);
                this->mStorage.vfptr = other.mStorage.vfptr;
            } else {
                this->construct_empty();
            }
        }
        return *this;
    }};

} // namespace brstd::detail::function
