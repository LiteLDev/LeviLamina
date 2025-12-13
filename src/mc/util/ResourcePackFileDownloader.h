#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/ResourcePackFileDownloadError.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class PacketSender;
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
// clang-format on

class ResourcePackFileDownloader : public ::std::enable_shared_from_this<::ResourcePackFileDownloader> {
public:
    // ResourcePackFileDownloader inner types declare
    // clang-format off
    struct FileChunkBatch;
    // clang-format on

    // ResourcePackFileDownloader inner types define
    enum class ChunkOpResult : int {
        DidNothing     = 0,
        ReceivedChunks = 1,
        WroteAllChunks = 2,
        WriteFailure   = 3,
        UnzipFailure   = 4,
    };

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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~FileChunkBatch();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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
#ifdef LL_PLAT_S
    virtual ~ResourcePackFileDownloader() = default;
#else // LL_PLAT_C
    virtual ~ResourcePackFileDownloader();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ResourcePackFileDownloader(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>          appPlatform,
        ::TaskGroup&                                          ioTaskGroup,
        ::gsl::not_null<::Core::ZipUtils::IZipUtility const*> zipUtility,
        ::PacketSender&                                       packetSender
    );

    MCNAPI_C void _cancel(::ResourcePackFileDownloadError error);

    MCNAPI_C void _handleChunkResult(::ResourcePackFileDownloader::ChunkOpResult result);

    MCNAPI_C void _requestChunk(int chunk);

    MCNAPI_C ::std::optional<::ResourcePackFileDownloader::FileChunkBatch> _tryGetChunksToWrite();

    MCNAPI_C bool _unzipContent(
        ::Core::Path const&                                       inZipPath,
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& outContentPath
    );

    MCNAPI_C ::Bedrock::Threading::SharedAsync<void>
    chunkReceived(::FileChunkInfo const& chunkInfo, ::std::vector<uchar>&& data);

    MCNAPI_C void cleanup();

    MCNAPI_C void downloadFile(
        ::std::string const& name,
        uint                 chunkSize,
        int,
        uint64               fileSize,
        ::std::string const& fileHash,
        bool                 isPremium,
        ::PackType           packType
    );

    MCNAPI_C bool finalizeAllChunks();

    MCNAPI_C void requestFirstBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>          appPlatform,
        ::TaskGroup&                                          ioTaskGroup,
        ::gsl::not_null<::Core::ZipUtils::IZipUtility const*> zipUtility,
        ::PacketSender&                                       packetSender
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
