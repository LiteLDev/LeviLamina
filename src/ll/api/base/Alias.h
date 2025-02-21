#pragma once

#include <bit>
#include <cstddef>
#include <memory>
#include <type_traits>
#include <utility>

#include "gsl/pointers"

namespace ll {

template <size_t Align, size_t Size>
struct UntypedStorage {
    alignas(Align) std::byte data[Size];

    template <class T>
    [[nodiscard]] T& as() & {
        if constexpr (std::is_reference_v<T>) {
            return **reinterpret_cast<std::remove_reference_t<T>**>(data);
        } else {
            return *reinterpret_cast<T*>(data);
        }
    }
    template <class T>
    [[nodiscard]] T const& as() const& {
        if constexpr (std::is_reference_v<T>) {
            return **reinterpret_cast<std::remove_reference_t<T> const**>(data);
        } else {
            return *reinterpret_cast<T const*>(data);
        }
    }
    template <class T>
    [[nodiscard]] T&& as() && {
        if constexpr (std::is_reference_v<T>) {
            return std::move(**reinterpret_cast<std::remove_reference_t<T>**>(data));
        } else {
            return std::move(*reinterpret_cast<T*>(data));
        }
    }
    template <class T>
    [[nodiscard]] T const&& as() const&& {
        if constexpr (std::is_reference_v<T>) {
            return std::move(**reinterpret_cast<std::remove_reference_t<T> const**>(data));
        } else {
            return std::move(*reinterpret_cast<T const*>(data));
        }
    }
};

template <size_t Align, size_t Size, class T>
struct TypedStorageImpl {
    alignas(Align) std::byte data[Size];

    template <class... Args>
    constexpr TypedStorageImpl(Args&&... args) {
        std::construct_at(this->operator->(), std::forward<Args>(args)...);
    }

    TypedStorageImpl(TypedStorageImpl const& other) { std::construct_at(this->operator->(), other.get()); }

    TypedStorageImpl(TypedStorageImpl&& other) { std::construct_at(this->operator->(), std::move(other.get())); }

    template <class U>
    constexpr T& operator=(U&& u) {
        get().operator=(std::forward<U>(u));
        return get();
    }

    T& operator=(TypedStorageImpl const& u) {
        get().operator=(u.get());
        return get();
    }

    T& operator=(TypedStorageImpl&& u) {
        get().operator=(std::move(u.get()));
        return get();
    }

    constexpr ~TypedStorageImpl() { std::destroy_at(this->operator->()); }

    [[nodiscard]] T*        operator->() { return reinterpret_cast<T*>(data); }
    [[nodiscard]] T const*  operator->() const { return reinterpret_cast<T const*>(data); }
    [[nodiscard]] T&        get() & { return *reinterpret_cast<T*>(data); }
    [[nodiscard]] T const&  get() const& { return *reinterpret_cast<T const*>(data); }
    [[nodiscard]] T&&       get() && { return std::move(*reinterpret_cast<T*>(data)); }
    [[nodiscard]] T const&& get() const&& { return std::move(*reinterpret_cast<T const*>(data)); }
    [[nodiscard]] T&        operator*() & { return get(); }
    [[nodiscard]] T const&  operator*() const& { return get(); }
    [[nodiscard]] T&&       operator*() && { return std::move(get()); }
    [[nodiscard]] T const&& operator*() const&& { return std::move(get()); }
    [[nodiscard]] operator T&() { return get(); }
    [[nodiscard]] operator T const&() const { return get(); }
};

template <size_t A, size_t S, class T>
struct TypedStorageType {
    using Type = typename TypedStorageImpl<A, S, typename std::remove_cv_t<T>>;
};
template <size_t A, size_t S, class T>
    requires(std::is_reference_v<T> || std::is_scalar_v<T>)
struct TypedStorageType<A, S, T> {
    using Type = T;
};
template <size_t A, size_t S, class T>
struct TypedStorageType<A, S, gsl::not_null<T>> {
    using Type = gsl::not_null<T>;
};
template <size_t A, size_t S, class T>
struct TypedStorageType<A, S, std::unique_ptr<T>> {
    using Type = std::unique_ptr<T>;
};
template <size_t A, size_t S, class T>
struct TypedStorageType<A, S, std::shared_ptr<T>> {
    using Type = std::shared_ptr<T>;
};
template <size_t A, size_t S, class T>
struct TypedStorageType<A, S, std::weak_ptr<T>> {
    using Type = std::weak_ptr<T>;
};
template <size_t A, size_t S, class T, size_t N>
struct TypedStorageType<A, S, T[N]> {
    using Type = TypedStorageType<A, S / N, T>::Type[N];
};

template <size_t A, size_t S, class T>
using TypedStorage = TypedStorageType<A, S, T>::Type;

} // namespace ll
