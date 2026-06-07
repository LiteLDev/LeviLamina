#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RegistryKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf04e63;
    ::ll::UntypedStorage<4, 4> mUnkab2c17;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryKey& operator=(RegistryKey const&);
    RegistryKey(RegistryKey const&);
    RegistryKey();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI RegistryKey(::RegistryKey&& key);
#endif

#ifdef LL_PLAT_S
    MCNAPI explicit operator bool() const;
#endif

    MCNAPI bool readValue(char const* key, ::std::string& result) const;

    MCNAPI bool readValue(char const* name, ulong& result) const;

    MCNAPI ~RegistryKey();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::RegistryKey create(::HKEY__* base, char const* path, ulong desiredAccess);
#endif

    MCNAPI static ::RegistryKey open(::HKEY__* base, char const* path, ulong desiredAccess);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::RegistryKey&& key);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
