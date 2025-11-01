#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/util/IResourcePackFileDownloaderManager.h"
#include "mc/util/ResourcePackFileDownloadError.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
// clang-format on

class ResourcePackFileDownloaderManager : public ::IResourcePackFileDownloaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7b304f;
    ::ll::UntypedStorage<8, 8> mUnk22ad82;
    ::ll::UntypedStorage<8, 8> mUnk7949dd;
    ::ll::UntypedStorage<8, 64> mUnk402738;
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
    virtual ~ResourcePackFileDownloaderManager() /*override*/ = default;

    // vIndex: 1
    virtual void tryStartDownloadingFile(::TaskGroup&, ::std::string const&, uint, int, uint64, ::std::string const&, bool, ::PackType, ::std::function<void()>, ::std::function<void(float, uint64)>, ::std::function<void(::Core::Path const&)>, ::std::function<void(::ResourcePackFileDownloadError)>) /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Threading::SharedAsync<void> chunkReceived(::TaskGroup&, ::std::string const&, ::FileChunkInfo const&, ::std::vector<uchar>) /*override*/;

    // vIndex: 3
    virtual void cleanup() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
