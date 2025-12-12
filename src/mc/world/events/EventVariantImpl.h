#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/details/ValueOrRef.h"

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
