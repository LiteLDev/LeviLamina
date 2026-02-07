#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/WorldSeedModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct ContentCatalogService;
namespace OreUI { struct IResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

class WorldSeedCatalogModel {
public:
    // WorldSeedCatalogModel inner types declare
    // clang-format off
    struct WorldSeedFilteredLookup;
    // clang-format on

    // WorldSeedCatalogModel inner types define
    struct WorldSeedFilteredLookup {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>      mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldSeedModel>>                                 mWorldSeedModels;
    ::ll::TypedStorage<8, 224, ::WorldSeedModel>                                               mInvalidWorldSeedModel;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mWorldSeedFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldSeedCatalogModel::WorldSeedFilteredLookup>> mFilteredWorldSeedModels;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentCatalogService>>                       mContentCatalogService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                         mExistenceTracker;
    ::ll::TypedStorage<1, 1, bool>                                                             mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                             mFailedToFetch;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedCatalogModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSeedCatalogModel(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>                dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );

    MCAPI void _filterWorldSeedModels();

    MCAPI void fetch();

    MCAPI void setWorldSeedsNameFilter(::std::string const& filter);

    MCAPI ~WorldSeedCatalogModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>                dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
