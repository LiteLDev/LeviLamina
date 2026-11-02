#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class MinecraftScreenModel;
class TaskGroup;
struct ContentItem;
// clang-format on

class FileDeleteProgressHandler : public ::ProgressHandler {
public:
    // FileDeleteProgressHandler inner types define
    using DeleteContentItemVector = ::std::vector<::std::shared_ptr<::ContentItem const>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                     mContentManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContentItem const>>> mToDelete;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                         mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                   mDeleteComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDeleteProgressHandler& operator=(FileDeleteProgressHandler const&);
    FileDeleteProgressHandler(FileDeleteProgressHandler const&);
    FileDeleteProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDeleteProgressHandler() /*override*/ = default;

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
    MCNAPI FileDeleteProgressHandler(
        ::IContentManager&                                      contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>>&& itemsToDelete
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::IContentManager& contentManager, ::std::vector<::std::shared_ptr<::ContentItem const>>&& itemsToDelete);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCNAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCNAPI ::std::string $getTitleText() const;

    MCNAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
