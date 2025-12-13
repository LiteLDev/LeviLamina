#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/util/ResourcePackFileDownloadError.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
// clang-format on

class IResourcePackFileDownloaderManager {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IResourcePackFileDownloaderManager() = default;

    // vIndex: 1
    virtual void tryStartDownloadingFile(
        ::TaskGroup&,
        ::std::string const&,
        uint,
        int,
        uint64,
        ::std::string const&,
        bool,
        ::PackType,
        ::std::function<void()>,
        ::std::function<void(float, uint64)>,
        ::std::function<void(::Core::Path const&)>,
        ::std::function<void(::ResourcePackFileDownloadError)>
    ) = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::SharedAsync<void>
    chunkReceived(::TaskGroup&, ::std::string const&, ::FileChunkInfo const&, ::std::vector<uchar>) = 0;

    // vIndex: 3
    virtual void cleanup() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
