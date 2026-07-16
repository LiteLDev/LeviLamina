#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/screens/models/WorldSeedCatalogModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class SeedTemplateFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::SeedTemplateFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 360, ::WorldSeedCatalogModel> mWorldSeedCatalogModel;
    // NOLINTEND

public:
    // prevent constructor by default
    SeedTemplateFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SeedTemplateFacet(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>                dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>             userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>                dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>             userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
