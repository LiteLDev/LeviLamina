#pragma once

#include "ll/api/base/TypeTraits.h"

namespace brstd {

template <auto V>
struct nontype_t {
    explicit nontype_t() = default;
};

template <auto V>
constexpr nontype_t<V> nontype{};

template <class T>
constexpr bool is_nontype_v = false;
template <auto f>
constexpr bool is_nontype_v<nontype_t<f>> = true;

template <class T>
using transform_param_t = std::conditional_t<std::is_trivially_copyable_v<T>, T, std::add_rvalue_reference_t<T>>;

template <class R, class F, class... Args>
    requires std::is_invocable_r_v<R, F, Args...>
constexpr R invoke_r(F&& f, Args&&... args) noexcept(std::is_nothrow_invocable_r_v<R, F, Args...>) {
    if constexpr (std::is_void_v<R>) std::invoke(std::forward<F>(f), std::forward<Args>(args)...);
    else return std::invoke(std::forward<F>(f), std::forward<Args>(args)...);
}

struct function_ref_base {
    union storage {
        void*       p_ = nullptr;
        void const* cp_;
        void (*fp_)();

        constexpr storage() noexcept = default;

        template <class T>
            requires std::is_object_v<T>
        constexpr explicit storage(T* p) noexcept : p_(p) {}

        template <class T>
            requires std::is_object_v<T>
        constexpr explicit storage(T const* p) noexcept : cp_(p) {}

        template <class T>
            requires std::is_function_v<T>
        constexpr explicit storage(T* p) noexcept : fp_(reinterpret_cast<decltype(fp_)>(p)) {}
    };

    template <class T>
    static constexpr auto get(storage obj) {
        if constexpr (std::is_const_v<T>) return static_cast<T*>(obj.cp_);
        else if constexpr (std::is_object_v<T>) return static_cast<T*>(obj.p_);
        else return reinterpret_cast<T*>(obj.fp_);
    }
};

template <class Sig, class = typename ::ll::traits::function_traits<Sig>::function_type>
class function_ref;

template <class Sig, class R, class... Args>
class function_ref<Sig, R(Args...)> : function_ref_base {
    using signature = ::ll::traits::function_traits<Sig>;

    template <class T>
    using cv = typename signature::template cvref<T>;
    template <class T>
    using cvref                = cv<T>&;
    static constexpr bool noex = signature::is_noexcept;

    template <class... T>
    static constexpr bool is_invocable_using =
        noex ? std::is_nothrow_invocable_r_v<R, T..., Args...> : std::is_invocable_r_v<R, T..., Args...>;

    using fwd_t   = R(storage, transform_param_t<Args>...) noexcept(noex);
    fwd_t*  fptr_ = nullptr;
    storage obj_;

public:
    template <class F>
    function_ref(F* f) noexcept
        requires std::is_function_v<F> && is_invocable_using<F>
    : fptr_([](storage fn_, transform_param_t<Args>... args) noexcept(noex) -> R {
          if constexpr (std::is_void_v<R>) get<F>(fn_)(static_cast<decltype(args)>(args)...);
          else return get<F>(fn_)(static_cast<decltype(args)>(args)...);
      }),
      obj_(f) {}

    template <class F, class T = std::remove_reference_t<F>>
    constexpr function_ref(F&& f) noexcept
        requires(!std::is_same_v<std::remove_cvref_t<F>, function_ref> && !std::is_member_pointer_v<T>
                 && is_invocable_using<cvref<T>>)
    : fptr_([](storage fn_, transform_param_t<Args>... args) noexcept(noex) -> R {
          cvref<T> obj = *get<T>(fn_);
          if constexpr (std::is_void_v<R>) obj(static_cast<decltype(args)>(args)...);
          else return obj(static_cast<decltype(args)>(args)...);
      }),
      obj_(std::addressof(f)) {}

    constexpr function_ref(function_ref const&) noexcept            = default;
    constexpr function_ref& operator=(function_ref const&) noexcept = default;

    template <class T>
    function_ref& operator=(T)
        requires(!std::is_same_v<std::remove_cvref_t<T>, function_ref> && !std::is_pointer_v<T> && !is_nontype_v<T>)
    = delete;

    template <auto f>
    constexpr function_ref(nontype_t<f>) noexcept
        requires is_invocable_using<decltype(f)>
    : fptr_([](storage, transform_param_t<Args>... args) noexcept(noex) -> R {
          return invoke_r<R>(f, static_cast<decltype(args)>(args)...);
      }) {
        using F = decltype(f);
        if constexpr (std::is_pointer_v<F> or std::is_member_pointer_v<F>)
            static_assert(f != nullptr, "NTTP callable must be usable");
    }

    template <auto f, class U, class T = std::remove_reference_t<U>>
    constexpr function_ref(nontype_t<f>, U&& obj) noexcept
        requires(!std::is_rvalue_reference_v<U &&> && is_invocable_using<decltype(f), cvref<T>>)
    : fptr_([](storage this_, transform_param_t<Args>... args) noexcept(noex) -> R {
          cvref<T> obj = *get<T>(this_);
          return invoke_r<R>(f, obj, static_cast<decltype(args)>(args)...);
      }),
      obj_(std::addressof(obj)) {
        using F = decltype(f);
        if constexpr (std::is_pointer_v<F> or std::is_member_pointer_v<F>)
            static_assert(f != nullptr, "NTTP callable must be usable");
    }

    template <auto f, class T>
    constexpr function_ref(nontype_t<f>, cv<T>* obj) noexcept
        requires is_invocable_using<decltype(f), decltype(obj)>
    : fptr_([](storage this_, transform_param_t<Args>... args) noexcept(noex) -> R {
          return invoke_r<R>(f, get<cv<T>>(this_), static_cast<decltype(args)>(args)...);
      }),
      obj_(obj) {
        using F = decltype(f);
        if constexpr (std::is_pointer_v<F> or std::is_member_pointer_v<F>)
            static_assert(f != nullptr, "NTTP callable must be usable");
    }

    constexpr R operator()(Args... args) const noexcept(noex) { return fptr_(obj_, std::forward<Args>(args)...); }
};

template <class F>
    requires std::is_function_v<F>
function_ref(F*) -> function_ref<F>;

template <auto V>
function_ref(nontype_t<V>) -> function_ref<std::remove_pointer_t<decltype(V)>>;

template <class F, class T>
struct nontype_obj_deduction_guide;

template <class T, class R, class G, class... Args>
struct nontype_obj_deduction_guide<R (*)(G, Args...), T> {
    using type = R(Args...);
};

template <class T, class R, class G, class... Args>
struct nontype_obj_deduction_guide<R (*)(G, Args...) noexcept, T> {
    using type = R(Args...) noexcept;
};

template <class T, class M, class G>
    requires std::is_object_v<M>
struct nontype_obj_deduction_guide<M G::*, T> {
    using type = std::invoke_result_t<M G::*, T>();
};

template <class T, class M, class G>
    requires std::is_function_v<M>
struct nontype_obj_deduction_guide<M G::*, T> {
    using type = typename ::ll::traits::function_traits<M>::function_type_noexcept;
};

template <auto V, class T>
function_ref(nontype_t<V>, T&&) -> function_ref<typename nontype_obj_deduction_guide<decltype(V), T&>::type>;

} // namespace brstd
