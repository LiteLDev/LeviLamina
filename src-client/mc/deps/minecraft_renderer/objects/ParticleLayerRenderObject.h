#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct ParticleTypeRenderObject;
namespace mce { class MaterialPtr; }
// clang-format on

struct ParticleLayerRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::ParticleTypeRenderObject, ::LinearAllocator<::ParticleTypeRenderObject>>>
                                                        mLayers;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mLayerMaterial;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ParticleLayerRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
