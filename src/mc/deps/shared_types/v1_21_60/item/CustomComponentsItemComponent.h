#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct CustomComponentsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CustomComponentsItemComponent {
public:
    // CustomComponentsItemComponent inner types declare
    // clang-format off
    struct ComponentData;
    // clang-format on

    // CustomComponentsItemComponent inner types define
    struct ComponentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>          name;
        ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> data;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ComponentData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCreatedFromJsonDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CustomComponentsItemComponent::ComponentData>>
        mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomComponentsItemComponent& operator=(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_60::CustomComponentsItemComponent&
    operator=(::SharedTypes::v1_21_60::CustomComponentsItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_80::CustomComponentsItemComponent>& oldComp,
        ::std::optional<::SharedTypes::v1_21_60::CustomComponentsItemComponent>& newComp
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
