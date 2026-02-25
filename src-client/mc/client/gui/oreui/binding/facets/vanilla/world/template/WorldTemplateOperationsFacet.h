#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/template/DownloadWorldTemplateStatus.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace World { class DownloadableTemplateManagerBase; }
namespace World { class MarketplacePassWorldTemplateManager; }
namespace World { class OwnedWorldTemplateManager; }
// clang-format on

namespace OreUI {

class WorldTemplateOperationsFacet : public ::OreUI::FacetBase<::OreUI::WorldTemplateOperationsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::World::DownloadableTemplateManagerBase>>
                                                                                    mActiveManagerForDownloads;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                              mExistenceTracker;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mActiveDownloadTemplateId;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDownloadProgressBytes;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDownloadTotalBytes;
    ::ll::TypedStorage<4, 4, float>                                                 mDownloadProgressPercent;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::DownloadWorldTemplateStatus>> mDownloadStatus;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::DownloadWorldTemplateError>> mDownloadTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::ImportFailure>>                     mImportTask;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mImportedPackName;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager>>
        mOwnedWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::World::MarketplacePassWorldTemplateManager>>
        mMarketplacePassWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateOperationsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~WorldTemplateOperationsFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplateOperationsFacet(
        ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager>           ownedWorldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::World::MarketplacePassWorldTemplateManager> marketplacePassWorldTemplateManager
    );

    MCAPI void _beginTemplateDownload();

    MCAPI void _updateDownloadProgress();

    MCAPI bool canDownloadBeCancelled();

    MCAPI void cancelDownload();

    MCAPI ::std::optional<::World::DownloadWorldTemplateError> downloadWorldTemplate(::std::string const& templateId);

    MCFOLD ::std::string const& getDownloadTotalBytes();

    MCFOLD ::std::string const& getDownloadingProgressBytes();

    MCFOLD float getDownloadingProgressPercent();

    MCAPI ::std::optional<::OreUI::DownloadWorldTemplateStatus> const& getDownloadingStatus();

    MCAPI ::std::optional<::World::DownloadWorldTemplateError> const& getDownloadingTaskResult();

    MCFOLD ::OreUI::FacetTaskState getDownloadingTaskState();

    MCFOLD ::std::string const& getImportedPackName();

    MCFOLD ::std::optional<::ImportFailure> const& getImportingTaskResult();

    MCFOLD ::OreUI::FacetTaskState getImportingTaskState();

    MCFOLD bool getIsTemplateScreenAvailable() const;

    MCAPI void importWorldTemplate();

    MCAPI void resetDownloadTask();

    MCAPI void resetImportTask();
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
        ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager>           ownedWorldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::World::MarketplacePassWorldTemplateManager> marketplacePassWorldTemplateManager
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
