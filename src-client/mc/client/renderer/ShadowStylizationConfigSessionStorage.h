#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IClientDataTransferSessionStorage.h"

class ShadowStylizationConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk608a72;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowStylizationConfigSessionStorage& operator=(ShadowStylizationConfigSessionStorage const&);
    ShadowStylizationConfigSessionStorage(ShadowStylizationConfigSessionStorage const&);
    ShadowStylizationConfigSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShadowStylizationConfigSessionStorage() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
