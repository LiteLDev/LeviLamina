#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class LevelData;
class PlayScreenModel;
class ResourcePackManager;
class ToastManager;
struct LessonItem;
struct WorldFileDownloadManager;
// clang-format on

class EducationContentManagerScreenController : public ::MainMenuScreenController {
public:
    // EducationContentManagerScreenController inner types define
    enum class OptionalBehavior : uint {};

    using OnDownloadError = ::std::function<void()>;

    using OnLaunchSucceeded = ::std::function<void()>;

    using OnLaunchFailed = ::std::function<void()>;

    using OnLevelDataConstructed = ::std::function<void(::LevelData&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                       mPlayScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                    mOnDownloadError;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDownloadInProgress;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldFileDownloadManager>>              mWorldFileDownloadManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                  mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                      mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                       mEventing;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                             mToastManager;
    ::ll::TypedStorage<4, 4, ::EducationContentManagerScreenController::OptionalBehavior> mOptionalBehavior;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationContentManagerScreenController& operator=(EducationContentManagerScreenController const&);
    EducationContentManagerScreenController(EducationContentManagerScreenController const&);
    EducationContentManagerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationContentManagerScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EducationContentManagerScreenController(
        ::std::shared_ptr<::PlayScreenModel>                        model,
        ::std::function<void()>                                     onDownloadError,
        ::IResourcePackRepository&                                  rpr,
        ::ResourcePackManager&                                      rpm,
        ::IMinecraftEventing&                                       evt,
        ::ToastManager&                                             tm,
        ::EducationContentManagerScreenController::OptionalBehavior optionalBehavior
    );

    MCAPI void cancelWorldDownload();

    MCAPI void importWorld(::LessonItem& item);

    MCAPI void launchWorld(
        ::LessonItem&                              item,
        ::std::function<void()> const&             onLaunchSucceeded,
        ::std::function<void()> const&             onLaunchFailed,
        ::std::function<void(::LevelData&)> const& onLevelDataConstructed
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel>                        model,
        ::std::function<void()>                                     onDownloadError,
        ::IResourcePackRepository&                                  rpr,
        ::ResourcePackManager&                                      rpm,
        ::IMinecraftEventing&                                       evt,
        ::ToastManager&                                             tm,
        ::EducationContentManagerScreenController::OptionalBehavior optionalBehavior
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
