#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class RemoteStorageManifest {
public:
    // RemoteStorageManifest inner types declare
    // clang-format off
    struct BlobSequence;
    struct BlobRecord;
    // clang-format on

    // RemoteStorageManifest inner types define
    enum class State : uchar {};

    struct BlobSequence {};

    struct BlobRecord {};
};

} // namespace Core
