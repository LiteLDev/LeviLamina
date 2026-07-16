#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAccessibilityProvider;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct LocalWorldData; }
namespace World { class IWorldCloudSyncer; }
namespace World { class LocalWorldList; }
// clang-format on

namespace OreUI {

class LocalWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::LocalWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>                     mLocalWorldList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                                     mWorldCloudSyncer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>     mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mAccessibilityProvider;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::LocalWorldData>>                         mLocalWorlds;
    ::ll::TypedStorage<1, 1, bool> mOtherStorageContainsWorlds;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldListFacet& operator=(LocalWorldListFacet const&);
    LocalWorldListFacet(LocalWorldListFacet const&);
    LocalWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldListFacet(
        ::std::shared_ptr<::World::LocalWorldList>                     localWorldList,
        ::World::IWorldCloudSyncer&                                    worldCloudSyncer,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> accessibilityProvider
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
        ::std::shared_ptr<::World::LocalWorldList>                     localWorldList,
        ::World::IWorldCloudSyncer&                                    worldCloudSyncer,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> accessibilityProvider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
