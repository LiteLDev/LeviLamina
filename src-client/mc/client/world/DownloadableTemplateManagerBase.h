#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatcher;
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
    virtual ~DownloadableTemplateManagerBase() /*override*/ = default;

    virtual ::std::optional<::World::DownloadWorldTemplateError> downloadWorldTemplate(
        ::std::string const&,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)>
    );

    virtual void _templateDownloadedCallback(::std::string const&, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canDownloadBeCancelled(::std::string const& templateId) const;

    MCAPI void cancelDownload(::std::string const& templateId);

    MCAPI float getDownloadProgress(::std::string const& templateId) const;

    MCAPI ::std::string getDownloadTotalBytes(::std::string const& templateId) const;

    MCAPI ::std::string getDownloadingProgressBytes(::std::string const& templateId) const;

    MCAPI bool isDownloadingStep2Started(::std::string const& templateId) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
