#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAccessibilityProvider;
struct LocalWorldInfo;
namespace OreUI { class AllowListPath; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct LocalWorldData; }
namespace World { class LocalWorldList; }
// clang-format on

namespace OreUI {

class LocalWorldListFacet : public ::OreUI::FacetBase<::OreUI::LocalWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>                     mLocalWorldList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>     mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mAccessibilityProvider;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::LocalWorldData>>                         mLocalWorlds;
    ::ll::TypedStorage<1, 1, bool> mOtherStorageContainsWorlds;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~LocalWorldListFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldListFacet(
        ::std::shared_ptr<::World::LocalWorldList>                     localWorldList,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> accessibilityProvider
    );

    MCAPI ::OreUI::AllowListPath _getWorldPreviewImage(::LocalWorldInfo const& worldInfo) const;

    MCAPI ::OreUI::LocalWorldData _makeLocalWorld(::LocalWorldInfo const& worldInfo) const;

    MCAPI ::std::vector<::OreUI::LocalWorldData> _readLocalWorlds() const;

    MCFOLD ::std::vector<::OreUI::LocalWorldData> const& getLocalWorlds() const;

    MCFOLD bool getOtherStorageContainsWorlds() const;
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
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> accessibilityProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
