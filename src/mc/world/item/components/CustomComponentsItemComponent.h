#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
struct ItemCustomComponentData;
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
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

    MCAPI void finalize(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache);

    MCFOLD ::std::vector<::ItemCustomComponentData> const& getComponents() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();

    MCFOLD static ::SemVersion getV2ReleaseVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
