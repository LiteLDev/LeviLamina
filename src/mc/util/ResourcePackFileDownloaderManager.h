#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackFileDownloaderManager : public ::std::enable_shared_from_this<::ResourcePackFileDownloaderManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk7949dd;
    ::ll::UntypedStorage<8, 32>  mUnk615ea5;
    ::ll::UntypedStorage<8, 32>  mUnk3f9f6f;
    ::ll::UntypedStorage<1, 1>   mUnk82d7ed;
    ::ll::UntypedStorage<8, 32>  mUnkc29e40;
    ::ll::UntypedStorage<8, 32>  mUnkcc8135;
    ::ll::UntypedStorage<8, 32>  mUnk5eb5f5;
    ::ll::UntypedStorage<8, 96>  mUnkcea299;
    ::ll::UntypedStorage<8, 64>  mUnkac5510;
    ::ll::UntypedStorage<8, 64>  mUnk21d658;
    ::ll::UntypedStorage<8, 616> mUnk6ca3f2;
    ::ll::UntypedStorage<8, 8>   mUnke8a915;
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
    virtual ~ResourcePackFileDownloaderManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void cleanup();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_CHUNK_ATTEMPTS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
