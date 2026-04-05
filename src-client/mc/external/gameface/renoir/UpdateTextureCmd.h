#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct UpdateTextureCmd {
public:
    // UpdateTextureCmd inner types declare
    // clang-format off
    struct UpdateTextureCmdInfo;
    // clang-format on

    // UpdateTextureCmd inner types define
    struct UpdateTextureCmdInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk128ec9;
        ::ll::UntypedStorage<8, 8> mUnkab984f;
        ::ll::UntypedStorage<4, 4> mUnk3536b4;
        ::ll::UntypedStorage<1, 1> mUnkdb617e;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateTextureCmdInfo& operator=(UpdateTextureCmdInfo const&);
        UpdateTextureCmdInfo(UpdateTextureCmdInfo const&);
        UpdateTextureCmdInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4e0909;
    ::ll::UntypedStorage<4, 52> mUnk4b286b;
    ::ll::UntypedStorage<8, 8>  mUnk76fd6c;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateTextureCmd& operator=(UpdateTextureCmd const&);
    UpdateTextureCmd(UpdateTextureCmd const&);
    UpdateTextureCmd();
};

} // namespace renoir
