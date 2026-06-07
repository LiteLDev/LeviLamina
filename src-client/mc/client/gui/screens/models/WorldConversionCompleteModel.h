#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/world/LocalWorldInfo.h"

class WorldConversionCompleteModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1040, ::LocalWorldInfo> mWorldInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldConversionCompleteModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::LocalWorldInfo const& getImportedWorld() const;

    MCAPI void setImportedWorld(::std::string const& levelId);

    MCAPI void startImportedWorld();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
