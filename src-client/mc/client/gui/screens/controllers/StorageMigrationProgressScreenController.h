#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class StorageMigrationProgressScreenModel;
struct ProgressHandler;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
// clang-format on

class StorageMigrationProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageMigrationProgressScreenModel>> mProgressScreenModel;
    ::ll::TypedStorage<1, 1, bool>                                                      mHasTicked;
    ::ll::TypedStorage<8, 8, int64 const>                                               mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, int64>                                mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>> mProgressHandler;
    ::ll::TypedStorage<1, 1, bool>                                 mTransferStarted;
    ::ll::TypedStorage<1, 1, bool>                                 mIntroShown;
    ::ll::TypedStorage<1, 1, bool>                                 mModalShowing;
    ::ll::TypedStorage<1, 1, bool>                                 mRestartingTransfer;
    ::ll::TypedStorage<8, 32, ::std::string>                       mModalNameShowing;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrationProgressScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageMigrationProgressScreenController(
        ::std::shared_ptr<::StorageMigrationProgressScreenModel>                                model,
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& service
    );

    MCAPI void _handleError();

    MCAPI void _handleIntro();

    MCAPI void _handleTransferFinished();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _showModal(::std::string const& modalName);

    MCAPI void _startTransfer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::StorageMigrationProgressScreenModel>                                model,
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& service
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

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI void $onOpen();

    MCAPI void $onLeave();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
