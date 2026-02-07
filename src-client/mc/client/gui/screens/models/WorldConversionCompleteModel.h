#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/world/LocalWorldInfo.h"

class WorldConversionCompleteModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1032, ::LocalWorldInfo> mWorldInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldConversionCompleteModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldConversionCompleteModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldConversionCompleteModel(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
