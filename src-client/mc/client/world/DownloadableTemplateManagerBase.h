#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IDlcBatcher;
struct IContentAcquisition;
struct IStoreCatalogRepository;
// clang-format on

namespace World {

class DownloadableTemplateManagerBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>         mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDlcBatcher>> mDLCBatcher;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)>>>
                                                     mDownloadCallbacks;
    ::ll::TypedStorage<1, 1, bool>                   mCancelDownloadRequestedByUser;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAquisition;
    // NOLINTEND

public:
    // prevent constructor by default
    DownloadableTemplateManagerBase& operator=(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DownloadableTemplateManagerBase() /*override*/;

    virtual ::std::optional<::World::DownloadWorldTemplateError> downloadWorldTemplate(
        ::std::string const&                                                        templateId,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    );

    virtual void _templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DownloadableTemplateManagerBase(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::IContentAcquisition&                                   contentAquisition
    );

    MCAPI void _notifyDownloadCallbackAndRelease(
        ::std::string const&                                 templateId,
        ::std::optional<::World::DownloadWorldTemplateError> error
    );

    MCAPI void cancelDownload(::std::string const& templateId);

    MCAPI float getDownloadProgress(::std::string const& templateId) const;

    MCAPI ::std::string getDownloadTotalBytes(::std::string const& templateId) const;

    MCAPI ::std::string getDownloadingProgressBytes(::std::string const& templateId) const;

    MCAPI bool isDownloadingStep2Started(::std::string const& templateId) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::IContentAcquisition&                                   contentAquisition
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
    MCAPI ::std::optional<::World::DownloadWorldTemplateError> $downloadWorldTemplate(
        ::std::string const&                                                        templateId,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    );

    MCAPI void $_templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
