#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class PBRFallbackConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd03c04;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRFallbackConfigSessionStorage& operator=(PBRFallbackConfigSessionStorage const&);
    PBRFallbackConfigSessionStorage(PBRFallbackConfigSessionStorage const&);
    PBRFallbackConfigSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PBRFallbackConfigSessionStorage() /*override*/ = default;
    // NOLINTEND
};
