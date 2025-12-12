#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ImagePickingCallback {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ImagePickingCallback() = default;
#else // LL_PLAT_C
    virtual ~ImagePickingCallback();
#endif

    virtual void onImagePickingSuccess(::std::string const&) = 0;

    virtual void onImagePickingCanceled() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
