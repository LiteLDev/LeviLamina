#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ImportExportProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>> mFileArchiverProgress;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mDefaultTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mDefaultProgressMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ImportExportProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImportExportProgressHandler() /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ImportExportProgressHandler(
        ::std::string const&                                            defaultTitle,
        ::std::string const&                                            defaultProgressMessage,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> archiverProgress
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                            defaultTitle,
        ::std::string const&                                            defaultProgressMessage,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> archiverProgress
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
    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
