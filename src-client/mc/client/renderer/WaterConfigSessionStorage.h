#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class WaterConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbd9df4;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterConfigSessionStorage& operator=(WaterConfigSessionStorage const&);
    WaterConfigSessionStorage(WaterConfigSessionStorage const&);
    WaterConfigSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaterConfigSessionStorage() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
