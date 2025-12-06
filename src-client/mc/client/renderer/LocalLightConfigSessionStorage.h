#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IClientDataTransferSessionStorage.h"

class LocalLightConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3b99ca;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLightConfigSessionStorage& operator=(LocalLightConfigSessionStorage const&);
    LocalLightConfigSessionStorage(LocalLightConfigSessionStorage const&);
    LocalLightConfigSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LocalLightConfigSessionStorage() /*override*/ = default;
    // NOLINTEND
};
