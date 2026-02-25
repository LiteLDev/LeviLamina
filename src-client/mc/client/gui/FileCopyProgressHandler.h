#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class TaskGroup;
namespace Core { class Path; }
// clang-format on

class FileCopyProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mTitle;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mDestPath;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>           mExistenceTracker;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>       mCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>     mIOTaskGroup;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                mSrcLocation;
    ::ll::TypedStorage<1, 1, bool>                               mSrcZip;
    ::ll::TypedStorage<1, 1, bool>                               mDestZip;
    ::ll::TypedStorage<1, 1, bool>                               mCopyComplete;
    ::ll::TypedStorage<1, 1, bool>                               mCopySuccess;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>      mExcludeDirs;
    // NOLINTEND

public:
    // prevent constructor by default
    FileCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileCopyProgressHandler() /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileCopyProgressHandler(
        ::std::string const&                title,
        ::ResourceLocation const&           srcPath,
        bool                                srcZip,
        ::Core::Path const&                 dstPath,
        bool                                zipDest,
        ::std::vector<::std::string> const& excludeDirs,
        ::std::function<void(bool)>         callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                title,
        ::ResourceLocation const&           srcPath,
        bool                                srcZip,
        ::Core::Path const&                 dstPath,
        bool                                zipDest,
        ::std::vector<::std::string> const& excludeDirs,
        ::std::function<void(bool)>         callback
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
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
