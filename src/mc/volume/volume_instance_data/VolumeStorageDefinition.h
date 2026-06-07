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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&);
    VolumeStorageDefinition(VolumeStorageDefinition const&);
    VolumeStorageDefinition();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&);
    VolumeStorageDefinition();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI VolumeStorageDefinition(::VolumeInstanceData::VolumeStorageDefinition const&);

    MCNAPI ::VolumeInstanceData::VolumeStorageDefinition& operator=(::VolumeInstanceData::VolumeStorageDefinition&&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::VolumeInstanceData::VolumeStorageDefinition const&);
#endif
    // NOLINTEND
};

} // namespace VolumeInstanceData
