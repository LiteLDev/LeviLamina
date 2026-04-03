#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/GPUMemoryInfo.h"

namespace renoir {

struct UserGPUMemoryInfo {
public:
    // UserGPUMemoryInfo inner types declare
    // clang-format off
    struct UserResourceInfo;
    struct RenderTargetResourceInfo;
    struct UserTexturesInfo;
    struct RenderTargetInfo;
    // clang-format on

    // UserGPUMemoryInfo inner types define
    struct UserResourceInfo : public ::renoir::GPUMemoryInfo::ResourceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd78515;
        ::ll::UntypedStorage<8, 8> mUnk23217e;
        // NOLINTEND

    public:
        // prevent constructor by default
        UserResourceInfo& operator=(UserResourceInfo const&);
        UserResourceInfo(UserResourceInfo const&);
        UserResourceInfo();
    };

    struct RenderTargetResourceInfo : public ::renoir::GPUMemoryInfo::ResourceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9855a1;
        ::ll::UntypedStorage<8, 8> mUnkf75d39;
        ::ll::UntypedStorage<8, 8> mUnk72b90d;
        ::ll::UntypedStorage<8, 8> mUnk5b9cc6;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderTargetResourceInfo& operator=(RenderTargetResourceInfo const&);
        RenderTargetResourceInfo(RenderTargetResourceInfo const&);
        RenderTargetResourceInfo();
    };

    struct UserTexturesInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk501526;
        ::ll::UntypedStorage<8, 16> mUnkd3d184;
        ::ll::UntypedStorage<8, 16> mUnk6e79ab;
        ::ll::UntypedStorage<8, 16> mUnkaa9985;
        ::ll::UntypedStorage<8, 8>  mUnkff704b;
        ::ll::UntypedStorage<8, 8>  mUnk93b62d;
        // NOLINTEND

    public:
        // prevent constructor by default
        UserTexturesInfo& operator=(UserTexturesInfo const&);
        UserTexturesInfo(UserTexturesInfo const&);
        UserTexturesInfo();
    };

    struct RenderTargetInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc9e909;
        ::ll::UntypedStorage<8, 16> mUnk5f8981;
        ::ll::UntypedStorage<8, 8>  mUnk5d6ba2;
        ::ll::UntypedStorage<8, 8>  mUnk4331d1;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderTargetInfo& operator=(RenderTargetInfo const&);
        RenderTargetInfo(RenderTargetInfo const&);
        RenderTargetInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6835f4;
    ::ll::UntypedStorage<8, 8>  mUnk42c3f5;
    ::ll::UntypedStorage<8, 80> mUnk97e92f;
    ::ll::UntypedStorage<8, 96> mUnk31b182;
    // NOLINTEND

public:
    // prevent constructor by default
    UserGPUMemoryInfo& operator=(UserGPUMemoryInfo const&);
    UserGPUMemoryInfo(UserGPUMemoryInfo const&);
    UserGPUMemoryInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint GetTextureRenoirId(uint) const = 0;

    virtual void Release() = 0;

    virtual ~UserGPUMemoryInfo() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
