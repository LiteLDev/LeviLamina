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

    struct BlobSequence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk65ffba;
        ::ll::UntypedStorage<4, 4>  mUnkbf716a;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlobSequence& operator=(BlobSequence const&);
        BlobSequence(BlobSequence const&);
        BlobSequence();
    };

    struct BlobRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkc88016;
        ::ll::UntypedStorage<8, 32> mUnk6f6bd5;
        ::ll::UntypedStorage<8, 8>  mUnk51cb16;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlobRecord& operator=(BlobRecord const&);
        BlobRecord(BlobRecord const&);
        BlobRecord();
    };
};

} // namespace Core
