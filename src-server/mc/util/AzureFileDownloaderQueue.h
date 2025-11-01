#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AzureFileDownloaderQueue {
public:
    // AzureFileDownloaderQueue inner types declare
    // clang-format off
    struct Request;
    // clang-format on
    
    // AzureFileDownloaderQueue inner types define
    struct Request {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnke0113a;
        ::ll::UntypedStorage<8, 64> mUnk520fcd;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Request& operator=(Request const&);
        Request(Request const&);
        Request();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke71f44;
    ::ll::UntypedStorage<4, 4> mUnk58c758;
    ::ll::UntypedStorage<4, 4> mUnk50ab63;
    ::ll::UntypedStorage<4, 4> mUnk49da4c;
    ::ll::UntypedStorage<8, 64> mUnk8f4c6e;
    ::ll::UntypedStorage<8, 32> mUnk96f519;
    ::ll::UntypedStorage<8, 40> mUnk2e08d0;
    ::ll::UntypedStorage<8, 80> mUnkd8a3b1;
    ::ll::UntypedStorage<8, 16> mUnka30588;
    ::ll::UntypedStorage<8, 336> mUnkf5bec8;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileDownloaderQueue& operator=(AzureFileDownloaderQueue const&);
    AzureFileDownloaderQueue(AzureFileDownloaderQueue const&);
    AzureFileDownloaderQueue();

};
