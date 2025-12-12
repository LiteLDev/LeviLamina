#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStateStorage.h"

class RegistryWindowStateStorage : public ::WindowStateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk659f63;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryWindowStateStorage& operator=(RegistryWindowStateStorage const&);
    RegistryWindowStateStorage(RegistryWindowStateStorage const&);
    RegistryWindowStateStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeRect(::tagRECT const& rect) /*override*/;

    virtual void writeShowCommand(int showCommand) /*override*/;

    virtual bool readRect(::tagRECT& rect) const /*override*/;

    virtual bool readShowCommand(int& showCommand) const /*override*/;

    virtual ~RegistryWindowStateStorage() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $writeRect(::tagRECT const& rect);

    MCNAPI void $writeShowCommand(int showCommand);

    MCNAPI bool $readRect(::tagRECT& rect) const;

    MCNAPI bool $readShowCommand(int& showCommand) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
