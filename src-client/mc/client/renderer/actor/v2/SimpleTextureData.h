#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorTextureInfo;
// clang-format on

struct SimpleTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkd42640;
    ::ll::UntypedStorage<4, 20>  mUnk7101c9;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleTextureData& operator=(SimpleTextureData const&);
    SimpleTextureData(SimpleTextureData const&);
    SimpleTextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SimpleTextureData(::ActorTextureInfo const& info);

    MCNAPI ~SimpleTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorTextureInfo const& info);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
