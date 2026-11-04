#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ImagePickingCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImagePickingCallback() = default;

    virtual void onImagePickingSuccess(::std::string const& temporaryFilePath) = 0;

    virtual void onImagePickingCanceled() = 0;
    // NOLINTEND
};
