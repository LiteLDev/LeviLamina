#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ResourcePackFileDownloadError.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ResourcePackFileDownloader : public ::std::enable_shared_from_this<::ResourcePackFileDownloader> {
public:
    // ResourcePackFileDownloader inner types declare
    // clang-format off
    struct FileChunkBatch;
    // clang-format on

    // ResourcePackFileDownloader inner types define
    struct FileChunkBatch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk5d4517;
        ::ll::UntypedStorage<8, 8>  mUnk934d8f;
        ::ll::UntypedStorage<8, 24> mUnk8c51c3;
        ::ll::UntypedStorage<1, 1>  mUnk2349ca;
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
        WriteFailure   = 3,
        UnzipFailure   = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk45b02a;
    ::ll::UntypedStorage<8, 8>  mUnk194d88;
    ::ll::UntypedStorage<8, 32> mUnk1af805;
    ::ll::UntypedStorage<8, 32> mUnka40a41;
    ::ll::UntypedStorage<8, 32> mUnk90c63b;
    ::ll::UntypedStorage<8, 32> mUnk433dd3;
    ::ll::UntypedStorage<8, 96> mUnkb33962;
    ::ll::UntypedStorage<8, 64> mUnk654e5c;
    ::ll::UntypedStorage<8, 64> mUnk97c8da;
    ::ll::UntypedStorage<8, 8>  mUnk8112f3;
    ::ll::UntypedStorage<8, 8>  mUnk6a172c;
    ::ll::UntypedStorage<8, 16> mUnk94b9c7;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileDownloader& operator=(ResourcePackFileDownloader const&);
    ResourcePackFileDownloader(ResourcePackFileDownloader const&);
    ResourcePackFileDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackFileDownloader() = default;
    // NOLINTEND
};
