#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/WorldGenerationProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DimensionChangeProgressHandler : public ::WorldGenerationProgressHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionChangeProgressHandler() /*override*/ = default;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
