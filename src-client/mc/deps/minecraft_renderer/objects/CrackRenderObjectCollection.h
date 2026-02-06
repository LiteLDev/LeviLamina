#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
struct CrackRenderObject;
// clang-format on

struct CrackRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::CrackRenderObject, ::LinearAllocator<::CrackRenderObject>>> mCracks;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                                          mAtlasTexture;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CrackRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
