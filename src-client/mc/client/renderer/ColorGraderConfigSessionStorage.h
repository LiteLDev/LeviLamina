#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IClientDataTransferSessionStorage.h"

class ColorGraderConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9dcf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGraderConfigSessionStorage& operator=(ColorGraderConfigSessionStorage const&);
    ColorGraderConfigSessionStorage(ColorGraderConfigSessionStorage const&);
    ColorGraderConfigSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ColorGraderConfigSessionStorage() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
