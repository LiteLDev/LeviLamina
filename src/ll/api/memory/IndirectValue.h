#pragma once

#include <memory>
#include <type_traits>
#include <utility>

namespace ll::memory {
template <class T>
class IndirectValue {
    template <class U>
    friend class IndirectValue;

    using CopyConstructor = void*(void const*);
    using Deleter         = void(void*);

    T*               value;
    CopyConstructor* copyCtor;
    Deleter*         deleter;

    void destroy() {
        if (deleter) {
            deleter(value);
            value = nullptr;
        }
    }

    T* clone() const {
        if (value && copyCtor) {
            return reinterpret_cast<T*>(copyCtor(*value));
        }
        return nullptr;
    }

public:
    template <class... Args>
        requires(std::is_constructible_v<T, Args...> && std::is_copy_constructible_v<T>)
    constexpr IndirectValue(Args&&... args) noexcept(std::is_nothrow_constructible_v<T, Args...>)
    : value(new T(std::forward<Args>(args)...)),
      copyCtor(+[](void const* t) -> void* { return new T(*reinterpret_cast<T const*>(t)); }),
      deleter(+[](void* t) { delete reinterpret_cast<T*>(t); }) {}

    ~IndirectValue() { destroy(); }

    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr IndirectValue(IndirectValue<U>&& other) noexcept
    : value(other.value),
      copyCtor(other.copyCtor),
      deleter(other.deleter) {
        other.value    = nullptr;
        other.copyCtor = nullptr;
        other.deleter  = nullptr;
    }

    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr IndirectValue(IndirectValue<U> const& other) noexcept(std::is_nothrow_copy_constructible_v<U>)
        requires(std::is_copy_constructible_v<U>)
    : value(other.clone()),
      copyCtor(other.copyCtor),
      deleter(other.deleter) {}

    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr IndirectValue& operator=(IndirectValue<U> const& other) noexcept(std::is_nothrow_copy_constructible_v<U>)
        requires(std::is_copy_constructible_v<U>)
    {
        if (std::addressof(other) == this) {
            return *this;
        }
        destroy();
        value    = other.clone();
        copyCtor = other.copyCtor;
        deleter  = other.deleter;
        return *this;
    }
    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr IndirectValue& operator=(IndirectValue<U>&& other) noexcept {
        if constexpr (std::is_same_v<U, T>) {
            if (std::addressof(other) == this) {
                return *this;
            }
        }
        destroy();
        value          = other.value;
        copyCtor       = other.copyCtor;
        deleter        = other.deleter;
        other.value    = nullptr;
        other.copyCtor = nullptr;
        other.deleter  = nullptr;
        return *this;
    }

    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr void swap(IndirectValue<U>& other) noexcept {
        std::swap(value, other.value);
        std::swap(copyCtor, other.copyCtor);
        std::swap(deleter, other.deleter);
    }

    constexpr T*        get() noexcept { return value; }
    constexpr T const*  get() const noexcept { return value; }
    constexpr T*        operator->() noexcept { return value; }
    constexpr T const*  operator->() const noexcept { return value; }
    constexpr T&        operator*() & noexcept { return *value; }
    constexpr T const&  operator*() const& noexcept { return *value; }
    constexpr T&&       operator*() && noexcept { return std::forward<T>(*value); }
    constexpr T const&& operator*() const&& noexcept { return std::forward<T const>(*value); }
};

template <class T, class... Args>
IndirectValue<T> makeIndirect(Args&&... args) {
    return IndirectValue<T>(std::forward<Args>(args)...);
}

} // namespace ll::memory
