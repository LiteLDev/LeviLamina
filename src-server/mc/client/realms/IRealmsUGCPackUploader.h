#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct IRealmsUGCPackUploader {
public:
    // IRealmsUGCPackUploader inner types declare
    // clang-format off
    struct PackUploadInfo;
    struct UGCUploadResult;
    // clang-format on

    // IRealmsUGCPackUploader inner types define
    enum class UGCUploadResultStatus : int {};

    struct PackUploadInfo {};

    struct UGCUploadResult {};
};

} // namespace Realms
