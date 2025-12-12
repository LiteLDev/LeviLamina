#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class FileListTransferCBInterface {
public:
    // FileListTransferCBInterface inner types declare
    // clang-format off
    struct DownloadCompleteStruct;
    struct OnFileStruct;
    struct FileProgressStruct;
    // clang-format on

    // FileListTransferCBInterface inner types define
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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileListTransferCBInterface() = default;

    virtual bool OnFile(::RakNet::FileListTransferCBInterface::OnFileStruct*) = 0;

    virtual void OnFileProgress(::RakNet::FileListTransferCBInterface::FileProgressStruct*) = 0;

    virtual bool Update();

    virtual bool OnDownloadComplete(::RakNet::FileListTransferCBInterface::DownloadCompleteStruct*);

    virtual void OnDereference();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
