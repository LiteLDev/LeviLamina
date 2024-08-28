#pragma once

#include <memory>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/data/TightPair.h"

namespace ll::data {

template <class T>
struct defaultCopy {
    constexpr defaultCopy() noexcept = default;
    constexpr defaultCopy(defaultCopy const&) noexcept {}

    constexpr T* operator()(T const& t) const noexcept { return new T(t); }
};
template <class T>
struct polymorphicCopy {
    using Fn = void*(void const*);
    Fn* ctor;
    constexpr polymorphicCopy() noexcept
    : ctor(+[](void const* t) -> void* { return new T(*reinterpret_cast<T const*>(t)); }) {}
    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr polymorphicCopy(polymorphicCopy<U> const& other) noexcept : ctor(other.ctor) {}

    T* operator()(T const& t) const noexcept { return reinterpret_cast<T*>(ctor(&t)); }
};
template <class T>
struct virtualCloneCopy {
    constexpr virtualCloneCopy() noexcept = default;
    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    constexpr virtualCloneCopy(virtualCloneCopy<U> const&) noexcept {}
    constexpr T* operator()(T const& t) const noexcept { return static_cast<T*>(t.clone().release()); }
};

template <class T, class CopyCtor, class Deleter = std::default_delete<T>>
class IndirectValue {
    template <class U, class C2, class D2>
    friend class IndirectValue;

    data::TightPair<CopyCtor, std::unique_ptr<T, Deleter>> storage;

    constexpr auto&       unique() noexcept { return storage.second(); }
    constexpr auto const& unique() const noexcept { return storage.second(); }

public:
    constexpr T*       get() noexcept { return unique().get(); }
    constexpr T const* get() const noexcept { return unique().get(); }

    constexpr CopyCtor&       getCopyCtor() noexcept { return storage.first(); }
    constexpr CopyCtor const& getCopyCtor() const noexcept { return storage.first(); }

    constexpr Deleter&       getDeleter() noexcept { return unique().get_deleter(); }
    constexpr Deleter const& getDeleter() const noexcept { return unique().get_deleter(); }

    constexpr T* release() noexcept { return unique().release(); }

    constexpr void reset(T* ptr = nullptr, CopyCtor const& copy = CopyCtor{}) noexcept {
        getCopyCtor() = copy;
        return unique().reset(ptr);
    }

    constexpr explicit operator bool() const noexcept { return get(); }

    template <class... Args>
    constexpr T& emplace(Args&&... args) {
        reset(new T(std::forward<Args>(args)...));
        return *get();
    }

private:
    std::unique_ptr<T, Deleter> clone() const noexcept {
        if (get()) {
            return std::unique_ptr<T, Deleter>{getCopyCtor()(*get()), getDeleter()};
        }
        return std::unique_ptr<T, Deleter>{nullptr, getDeleter()};
    }

public:
    constexpr IndirectValue(std::nullptr_t) noexcept {}

    constexpr IndirectValue(T* ptr) noexcept : storage(data::zeroThenVariadicArgs, ptr) {}

    constexpr IndirectValue() noexcept {}

    template <class... Args>
    constexpr IndirectValue(std::in_place_t, Args&&... args)
    : storage(data::zeroThenVariadicArgs, new T(std::forward<Args>(args)...)) {}

    constexpr IndirectValue(IndirectValue const& other) noexcept(std::is_nothrow_copy_constructible_v<T>)
    : storage(data::oneThenVariadicArgs, other.getCopyCtor(), other.clone()) {}

    template <class U, class C2, class D2>
        requires(std::is_convertible_v<U*, T*> && std::is_constructible_v<CopyCtor, C2 const&>)
    constexpr IndirectValue(IndirectValue<U, C2, D2> const& other) noexcept(std::is_nothrow_copy_constructible_v<U>)
    : storage(data::oneThenVariadicArgs, other.getCopyCtor(), other.clone()) {}

    constexpr IndirectValue(IndirectValue&& other) noexcept
    : storage(data::oneThenVariadicArgs, std::move(other.getCopyCtor()), std::move(other.unique())) {}

    template <class U, class C2, class D2>
        requires(std::is_convertible_v<U*, T*> && std::is_constructible_v<CopyCtor, C2 &&>)
    constexpr IndirectValue(IndirectValue<U, C2, D2>&& other) noexcept
    : storage(data::oneThenVariadicArgs, std::move(other.getCopyCtor()), std::move(other.unique())) {}

    constexpr IndirectValue& operator=(IndirectValue const& other) noexcept(std::is_nothrow_copy_constructible_v<T>) {
        if (std::addressof(other) == this) {
            return *this;
        }
        unique()      = other.clone();
        getCopyCtor() = other.getCopyCtor();
        return *this;
    }
    template <class U, class C2, class D2>
        requires(std::is_convertible_v<U*, T*> && std::is_constructible_v<CopyCtor, C2 const&>)
    constexpr IndirectValue& operator=(IndirectValue<U, C2, D2> const& other
    ) noexcept(std::is_nothrow_copy_constructible_v<U>) {
        if constexpr (std::is_same_v<U, T>) {
            if (std::addressof(other) == this) {
                return *this;
            }
        }
        unique()      = other.clone();
        getCopyCtor() = other.getCopyCtor();
        return *this;
    }

    constexpr IndirectValue& operator=(IndirectValue&& other) noexcept {
        if (std::addressof(other) == this) {
            return *this;
        }
        unique()      = std::move(other.unique());
        getCopyCtor() = std::move(other.getCopyCtor());
        return *this;
    }
    template <class U, class C2, class D2>
        requires(std::is_convertible_v<U*, T*> && std::is_constructible_v<CopyCtor, C2 const&>)
    constexpr IndirectValue& operator=(IndirectValue<U, C2, D2>&& other) noexcept {
        if constexpr (std::is_same_v<U, T>) {
            if (std::addressof(other) == this) {
                return *this;
            }
        }
        unique()      = std::move(other.unique());
        getCopyCtor() = std::move(other.getCopyCtor());
        return *this;
    }

    [[nodiscard]] constexpr T*        operator->() noexcept { return get(); }
    [[nodiscard]] constexpr T const*  operator->() const noexcept { return get(); }
    [[nodiscard]] constexpr T&        operator*() & noexcept { return *get(); }
    [[nodiscard]] constexpr T const&  operator*() const& noexcept { return *get(); }
    [[nodiscard]] constexpr T&&       operator*() && noexcept { return std::forward<T>(*get()); }
    [[nodiscard]] constexpr T const&& operator*() const&& noexcept { return std::forward<T const>(*get()); }
};
template <class T, class C, class D>
[[nodiscard]] constexpr bool operator==(IndirectValue<T, C, D> const& lhs, IndirectValue<T, C, D> const& rhs) {
    return lhs.get() == rhs.get();
}
template <class T, class C, class D>
[[nodiscard]] constexpr auto operator<=>(IndirectValue<T, C, D> const& lhs, IndirectValue<T, C, D> const& rhs) {
    return lhs.get() <=> rhs.get();
}
template <class T, class C, class D>
[[nodiscard]] constexpr bool operator==(IndirectValue<T, C, D> const& lhs, std::nullptr_t) {
    return lhs.get() == nullptr;
}
template <class T, class C, class D>
[[nodiscard]] constexpr auto operator<=>(IndirectValue<T, C, D> const& lhs, std::nullptr_t) {
    return lhs.get() <=> nullptr;
}
} // namespace ll::data

namespace std {
template <class T, class C, class D>
struct hash<::ll::data::IndirectValue<T, C, D>> {
    std::size_t operator()(::ll::data::IndirectValue<T, C, D> const& value) const { return hash<T*>{}(value.get()); }
};
} // namespace std

namespace ll {
template <class T, class D = std::default_delete<T>>
using Indirect = data::IndirectValue<T, data::defaultCopy<T>, D>;

template <
    class T,
    class C =
        std::conditional_t<concepts::is_virtual_cloneable_v<T>, data::virtualCloneCopy<T>, data::polymorphicCopy<T>>,
    class D = std::default_delete<T>>
using Polymorphic = data::IndirectValue<T, C, D>;

template <class T, class... Args>
Indirect<T> makeIndirect(Args&&... args) {
    return Indirect<T>(new T(std::forward<Args>(args)...));
}

template <class T, class... Args>
Polymorphic<T> makePolymorphic(Args&&... args) {
    return Polymorphic<T>(new T(std::forward<Args>(args)...));
}
} // namespace ll
