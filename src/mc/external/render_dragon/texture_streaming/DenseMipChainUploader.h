#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct DenseMipChainUploader {
public:
    // DenseMipChainUploader inner types declare
    // clang-format off
    struct UploadComplete;
    struct UploadFailed;
    struct UploadInProgress;
    // clang-format on

    // DenseMipChainUploader inner types define
    struct UploadComplete {};

    struct UploadFailed {};

    struct UploadInProgress {};
};

} // namespace dragon::texturestreaming
