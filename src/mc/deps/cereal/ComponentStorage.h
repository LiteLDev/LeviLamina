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
    // member functions
    // NOLINTBEGIN
    MCFOLD bool empty() const;

    MCAPI bool eraseComponent(::std::string_view name);

    MCAPI ::entt::meta_any getComponent(::std::string_view name);

    MCAPI ::entt::meta_any getComponent(::std::string_view name) const;

    MCAPI bool hasComponent(::std::string_view name) const;

    MCFOLD ::entt::iterable_adaptor<
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>>
    keys() const;

    MCAPI bool operator==(::cereal::ComponentStorage const& other) const;

    MCFOLD uint64 size() const;

    MCAPI ~ComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
