#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/platform/NonCopyableField.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

struct ParticleTypeRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mLayerMesh;
            ::ll::TypedStorage<8, 32, ::mce::TexturePtr>              mLayerTexture;
            ::ll::TypedStorage<1, 1, bool>                            mBlend;
        };
        ::ll::TypedStorage<1, 1, ::Bedrock::Detail::NonCopyableField> _;
    };
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ParticleTypeRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
