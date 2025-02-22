#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include <type_traits>
#include <variant>

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

    ValueOrRef(const ValueOrRef& other) = delete;

    ValueOrRef(ValueOrRef&& other) noexcept
    : is_pointer_(other.is_pointer_),
      variant_(other.is_pointer_ ? Variant(other.variant_.pointer) : Variant(std::move(other.variant_.value))) {}

    T& value() noexcept { return is_pointer_ ? *variant_.pointer : variant_.value; }

    const T& value() const noexcept { return is_pointer_ ? *variant_.pointer : variant_.value; }

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
    const bool is_pointer_;
};
} // namespace Details

template <typename... Xs>
class EventVariantImpl {
    using variant_t = std::variant<Details::ValueOrRef<Xs>...>;

public:
    template <typename T>
    EventVariantImpl(std::reference_wrapper<T> event) : variant_{std::in_place_type<Details::ValueOrRef<T>>, event} {}

    EventVariantImpl(const EventVariantImpl& other)
    : variant_(const_cast<EventVariantImpl&>(other).visit([](auto&& arg) -> variant_t {
          using T = std::remove_reference_t<decltype(arg.value())>;
          if constexpr (std::is_const_v<T>) {
              return variant_t{std::in_place_type<Details::ValueOrRef<T>>, std::cref(arg.value())};
          } else {
              return variant_t{std::in_place_type<Details::ValueOrRef<T>>, std::ref(arg.value())};
          }
      })) {}

    template <typename F>
    auto visit(F&& visitor) {
        return std::visit(std::forward<F>(visitor), variant_);
    }

    template <typename F>
    auto visit(F&& visitor) const {
        return std::visit(std::forward<F>(visitor), variant_);
    }

private:
    variant_t variant_;
};

template <typename... Events>
using ConstEventVariant = EventVariantImpl<std::add_const_t<Events>...>;

template <typename... Events>
using MutableEventVariant = EventVariantImpl<Events...>;
