#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/world/WorldTemplateLoader.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class SceneFactory;
class WorldTemplateLoader;
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

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI ::std::string $getTitleText() const;

    MCNAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
