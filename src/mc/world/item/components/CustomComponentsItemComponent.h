#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ComponentStorageIterator.h"
#include "mc/platform/brstd/associative_adapter.h"
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/item/components/ItemCustomComponentData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
namespace SharedTypes::v1_26_30 { struct ItemCustomComponent; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ComponentStorageSentinelType; }
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
public:
    // CustomComponentsItemComponent inner types define
    using LegacyCustomComponents = ::SharedTypes::v1_21_60::CustomComponentsItemComponent;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemCustomComponentData>> mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomComponentsItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CustomComponentsItemComponent(
        ::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component
    );

    MCAPI explicit CustomComponentsItemComponent(
        ::entt::iterable_adaptor<
            ::cereal::internal::ComponentStorageIterator<
                ::brstd::associative_adapter<
                    ::std::string,
                    ::entt::meta_any,
                    ::std::less<void>,
                    ::std::vector<::std::string>,
                    ::std::vector<::entt::meta_any>>::
                    iterator_impl<
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::entt::meta_any>>>,
                        ::std::pair<::std::string const&, ::entt::meta_any&>>,
                ::SharedTypes::v1_26_30::ItemCustomComponent>,
            ::cereal::ComponentStorageSentinelType> customComponentsData
    );

    MCAPI void _addComponent(::HashedString compName, ::cereal::DynamicValue data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component);

    MCAPI void* $ctor(
        ::entt::iterable_adaptor<
            ::cereal::internal::ComponentStorageIterator<
                ::brstd::associative_adapter<
                    ::std::string,
                    ::entt::meta_any,
                    ::std::less<void>,
                    ::std::vector<::std::string>,
                    ::std::vector<::entt::meta_any>>::
                    iterator_impl<
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::entt::meta_any>>>,
                        ::std::pair<::std::string const&, ::entt::meta_any&>>,
                ::SharedTypes::v1_26_30::ItemCustomComponent>,
            ::cereal::ComponentStorageSentinelType> customComponentsData
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
