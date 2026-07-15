#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmsWorldPackEditor.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PendingPackAction.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Realms { class RealmsWorldPackEditor; }
namespace World { struct PackDetails; }
// clang-format on

namespace OreUI {

class RealmsWorldPackEditorQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldPackEditorQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                            mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor>> mRealmsWorldPackEditor;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>     mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                mCollectionDirtySub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mRealmsWorldPackEditorFetchStatusSub;
    ::ll::TypedStorage<4, 12, ::Realms::RealmsWorldPackEditor::FetchStatus> mRealmsWorldPackEditorFetchStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mRealmsWorldPackEditorSaveStatusSub;
    ::ll::TypedStorage<8, 56, ::Realms::RealmsWorldPackEditor::SaveStatus>  mRealmsWorldPackEditorSaveStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mRealmsWorldPackEditorPackContentChangedSub;
    ::ll::TypedStorage<1, 1, bool>                                          mIsPackContentChanged;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mSelectedResourcePackDetails;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mAvailableResourcePackDetails;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mMarketplacePassResourcePackDetails;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mSelectedBehaviorPackDetails;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mAvailableBehaviorPackDetails;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mMarketplacePassBehaviorPackDetails;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>          mGlobalResourcePackDetails;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPackApplicationErrorSub;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::PackActionError>>     mPackApplicationError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPendingPackActionSub;
    ::ll::TypedStorage<8, 88, ::std::optional<::World::PendingPackAction>>  mPendingPackAction;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mChangePackPriorityErrorSub;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::PackActionError>>     mChangePackPriorityError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mMarketplacePackDownloadStatusSub;
    ::ll::TypedStorage<8, 64, ::std::optional<::IMarketplacePackDownloader::MarketplacePackDownloadStatus>>
        mMarketplacePackDownloadStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackEditorQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackEditorQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsWorldPackEditorQueriesFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList
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
        ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
