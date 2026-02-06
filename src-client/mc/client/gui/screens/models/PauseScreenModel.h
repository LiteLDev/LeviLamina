#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientInstanceScreenModel.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"

class PauseScreenModel : public ::ClientInstanceScreenModel {
public:
    // prevent constructor by default
    PauseScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PauseScreenModel(::MinecraftScreenModel::Context context);

    MCAPI void fireFriendsDrawerOpenedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
