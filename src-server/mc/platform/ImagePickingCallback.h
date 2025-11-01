#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ImagePickingCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImagePickingCallback() = default;

    // vIndex: 1
    virtual void onImagePickingSuccess(::std::string const&) = 0;

    // vIndex: 2
    virtual void onImagePickingCanceled() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
