#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct GPUMemoryInfo {
public:
    // GPUMemoryInfo inner types declare
    // clang-format off
    struct ResourceInfo;
    struct ResourceArray;
    struct BufferResourceInfo;
    struct BufferArray;
    // clang-format on

    // GPUMemoryInfo inner types define
    struct ResourceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk577a7d;
        ::ll::UntypedStorage<8, 8> mUnkd40169;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceInfo& operator=(ResourceInfo const&);
        ResourceInfo(ResourceInfo const&);
        ResourceInfo();
    };

    struct ResourceArray {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk565365;
        ::ll::UntypedStorage<8, 8> mUnka4bae1;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceArray& operator=(ResourceArray const&);
        ResourceArray(ResourceArray const&);
        ResourceArray();
    };

    struct BufferResourceInfo : public ::renoir::GPUMemoryInfo::ResourceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk27b2e3;
        // NOLINTEND

    public:
        // prevent constructor by default
        BufferResourceInfo& operator=(BufferResourceInfo const&);
        BufferResourceInfo(BufferResourceInfo const&);
        BufferResourceInfo();
    };

    struct BufferArray {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdef40e;
        ::ll::UntypedStorage<8, 8> mUnk94c44f;
        // NOLINTEND

    public:
        // prevent constructor by default
        BufferArray& operator=(BufferArray const&);
        BufferArray(BufferArray const&);
        BufferArray();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk45855e;
    ::ll::UntypedStorage<8, 8>   mUnkdede45;
    ::ll::UntypedStorage<8, 8>   mUnk4f77fe;
    ::ll::UntypedStorage<8, 8>   mUnk5285ca;
    ::ll::UntypedStorage<8, 8>   mUnkf4dd55;
    ::ll::UntypedStorage<8, 8>   mUnk48c0ac;
    ::ll::UntypedStorage<8, 8>   mUnkbb537a;
    ::ll::UntypedStorage<8, 8>   mUnk7bc2af;
    ::ll::UntypedStorage<8, 8>   mUnk8bceda;
    ::ll::UntypedStorage<8, 8>   mUnk306ef2;
    ::ll::UntypedStorage<4, 12>  mUnk27197e;
    ::ll::UntypedStorage<4, 12>  mUnkc73252;
    ::ll::UntypedStorage<4, 28>  mUnk42327d;
    ::ll::UntypedStorage<4, 12>  mUnk6b5ed8;
    ::ll::UntypedStorage<4, 12>  mUnk42db43;
    ::ll::UntypedStorage<4, 28>  mUnk8ef548;
    ::ll::UntypedStorage<4, 28>  mUnkb29343;
    ::ll::UntypedStorage<4, 28>  mUnkaf3ca9;
    ::ll::UntypedStorage<4, 28>  mUnk401f87;
    ::ll::UntypedStorage<4, 28>  mUnk8fae60;
    ::ll::UntypedStorage<4, 28>  mUnk7a8b86;
    ::ll::UntypedStorage<4, 28>  mUnk9b9446;
    ::ll::UntypedStorage<8, 112> mUnk92bcce;
    ::ll::UntypedStorage<8, 112> mUnk851f49;
    ::ll::UntypedStorage<8, 112> mUnk9a20e9;
    ::ll::UntypedStorage<8, 48>  mUnk617397;
    ::ll::UntypedStorage<8, 48>  mUnkf1f03c;
    // NOLINTEND

public:
    // prevent constructor by default
    GPUMemoryInfo& operator=(GPUMemoryInfo const&);
    GPUMemoryInfo(GPUMemoryInfo const&);
    GPUMemoryInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Release() = 0;

    virtual ~GPUMemoryInfo() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
