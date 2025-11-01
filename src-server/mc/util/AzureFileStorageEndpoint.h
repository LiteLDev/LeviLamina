#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DownloaderResult.h"

// auto generated forward declare list
// clang-format off
class AzureFileDownloader;
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
// clang-format on

class AzureFileStorageEndpoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk5e7675;
    ::ll::UntypedStorage<8, 24> mUnk3c16cb;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileStorageEndpoint& operator=(AzureFileStorageEndpoint const&);
    AzureFileStorageEndpoint(AzureFileStorageEndpoint const&);
    AzureFileStorageEndpoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AzureFileStorageEndpoint() = default;

    // vIndex: 1
    virtual ::Bedrock::Http::Request makeListFilesRequest(::Core::Path const&) const;

    // vIndex: 2
    virtual void sendListFilesRequest(::Bedrock::Http::Request&, ::TaskGroup&, ::std::function<void(::Bedrock::Http::Response const&, ::std::string const&)>) const;

    // vIndex: 3
    virtual void downloadSingleFile(::Core::Path const&, ::AzureFileDownloader&, ::std::function<void(::DownloaderResult)>) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
