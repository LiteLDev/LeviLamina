#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct FrameRenderObject;
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
    // prevent constructor by default
    ParticleLayerRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleLayerRenderObject(
        ::LinearAllocator<::FrameRenderObject>& alloc,
        ::mce::MaterialPtr const*               layerMaterial,
        uint64                                  particleCount
    );

    MCAPI ~ParticleLayerRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::LinearAllocator<::FrameRenderObject>& alloc, ::mce::MaterialPtr const* layerMaterial, uint64 particleCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
