#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class IResourcePackRepository;
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class ResourcePackCopyProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mLevelID;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mFuture;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>           mCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>     mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackCopyProgressHandler() /*override*/;

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
    MCAPI ResourcePackCopyProgressHandler(::std::string const& levelID, ::std::function<void()> callback);

    MCAPI ::Bedrock::Threading::Async<void> start(
        ::Core::PathBuffer<::std::string> const&             levelBasePath,
        ::IResourcePackRepository&                           resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& levelID, ::std::function<void()> callback);
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

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
