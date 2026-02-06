#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/objects/ParticleLayerRenderObject.h"
#include "mc/platform/NonCopyableField.h"

struct ParticleRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mAlphaTested;
            ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mBlended;
            ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mOpaque;
        };
        ::ll::TypedStorage<1, 1, ::Bedrock::Detail::NonCopyableField> _;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleRenderObjectCollection& operator=(ParticleRenderObjectCollection const&);
    ParticleRenderObjectCollection(ParticleRenderObjectCollection const&);
    ParticleRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleRenderObjectCollection(::ParticleRenderObjectCollection&&);

    MCAPI ~ParticleRenderObjectCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ParticleRenderObjectCollection&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
