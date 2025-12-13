#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CloudFileUploadManager {
public:
    // CloudFileUploadManager inner types declare
    // clang-format off
    struct AuthTokenProvider;
    struct UploadError;
    // clang-format on

    // CloudFileUploadManager inner types define
    enum class RequestType : int {};

    enum class UploadErrorAction : int {};

    enum class UploadType : int {};

    struct AuthTokenProvider {};

    struct UploadError {};
};
