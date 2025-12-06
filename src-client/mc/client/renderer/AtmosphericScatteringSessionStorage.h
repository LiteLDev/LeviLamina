#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IClientDataTransferSessionStorage.h"

class AtmosphericScatteringSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk25f1c9;
    // NOLINTEND

public:
    // prevent constructor by default
    AtmosphericScatteringSessionStorage& operator=(AtmosphericScatteringSessionStorage const&);
    AtmosphericScatteringSessionStorage(AtmosphericScatteringSessionStorage const&);
    AtmosphericScatteringSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AtmosphericScatteringSessionStorage() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
