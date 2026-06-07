#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStateStorage.h"

// auto generated forward declare list
// clang-format off
class RegistryKey;
// clang-format on

class RegistryWindowStateStorage : public ::WindowStateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk85aa8b;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryWindowStateStorage& operator=(RegistryWindowStateStorage const&);
    RegistryWindowStateStorage(RegistryWindowStateStorage const&);
    RegistryWindowStateStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void writeRect(::tagRECT const&) /*override*/;
#else // LL_PLAT_C
    virtual void writeRect(::tagRECT const& rect) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void writeShowCommand(int) /*override*/;
#else // LL_PLAT_C
    virtual void writeShowCommand(int showCommand) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool readRect(::tagRECT&) const /*override*/;
#else // LL_PLAT_C
    virtual bool readRect(::tagRECT& rect) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool readShowCommand(int&) const /*override*/;
#else // LL_PLAT_C
    virtual bool readShowCommand(int& showCommand) const /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit RegistryWindowStateStorage(::RegistryKey baseKey);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::RegistryKey baseKey);
#endif
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
