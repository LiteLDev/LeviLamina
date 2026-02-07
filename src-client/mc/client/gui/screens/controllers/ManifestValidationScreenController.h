#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class MinecraftScreenModel;
class PackError;
class PackManifest;
class PackManifestFactory;
struct FileDeleteProgressHandler;
struct PackContentItem;
struct PackErrorInfo;
namespace Core { class Path; }
// clang-format on

class ManifestValidationScreenController : public ::MinecraftScreenController {
public:
    // ManifestValidationScreenController inner types define
    enum class IssueType : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                         mResourceLocation;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                          mOriginalPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackErrorInfo>>                             mErrorContent;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDeleting;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDoneValidating;
    ::ll::TypedStorage<1, 1, bool>                                                        mPackInUserDataPath;
    ::ll::TypedStorage<1, 1, bool>                                                        mShowCopyClipboard;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PackContentItem const>>                 mContentItem;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                      mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest>>                           mManifest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FileDeleteProgressHandler>>              mDeleteProgressHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestValidationScreenController& operator=(ManifestValidationScreenController const&);
    ManifestValidationScreenController(ManifestValidationScreenController const&);
    ManifestValidationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ManifestValidationScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onTerminate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ManifestValidationScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                         model,
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::ResourceLocation const&                                         resourceLocation,
        ::Core::Path const&                                               originalPath,
        bool                                                              packInUserDataPath,
        ::std::shared_ptr<::PackContentItem const> const&                 item
    );

    MCAPI ::std::string
    _colorLocString(::ManifestValidationScreenController::IssueType issue, ::std::string const& str) const;

    MCAPI void _delete();

    MCAPI void _finishValidation();

    MCAPI ::Core::PathBuffer<::std::string> const _generateBaseIconPath(::PackManifest const& manifest) const;

    MCAPI ::std::string _generateErrorContent(
        ::ManifestValidationScreenController::IssueType issueType,
        ::std::string const&                            header,
        ::PackError const&                              error
    ) const;

    MCAPI ::Core::PathBuffer<::std::string> const _generateIconPath(::PackManifest const& manifest) const;

    MCAPI ::Core::PathBuffer<::std::string> const _getIconPath() const;

    MCAPI ::Core::PathBuffer<::std::string> const _getIconZip() const;

    MCAPI ::std::string _getPackHeaderDescription() const;

    MCAPI ::std::string _getPackHeaderTitle() const;

    MCAPI ::std::string _getPackID() const;

    MCAPI ::std::string _getPackType() const;

    MCAPI ::std::string _getPackVersion() const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                         model,
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::ResourceLocation const&                                         resourceLocation,
        ::Core::Path const&                                               originalPath,
        bool                                                              packInUserDataPath,
        ::std::shared_ptr<::PackContentItem const> const&                 item
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
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onTerminate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
