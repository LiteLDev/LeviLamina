#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/AppConfigData.h"

class EduConfigDataWrapper : public ::AppConfigData<::EduConfigDataWrapper> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1d4e43;
    ::ll::UntypedStorage<8, 8>  mUnk40d783;
    ::ll::UntypedStorage<1, 1>  mUnke1342c;
    ::ll::UntypedStorage<8, 32> mUnk81fcaa;
    // NOLINTEND

public:
    // prevent constructor by default
    EduConfigDataWrapper& operator=(EduConfigDataWrapper const&);
    EduConfigDataWrapper(EduConfigDataWrapper const&);
    EduConfigDataWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~EduConfigDataWrapper() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~EduConfigDataWrapper() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
