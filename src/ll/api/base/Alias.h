#pragma once

#include <bit>
#include <cstddef>
#include <type_traits>
#include <utility>

namespace ll {

template <size_t Size>
struct UntypedStorage {
    std::byte data[Size];

    template <class T>
    [[nodiscard]] T& as() & {
        return *reinterpret_cast<T*>(data);
    }
    template <class T>
    [[nodiscard]] T const& as() const& {
        return *reinterpret_cast<T const*>(data);
    }
    template <class T>
    [[nodiscard]] T&& as() && {
        return std::move(*reinterpret_cast<T*>(data));
    }
    template <class T>
    [[nodiscard]] T const&& as() const&& {
        return std::move(*reinterpret_cast<T const*>(data));
    }
};

template <size_t Size, class T>
struct TypedStorage {
    std::byte data[Size];

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
};

} // namespace ll
