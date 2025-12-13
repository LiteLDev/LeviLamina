#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class RemoteStorageManifest {
public:
    // RemoteStorageManifest inner types declare
    // clang-format off
    struct BlobRecord;
    struct BlobSequence;
    // clang-format on

    // RemoteStorageManifest inner types define
    enum class State : uchar {
        Good                   = 0,
        MultiChunkProcessError = 1,
        CommitLockFound        = 2,
    };

    struct BlobSequence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk8d3ffd;
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
        ::ll::UntypedStorage<8, 24> mUnkbcdcf4;
        ::ll::UntypedStorage<8, 32> mUnkd5ce7c;
        ::ll::UntypedStorage<8, 8>  mUnk51cb16;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlobRecord& operator=(BlobRecord const&);
        BlobRecord(BlobRecord const&);
        BlobRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb82b5f;
    ::ll::UntypedStorage<1, 1>  mUnkad2adf;
    ::ll::UntypedStorage<8, 32> mUnkca3f0d;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteStorageManifest& operator=(RemoteStorageManifest const&);
    RemoteStorageManifest(RemoteStorageManifest const&);
    RemoteStorageManifest();
};

} // namespace Core
