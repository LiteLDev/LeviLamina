#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace VolumeInstanceData {

struct VolumeStorageDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk526e8a;
    ::ll::UntypedStorage<8, 32> mUnk9c727e;
    ::ll::UntypedStorage<4, 12> mUnk531db0;
    ::ll::UntypedStorage<4, 12> mUnk71dbde;
    ::ll::UntypedStorage<4, 4>  mUnk5328d3;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&);
    VolumeStorageDefinition(VolumeStorageDefinition const&);
    VolumeStorageDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace VolumeInstanceData
