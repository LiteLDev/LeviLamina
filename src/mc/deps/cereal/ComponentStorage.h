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
    // prevent constructor by default
    ComponentStorage& operator=(ComponentStorage const&);
    ComponentStorage(ComponentStorage const&);
    ComponentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool eraseComponent(::std::string_view name);

    MCAPI ::entt::meta_any getComponent(::std::string_view name);

    MCAPI bool hasComponent(::std::string_view name) const;

    MCAPI ::cereal::ComponentStorage& operator=(::cereal::ComponentStorage&&);

    MCAPI bool operator==(::cereal::ComponentStorage const& other) const;
    // NOLINTEND
};

} // namespace cereal
