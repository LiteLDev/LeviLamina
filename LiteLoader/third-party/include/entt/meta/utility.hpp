#ifndef ENTT_META_UTILITY_HPP
#define ENTT_META_UTILITY_HPP


#include <cstddef>
#include <functional>
#include <type_traits>
#include <utility>
#include "../config/config.h"
#include "../core/type_traits.hpp"
#include "meta.hpp"
#include "node.hpp"
#include "policy.hpp"


namespace entt {


/*! @brief Primary template isn't defined on purpose. */
template<typename, typename>
struct meta_function_descriptor;


/**
 * @brief Meta function descriptor.
 * @tparam Type Reflected type to which the meta function is associated.
 * @tparam Ret Function return type.
 * @tparam Class Actual owner of the member function.
 * @tparam Args Function arguments.
 */
template<typename Type, typename Ret, typename Class, typename... Args>
struct meta_function_descriptor<Type, Ret(Class:: *)(Args...) const> {
    /*! @brief Meta function return type. */
    using return_type = Ret;
    /*! @brief Meta function arguments. */
    using args_type = std::conditional_t<std::is_same_v<Type, Class>, type_list<Args...>, type_list<const Class &, Args...>>;

    /*! @brief True if the meta function is const, false otherwise. */
    static constexpr auto is_const = true;
    /*! @brief True if the meta function is static, false otherwise. */
    static constexpr auto is_static = !std::is_same_v<Type, Class>;
};


/**
 * @brief Meta function descriptor.
 * @tparam Type Reflected type to which the meta function is associated.
 * @tparam Ret Function return type.
 * @tparam Class Actual owner of the member function.
 * @tparam Args Function arguments.
 */
template<typename Type, typename Ret, typename Class, typename... Args>
struct meta_function_descriptor<Type, Ret(Class:: *)(Args...)> {
    /*! @brief Meta function return type. */
    using return_type = Ret;
    /*! @brief Meta function arguments. */
    using args_type = std::conditional_t<std::is_same_v<Type, Class>, type_list<Args...>, type_list<Class &, Args...>>;

    /*! @brief True if the meta function is const, false otherwise. */
    static constexpr auto is_const = false;
    /*! @brief True if the meta function is static, false otherwise. */
    static constexpr auto is_static = !std::is_same_v<Type, Class>;
};


/**
 * @brief Meta function descriptor.
 * @tparam Type Reflected type to which the meta function is associated.
 * @tparam Ret Function return type.
 * @tparam Args Function arguments.
 */
template<typename Type, typename Ret, typename... Args>
struct meta_function_descriptor<Type, Ret(*)(Args...)> {
    /*! @brief Meta function return type. */
    using return_type = Ret;
    /*! @brief Meta function arguments. */
    using args_type = type_list<Args...>;

    /*! @brief True if the meta function is const, false otherwise. */
    static constexpr auto is_const = false;
    /*! @brief True if the meta function is static, false otherwise. */
    static constexpr auto is_static = true;
};


/**
 * @brief Meta function helper.
 *
 * Converts a function type to be associated with a reflected type into its meta
 * function descriptor.
 *
 * @tparam Type Reflected type to which the meta function is associated.
 * @tparam Candidate The actual function to associate with the reflected type.
 */
template<typename Type, typename Candidate>
class meta_function_helper {
    template<typename Ret, typename... Args, typename Class>
    static constexpr meta_function_descriptor<Type, Ret(Class:: *)(Args...) const> get_rid_of_noexcept(Ret(Class:: *)(Args...) const);

    template<typename Ret, typename... Args, typename Class>
    static constexpr meta_function_descriptor<Type, Ret(Class:: *)(Args...)> get_rid_of_noexcept(Ret(Class:: *)(Args...));

    template<typename Ret, typename... Args>
    static constexpr meta_function_descriptor<Type, Ret(*)(Args...)> get_rid_of_noexcept(Ret(*)(Args...));

public:
    /*! @brief The meta function descriptor of the given function. */
    using type = decltype(get_rid_of_noexcept(std::declval<Candidate>()));
};


/**
 * @brief Helper type.
 * @tparam Type Reflected type to which the meta function is associated.
 * @tparam Candidate The actual function to associate with the reflected type.
 */
template<typename Type, typename Candidate>
using meta_function_helper_t = typename meta_function_helper<Type, Candidate>::type;


/**
 * @brief Returns the meta type of the i-th element of a list of arguments.
 * @tparam Args Actual types of arguments.
 * @return The meta type of the i-th element of the list of arguments.
 */
template<typename... Args>
[[nodiscard]] static meta_type meta_arg(type_list<Args...>, const std::size_t index) ENTT_NOEXCEPT {
    return internal::meta_arg_node(type_list<Args...>{}, index);
}


/**
 * @brief Constructs an instance given a list of erased parameters, if possible.
 * @tparam Type Actual type of the instance to construct.
 * @tparam Args Types of arguments expected.
 * @tparam Index Indexes to use to extract erased arguments from their list.
 * @param args Parameters to use to construct the instance.
 * @return A meta any containing the new instance, if any.
 */
template<typename Type, typename... Args, std::size_t... Index>
[[nodiscard]] meta_any meta_construct(meta_any * const args, std::index_sequence<Index...>) {
    if(((args+Index)->allow_cast<Args>() && ...)) {
        return Type{(args+Index)->cast<Args>()...};
    }

    return {};
}


/**
 * @brief Sets the value of a given variable.
 * @tparam Type Reflected type to which the variable is associated.
 * @tparam Data The actual variable to set.
 * @param instance An opaque instance of the underlying type, if required.
 * @param value Parameter to use to set the variable.
 * @return True in case of success, false otherwise.
 */
template<typename Type, auto Data>
[[nodiscard]] bool meta_setter([[maybe_unused]] meta_handle instance, [[maybe_unused]] meta_any value) {
    if constexpr(!std::is_same_v<decltype(Data), Type> && !std::is_same_v<decltype(Data), std::nullptr_t>) {
        if constexpr(std::is_function_v<std::remove_reference_t<std::remove_pointer_t<decltype(Data)>>>) {
            using data_type = type_list_element_t<1u, typename meta_function_helper_t<Type, decltype(Data)>::args_type>;

            if(auto * const clazz = instance->try_cast<Type>(); clazz && value.allow_cast<data_type>()) {
                Data(*clazz, value.cast<data_type>());
                return true;
            }
        } else if constexpr(std::is_member_function_pointer_v<decltype(Data)>) {
            using data_type = type_list_element_t<0u, typename meta_function_helper_t<Type, decltype(Data)>::args_type>;

            if(auto * const clazz = instance->try_cast<Type>(); clazz && value.allow_cast<data_type>()) {
                (clazz->*Data)(value.cast<data_type>());
                return true;
            }
        } else if constexpr(std::is_member_object_pointer_v<decltype(Data)>) {
            using data_type = std::remove_reference_t<decltype(std::declval<Type>().*Data)>;

            if constexpr(!std::is_array_v<data_type> && !std::is_const_v<data_type>) {
                if(auto * const clazz = instance->try_cast<Type>(); clazz && value.allow_cast<data_type>()) {
                    clazz->*Data = value.cast<data_type>();
                    return true;
                }
            }
        } else {
            using data_type = std::remove_reference_t<decltype(*Data)>;

            if constexpr(!std::is_array_v<data_type> && !std::is_const_v<data_type>) {
                if(value.allow_cast<data_type>()) {
                    *Data = value.cast<data_type>();
                    return true;
                }
            }
        }
    }

    return false;
}


/**
 * @brief Wraps a value depending on the given policy.
 * @tparam Policy Optional policy (no policy set by default).
 * @tparam Type Type of value to wrap.
 * @param value Value to wrap.
 * @return A meta any containing the returned value.
 */
template<typename Policy = as_is_t, typename Type>
meta_any meta_dispatch(Type &&value) {
    if constexpr(std::is_same_v<Policy, as_void_t>) {
        return meta_any{std::in_place_type<void>, std::forward<Type>(value)};
    } else if constexpr(std::is_same_v<Policy, as_ref_t>) {
        return meta_any{std::in_place_type<Type>, std::forward<Type>(value)};
    } else if constexpr(std::is_same_v<Policy, as_cref_t>) {
        static_assert(std::is_lvalue_reference_v<Type>, "Invalid type");
        return meta_any{std::in_place_type<const std::remove_reference_t<Type> &>, std::as_const(value)};
    } else {
        static_assert(std::is_same_v<Policy, as_is_t>, "Policy not supported");
        return meta_any{std::forward<Type>(value)};
    }
}


/**
 * @brief Gets the value of a given variable.
 * @tparam Type Reflected type to which the variable is associated.
 * @tparam Data The actual variable to get.
 * @tparam Policy Optional policy (no policy set by default).
 * @param instance An opaque instance of the underlying type, if required.
 * @return A meta any containing the value of the underlying variable.
 */
template<typename Type, auto Data, typename Policy = as_is_t>
[[nodiscard]] meta_any meta_getter([[maybe_unused]] meta_handle instance) {
    if constexpr(std::is_function_v<std::remove_reference_t<std::remove_pointer_t<decltype(Data)>>>) {
        auto * const clazz = instance->try_cast<std::conditional_t<std::is_invocable_v<decltype(Data), const Type &>, const Type, Type>>();
        return clazz ? meta_dispatch<Policy>(Data(*clazz)) : meta_any{};
    } else if constexpr(std::is_member_function_pointer_v<decltype(Data)>) {
        auto * const clazz = instance->try_cast<std::conditional_t<std::is_invocable_v<decltype(Data), const Type &>, const Type, Type>>();
        return clazz ? meta_dispatch<Policy>((clazz->*Data)()) : meta_any{};
    } else if constexpr(std::is_member_object_pointer_v<decltype(Data)>) {
        if constexpr(!std::is_array_v<std::remove_cv_t<std::remove_reference_t<decltype(std::declval<Type>().*Data)>>>) {
            if(auto * clazz = instance->try_cast<Type>(); clazz) {
                return meta_dispatch<Policy>(clazz->*Data);
            } else if(auto * fallback = instance->try_cast<const Type>(); fallback) {
                return meta_dispatch<Policy>(fallback->*Data);
            }
        }

        return meta_any{};
    } else if constexpr(std::is_pointer_v<decltype(Data)>) {
        if constexpr(std::is_array_v<std::remove_pointer_t<decltype(Data)>>) {
            return meta_any{};
        } else {
            return meta_dispatch<Policy>(*Data);
        }
    } else {
        return meta_dispatch<Policy>(Data);
    }
}


/**
 * @brief Invokes a function given a list of erased parameters, if possible.
 * @tparam Type Reflected type to which the function is associated.
 * @tparam Candidate The actual function to invoke.
 * @tparam Policy Optional policy (no policy set by default).
 * @tparam Index Indexes to use to extract erased arguments from their list.
 * @param instance An opaque instance of the underlying type, if required.
 * @param args Parameters to use to invoke the function.
 * @return A meta any containing the returned value, if any.
 */
template<typename Type, auto Candidate, typename Policy = as_is_t, std::size_t... Index>
[[nodiscard]] std::enable_if_t<!std::is_invocable_v<decltype(Candidate)>, meta_any> meta_invoke([[maybe_unused]] meta_handle instance, meta_any *args, std::index_sequence<Index...>) {
    using descriptor = meta_function_helper_t<Type, decltype(Candidate)>;

    const auto invoke = [](auto &&maybe_clazz, auto &&... other) {
        if constexpr(std::is_member_function_pointer_v<decltype(Candidate)>) {
            if constexpr(std::is_void_v<typename descriptor::return_type>) {
                (std::forward<decltype(maybe_clazz)>(maybe_clazz).*Candidate)(std::forward<decltype(other)>(other)...);
                return meta_any{std::in_place_type<void>};
            } else {
                return meta_dispatch<Policy>((std::forward<decltype(maybe_clazz)>(maybe_clazz).*Candidate)(std::forward<decltype(other)>(other)...));
            }
        } else {
            if constexpr(std::is_void_v<typename descriptor::return_type>) {
                Candidate(std::forward<decltype(maybe_clazz)>(maybe_clazz), std::forward<decltype(other)>(other)...);
                return meta_any{std::in_place_type<void>};
            } else {
                return meta_dispatch<Policy>(Candidate(std::forward<decltype(maybe_clazz)>(maybe_clazz), std::forward<decltype(other)>(other)...));
            }
        }
    };

    if constexpr(std::is_invocable_v<decltype(Candidate), const Type &, type_list_element_t<Index, typename descriptor::args_type>...>) {
        if(const auto * const clazz = instance->try_cast<const Type>(); clazz && ((args+Index)->allow_cast<type_list_element_t<Index, typename descriptor::args_type>>() && ...)) {
            return invoke(*clazz, (args+Index)->cast<type_list_element_t<Index, typename descriptor::args_type>>()...);
        }
    } else if constexpr(std::is_invocable_v<decltype(Candidate), Type &, type_list_element_t<Index, typename descriptor::args_type>...>) {
        if(auto * const clazz = instance->try_cast<Type>(); clazz && ((args+Index)->allow_cast<type_list_element_t<Index, typename descriptor::args_type>>() && ...)) {
            return invoke(*clazz, (args+Index)->cast<type_list_element_t<Index, typename descriptor::args_type>>()...);
        }
    } else {
        if(((args+Index)->allow_cast<type_list_element_t<Index, typename descriptor::args_type>>() && ...)) {
            return invoke((args+Index)->cast<type_list_element_t<Index, typename descriptor::args_type>>()...);
        }
    }

    return meta_any{};
}


/**
 * @brief Invokes a function given a list of erased parameters, if possible.
 * @tparam Type Reflected type to which the function is associated.
 * @tparam Candidate The actual function to invoke.
 * @tparam Policy Optional policy (no policy set by default).
 * @tparam Index Indexes to use to extract erased arguments from their list.
 * @return A meta any containing the returned value, if any.
 */
template<typename Type, auto Candidate, typename Policy = as_is_t, std::size_t... Index>
[[nodiscard]] std::enable_if_t<std::is_invocable_v<decltype(Candidate)>, meta_any> meta_invoke(meta_handle, meta_any *, std::index_sequence<Index...>) {
    if constexpr(std::is_void_v<decltype(Candidate())>) {
        Candidate();
        return meta_any{std::in_place_type<void>};
    } else {
        return meta_dispatch<Policy>(Candidate());
    }
}


}


#endif
