#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class SceneFactory;
struct WorldTemplateLoader;
// clang-format on

class WorldTemplateLoadingProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldTemplateLoader>> mWorldTemplateLoader;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                          mSceneFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateLoadingProgressHandler& operator=(WorldTemplateLoadingProgressHandler const&);
    WorldTemplateLoadingProgressHandler(WorldTemplateLoadingProgressHandler const&);
    WorldTemplateLoadingProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateLoadingProgressHandler() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStart(::MinecraftScreenModel& minecraftScreenModel);

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
