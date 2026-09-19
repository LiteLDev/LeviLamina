#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

namespace cereal {

class ComponentStorage {
public:
    // ComponentStorage inner types define
    using KeyIterable = ::entt::iterable_adaptor<
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>>;

    using StorageType = ::brstd::flat_map<
        ::std::string,
        ::entt::meta_any,
        ::std::less<void>,
        ::std::vector<::std::string>,
        ::std::vector<::entt::meta_any>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::string,
            ::entt::meta_any,
            ::std::less<void>,
            ::std::vector<::std::string>,
            ::std::vector<::entt::meta_any>>>
        mComponents;
    // NOLINTEND

public:
    [[nodiscard]] KeyIterable keys() const {
        return KeyIterable{mComponents->keys().begin(), mComponents->keys().end()};
    }

    /// The reference points into the stored component, so it stays valid as long as the
    /// storage does; the `meta_any` returned by the non-template overload is only a handle.
    template <class T>
    [[nodiscard]] T const& getComponent(::std::string_view name) const {
        return this->getComponent(name).template cast<T const&>();
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool eraseComponent(::std::string_view name);

    MCAPI ::entt::meta_any getComponent(::std::string_view name);

    MCAPI ::entt::meta_any getComponent(::std::string_view name) const;

    MCAPI bool operator==(::cereal::ComponentStorage const& other) const;

    MCAPI ~ComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
