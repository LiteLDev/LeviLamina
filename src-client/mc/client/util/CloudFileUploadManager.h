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
    enum class RequestType : uint {};

    enum class UploadErrorAction : uint {};

    enum class UploadType : uint {};

    struct AuthTokenProvider {};

    struct UploadError {};
};
