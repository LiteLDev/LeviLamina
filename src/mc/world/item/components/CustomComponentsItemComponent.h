#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/item/components/ItemCustomComponentData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
namespace cereal { class DynamicValue; }
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CustomComponentsItemComponent();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
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
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
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
#endif
    // NOLINTEND
};
