#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct GPUMemoryInfo {
public:
    // GPUMemoryInfo inner types declare
    // clang-format off
    struct MemoryInfo;
    struct ResourceInfo;
    struct TextureResources;
    struct TextureInfo;
    struct BufferResourceInfo;
    struct BufferResources;
    struct BufferInfo;
    // clang-format on

    // GPUMemoryInfo inner types define
    struct MemoryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk139589;
        ::ll::UntypedStorage<8, 8> mUnk7070ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        MemoryInfo& operator=(MemoryInfo const&);
        MemoryInfo(MemoryInfo const&);
        MemoryInfo();
    };

    struct ResourceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk577a7d;
        ::ll::UntypedStorage<4, 4> mUnkf83da7;
        ::ll::UntypedStorage<8, 8> mUnk79a849;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceInfo& operator=(ResourceInfo const&);
        ResourceInfo(ResourceInfo const&);
        ResourceInfo();
    };

    struct TextureResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk5b8c2d;
        ::ll::UntypedStorage<8, 16> mUnk105dfa;
        ::ll::UntypedStorage<8, 8>  mUnkdc8096;
        ::ll::UntypedStorage<8, 8>  mUnkee256a;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureResources& operator=(TextureResources const&);
        TextureResources(TextureResources const&);
        TextureResources();
    };

    struct TextureInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk873a09;
        ::ll::UntypedStorage<8, 16>  mUnkf26d0c;
        ::ll::UntypedStorage<8, 336> mUnk17c5e2;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureInfo& operator=(TextureInfo const&);
        TextureInfo(TextureInfo const&);
        TextureInfo();
    };

    struct BufferResourceInfo : public ::renoir::GPUMemoryInfo::ResourceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2295ae;
        // NOLINTEND

    public:
        // prevent constructor by default
        BufferResourceInfo& operator=(BufferResourceInfo const&);
        BufferResourceInfo(BufferResourceInfo const&);
        BufferResourceInfo();
    };

    struct BufferResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk5ba8b0;
        ::ll::UntypedStorage<8, 16> mUnkc1ffe0;
        ::ll::UntypedStorage<8, 8>  mUnk49c54d;
        ::ll::UntypedStorage<8, 8>  mUnka9f490;
        // NOLINTEND

    public:
        // prevent constructor by default
        BufferResources& operator=(BufferResources const&);
        BufferResources(BufferResources const&);
        BufferResources();
    };

    struct BufferInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk430bb0;
        ::ll::UntypedStorage<8, 16>  mUnke887be;
        ::ll::UntypedStorage<8, 192> mUnk51555f;
        // NOLINTEND

    public:
        // prevent constructor by default
        BufferInfo& operator=(BufferInfo const&);
        BufferInfo(BufferInfo const&);
        BufferInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk18d6e0;
    ::ll::UntypedStorage<8, 8>   mUnkc1236a;
    ::ll::UntypedStorage<8, 736> mUnk403a29;
    ::ll::UntypedStorage<8, 672> mUnk5efa1e;
    // NOLINTEND

public:
    // prevent constructor by default
    GPUMemoryInfo& operator=(GPUMemoryInfo const&);
    GPUMemoryInfo(GPUMemoryInfo const&);
    GPUMemoryInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint GetTextureRenoirId(uint) const = 0;

    virtual void Release() = 0;

    virtual ~GPUMemoryInfo() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
