#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileDownloadManager : public ::std::enable_shared_from_this<::FileDownloadManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnk76fb39;
    ::ll::UntypedStorage<8, 16>  mUnk3aa048;
    ::ll::UntypedStorage<4, 4>   mUnkfe9bd7;
    ::ll::UntypedStorage<4, 4>   mUnk899fea;
    ::ll::UntypedStorage<8, 16>  mUnk3a2a83;
    ::ll::UntypedStorage<8, 16>  mUnkd5926b;
    ::ll::UntypedStorage<8, 8>   mUnk61e433;
    ::ll::UntypedStorage<8, 616> mUnk6600ca;
    ::ll::UntypedStorage<8, 24>  mUnk7cbee3;
    ::ll::UntypedStorage<8, 8>   mUnk646146;
    ::ll::UntypedStorage<8, 8>   mUnk1fa5e5;
    ::ll::UntypedStorage<1, 1>   mUnkd59752;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDownloadManager& operator=(FileDownloadManager const&);
    FileDownloadManager(FileDownloadManager const&);
    FileDownloadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileDownloadManager();

    // vIndex: 1
    virtual void update();

    // vIndex: 2
    virtual void cancelDownload();

    // vIndex: 3
    virtual float getDownloadProgress() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI void $cancelDownload();

    MCAPI float $getDownloadProgress() const;
    // NOLINTEND
};
