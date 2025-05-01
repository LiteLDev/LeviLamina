#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/BlendVersion.h"

// auto generated forward declare list
// clang-format off
class StringByteInput;
// clang-format on

struct PersistentBlendData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfb2e3a;
    ::ll::UntypedStorage<2, 32> mUnkf84333;
    ::ll::UntypedStorage<1, 1>  mUnk5def06;
    ::ll::UntypedStorage<1, 1>  mUnk68d508;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistentBlendData& operator=(PersistentBlendData const&);
    PersistentBlendData(PersistentBlendData const&);
    PersistentBlendData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersistentBlendData(::StringByteInput& stream);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PersistentBlendData createNoBlend(::BlendVersion blendVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StringByteInput& stream);
    // NOLINTEND
};
