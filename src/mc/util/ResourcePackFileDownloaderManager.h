#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackFileDownloaderManager : public ::std::enable_shared_from_this<::ResourcePackFileDownloaderManager> {
public:
    // ResourcePackFileDownloaderManager inner types declare
    // clang-format off
    struct FileChunkBatch;
    // clang-format on

    // ResourcePackFileDownloaderManager inner types define
    struct FileChunkBatch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk260d98;
        ::ll::UntypedStorage<8, 8>  mUnkd899f1;
        ::ll::UntypedStorage<8, 24> mUnk3c0bab;
        ::ll::UntypedStorage<1, 1>  mUnk614968;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileChunkBatch& operator=(FileChunkBatch const&);
        FileChunkBatch(FileChunkBatch const&);
        FileChunkBatch();
    };

    enum class ChunkOpResult : int {
        DidNothing     = 0,
        ReceivedChunks = 1,
        WroteAllChunks = 2,
        Failure        = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7949dd;
    ::ll::UntypedStorage<8, 32> mUnk615ea5;
    ::ll::UntypedStorage<8, 32> mUnk3f9f6f;
    ::ll::UntypedStorage<8, 32> mUnkc29e40;
    ::ll::UntypedStorage<8, 32> mUnkcc8135;
    ::ll::UntypedStorage<8, 32> mUnk5eb5f5;
    ::ll::UntypedStorage<8, 96> mUnkcea299;
    ::ll::UntypedStorage<8, 64> mUnkac5510;
    ::ll::UntypedStorage<8, 64> mUnk21d658;
    ::ll::UntypedStorage<8, 8>  mUnke8a915;
    ::ll::UntypedStorage<8, 16> mUnk380593;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackFileDownloaderManager() = default;
    // NOLINTEND
};
