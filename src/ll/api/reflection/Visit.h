#pragma once

#include <span>

#include "ll/api/reflection/Reflection.h"

namespace ll::reflection {

template <Reflectable T, class F>
inline auto visit(std::span<std::string_view>, T&&, F&&) -> std::invoke_result_t<F, std::nullptr_t>;

template <class T, class F>
inline auto visit(std::span<std::string_view>, T&&, F&&) -> std::invoke_result_t<F, std::nullptr_t>;

template <concepts::Associative T, class F>
inline auto visit(std::span<std::string_view>, T&&, F&&) -> std::invoke_result_t<F, std::nullptr_t>
    requires(concepts::IsString<typename T::key_type>);

template <concepts::IsOptional T, class F>
inline auto visit(std::span<std::string_view>, T&&, F&&) -> std::invoke_result_t<F, std::nullptr_t>;

template <concepts::IsDispatcher T, class F>
inline auto visit(std::span<std::string_view>, T&&, F&&) -> std::invoke_result_t<F, std::nullptr_t>;

template <Reflectable T, class F>
inline auto visit(std::span<std::string_view> seq, T&& obj, F&& func) -> std::invoke_result_t<F, std::nullptr_t> {
    if (seq.empty()) {
        return std::forward<F>(func)(std::forward<T>(obj));
    }
    std::string_view front = seq.front();
    seq                    = seq.subspan(1);
    bool contains          = false;
    using Ret              = std::invoke_result_t<F, std::nullptr_t>;
    if constexpr (std::is_void_v<Ret>) {
        forEachMember(std::forward<T>(obj), [&, func = std::forward<F>(func)](std::string_view name, auto&& member) {
            if (front == name) {
                contains = true;
                return visit(seq, std::forward<decltype(member)>(member), func);
            }
        });
    } else {
        std::optional<Ret> res;
        forEachMember(std::forward<T>(obj), [&, func = std::forward<F>(func)](std::string_view name, auto&& member) {
            if (front == name) {
                contains = true;
                res      = visit(seq, std::forward<decltype(member)>(member), func);
                return;
            }
        });
        if (contains) {
            return *res;
        }
    }
    if (!contains) {
        return std::forward<F>(func)(nullptr);
    }
}

template <class T, class F>
inline auto visit(std::span<std::string_view> seq, T&& obj, F&& func) -> std::invoke_result_t<F, std::nullptr_t> {
    if (seq.empty()) {
        return std::forward<F>(func)(std::forward<T>(obj));
    } else {
        return std::forward<F>(func)(nullptr);
    }
}

template <concepts::Associative T, class F>
inline auto visit(std::span<std::string_view> seq, T&& map, F&& func) -> std::invoke_result_t<F, std::nullptr_t>
    requires(concepts::IsString<typename T::key_type>)
{
    if (seq.empty()) {
        return std::forward<F>(func)(std::forward<T>(map));
    }
    std::string front{seq.front()};
    seq = seq.subspan(1);
    if (std::forward<T>(map).contains(front)) {
        return visit(seq, std::forward<T>(map)[front], std::forward<F>(func));
    }
    return std::forward<F>(func)(nullptr);
}

template <concepts::IsOptional T, class F>
inline auto visit(std::span<std::string_view> seq, T&& opt, F&& func) -> std::invoke_result_t<F, std::nullptr_t> {
    if (seq.empty() && std::forward<T>(opt)) {
        return visit(seq, *std::forward<T>(opt), std::forward<F>(func));
    }
    return std::forward<F>(func)(nullptr);
}

template <concepts::IsDispatcher T, class F>
inline auto visit(std::span<std::string_view> seq, T&& d, F&& func) -> std::invoke_result_t<F, std::nullptr_t> {
    auto res = visit(seq, std::forward<T>(d).storage, std::forward<F>(func));
    std::forward<T>(d).call();
    return res;
}
} // namespace ll::reflection