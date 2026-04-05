#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/GPUMemoryInfo.h"

namespace cohtml {

struct GPUMemoryInfo : public ::renoir::GPUMemoryInfo {
public:
    // GPUMemoryInfo inner types declare
    // clang-format off
    struct ExtraImageInfo;
    struct ExtraColorImageTexturesInfo;
    // clang-format on

    // GPUMemoryInfo inner types define
    struct ExtraImageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3cb3b1;
        ::ll::UntypedStorage<8, 8> mUnkf211be;
        ::ll::UntypedStorage<8, 8> mUnkaea9ae;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtraImageInfo& operator=(ExtraImageInfo const&);
        ExtraImageInfo(ExtraImageInfo const&);
        ExtraImageInfo();
    };

    struct ExtraColorImageTexturesInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdb9b49;
        ::ll::UntypedStorage<8, 8> mUnkf467aa;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtraColorImageTexturesInfo& operator=(ExtraColorImageTexturesInfo const&);
        ExtraColorImageTexturesInfo(ExtraColorImageTexturesInfo const&);
        ExtraColorImageTexturesInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke2336d;
    // NOLINTEND

public:
    // prevent constructor by default
    GPUMemoryInfo& operator=(GPUMemoryInfo const&);
    GPUMemoryInfo(GPUMemoryInfo const&);
    GPUMemoryInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void PrintToLog() = 0;

    virtual ~GPUMemoryInfo() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
