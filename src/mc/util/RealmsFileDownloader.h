#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DownloaderResult.h"
#include "mc/util/StreamFileDownloader.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Bedrock::Http { class Request; }
// clang-format on

class RealmsFileDownloader : public ::StreamFileDownloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk691f6b;
    ::ll::UntypedStorage<8, 32> mUnk8cebb1;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFileDownloader& operator=(RealmsFileDownloader const&);
    RealmsFileDownloader(RealmsFileDownloader const&);
    RealmsFileDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsFileDownloader() /*override*/ = default;

    // vIndex: 2
    virtual void
    initRealmsFileDownloader(::std::string const&, int const, ::std::string const&, ::FileInfo const&, uint64, ::std::string const&, ::std::function<void(::DownloaderResult)>) /*override*/
        ;

    // vIndex: 3
    virtual void
    initFileDownloader(::std::string const&, ::std::string const&, ::FileInfo const&, uint64, uint64, ::std::string const&, ::std::function<void(::DownloaderResult)>) /*override*/
        ;

    // vIndex: 10
    virtual ::Bedrock::Http::Request _makeRequest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
