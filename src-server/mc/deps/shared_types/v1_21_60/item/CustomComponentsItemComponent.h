#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 32> mUnkfb4a48;
        ::ll::UntypedStorage<8, 72> mUnk193411;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentData& operator=(ComponentData const&);
        ComponentData(ComponentData const&);
        ComponentData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ComponentData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnka35a0f;
    ::ll::UntypedStorage<8, 24> mUnkd67b69;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomComponentsItemComponent& operator=(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_80::CustomComponentsItemComponent>& oldComp,
        ::std::optional<::SharedTypes::v1_21_60::CustomComponentsItemComponent>& newComp
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
