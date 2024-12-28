#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class FileListTransferCBInterface {
public:
    // FileListTransferCBInterface inner types declare
    // clang-format off
    struct DownloadCompleteStruct;
    struct FileProgressStruct;
    struct OnFileStruct;
    // clang-format on

    // FileListTransferCBInterface inner types define
    struct OnFileStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk189855;
        ::ll::UntypedStorage<1, 512> mUnk10a86e;
        ::ll::UntypedStorage<8, 8>   mUnk8e4b39;
        ::ll::UntypedStorage<4, 4>   mUnkfb8816;
        ::ll::UntypedStorage<4, 4>   mUnk3e8888;
        ::ll::UntypedStorage<2, 2>   mUnkb49144;
        ::ll::UntypedStorage<4, 4>   mUnkdadbe8;
        ::ll::UntypedStorage<4, 4>   mUnkee02e4;
        ::ll::UntypedStorage<4, 4>   mUnk7de848;
        ::ll::UntypedStorage<8, 32>  mUnk2d60fb;
        ::ll::UntypedStorage<8, 136> mUnk63b7d6;
        ::ll::UntypedStorage<8, 16>  mUnk70cc82;
        // NOLINTEND

    public:
        // prevent constructor by default
        OnFileStruct& operator=(OnFileStruct const&);
        OnFileStruct(OnFileStruct const&);
        OnFileStruct();
    };

    struct FileProgressStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk8436f4;
        ::ll::UntypedStorage<4, 4>   mUnkc08ca7;
        ::ll::UntypedStorage<4, 4>   mUnk2b06b0;
        ::ll::UntypedStorage<4, 4>   mUnk23ad76;
        ::ll::UntypedStorage<8, 8>   mUnk374533;
        ::ll::UntypedStorage<8, 8>   mUnk9c5834;
        ::ll::UntypedStorage<4, 4>   mUnk60af44;
        ::ll::UntypedStorage<8, 136> mUnk960b5b;
        ::ll::UntypedStorage<8, 16>  mUnkb7df68;
        ::ll::UntypedStorage<1, 1>   mUnk4799a8;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileProgressStruct& operator=(FileProgressStruct const&);
        FileProgressStruct(FileProgressStruct const&);
        FileProgressStruct();
    };

    struct DownloadCompleteStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>   mUnkf4442c;
        ::ll::UntypedStorage<4, 4>   mUnkcdd8e2;
        ::ll::UntypedStorage<4, 4>   mUnkda73b5;
        ::ll::UntypedStorage<8, 136> mUnk307aa2;
        ::ll::UntypedStorage<8, 16>  mUnk825424;
        // NOLINTEND

    public:
        // prevent constructor by default
        DownloadCompleteStruct& operator=(DownloadCompleteStruct const&);
        DownloadCompleteStruct(DownloadCompleteStruct const&);
        DownloadCompleteStruct();
    };

public:
    // prevent constructor by default
    FileListTransferCBInterface& operator=(FileListTransferCBInterface const&);
    FileListTransferCBInterface(FileListTransferCBInterface const&);
    FileListTransferCBInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileListTransferCBInterface();

    // vIndex: 1
    virtual bool OnFile(::RakNet::FileListTransferCBInterface::OnFileStruct*) = 0;

    // vIndex: 2
    virtual void OnFileProgress(::RakNet::FileListTransferCBInterface::FileProgressStruct*) = 0;

    // vIndex: 3
    virtual bool Update();

    // vIndex: 4
    virtual bool OnDownloadComplete(::RakNet::FileListTransferCBInterface::DownloadCompleteStruct*);

    // vIndex: 5
    virtual void OnDereference();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $Update();

    MCAPI bool $OnDownloadComplete(::RakNet::FileListTransferCBInterface::DownloadCompleteStruct*);

    MCAPI void $OnDereference();
    // NOLINTEND
};

} // namespace RakNet
