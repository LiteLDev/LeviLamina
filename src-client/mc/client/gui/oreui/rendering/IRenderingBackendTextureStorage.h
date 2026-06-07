#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { struct BackendTextureStorageDependencies; }
namespace Gameface { struct VisitedRenderTarget; }
namespace Gameface { struct VisitedSampler; }
namespace Gameface { struct VisitedTexture; }
namespace mce { struct ClientTexture; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct DepthStencilTextureObject; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct Sampler2DObject; }
namespace renoir { struct SetPSSamplersCmd; }
namespace renoir { struct SetPSTexturesCmd; }
namespace renoir { struct SetRenderTargetCmd; }
namespace renoir { struct Texture2D; }
namespace renoir { struct Texture2DObject; }
namespace renoir { struct UpdateBox; }
// clang-format on

namespace Gameface {

class IRenderingBackendTextureStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRenderingBackendTextureStorage() = default;

    virtual void wrapUserRenderTarget(
        ::mce::ClientTexture             texture,
        ::renoir::Texture2D const&       description,
        ::renoir::Texture2DObject const& object
    ) = 0;

    virtual void
    wrapUserTexture(uint64 id, ::renoir::Texture2D const& description, ::renoir::Texture2DObject const object) = 0;

    virtual void createTexture(
        ::renoir::Texture2DObject const object,
        ::renoir::Texture2D const&      description,
        void const*                     data,
        uint const                      dataLen
    ) = 0;

    virtual void destroyTexture(::renoir::Texture2DObject const object) = 0;

    virtual void updateTexture(
        ::renoir::Texture2DObject const object,
        ::renoir::Texture2D const&      description,
        ::renoir::UpdateBox*            boxes,
        void const**                    newBytes,
        uint const                      count
    ) = 0;

    virtual void createDepthStencilTexture(
        ::renoir::DepthStencilTextureObject const object,
        ::renoir::DepthStencilTexture const&      description
    ) = 0;

    virtual void destroyDepthStencilTexture(::renoir::DepthStencilTextureObject const object) = 0;

    virtual void createSampler2D(::renoir::Sampler2DObject const object, ::renoir::Sampler2D const& description) = 0;

    virtual void destroySampler2D(::renoir::Sampler2DObject const object) = 0;

    virtual void setPSSamplers(::renoir::SetPSSamplersCmd const& cmd, ::renoir::Sampler2DObject const* samplers) = 0;

    virtual void setPSTextures(::renoir::SetPSTexturesCmd const& cmd, ::renoir::Texture2DObject const* textures) = 0;

    virtual void visitRenderTarget(
        ::renoir::SetRenderTargetCmd const& cmd,
        ::brstd::function_ref<
            void(::Gameface::VisitedRenderTarget const&) const,
            void(::Gameface::VisitedRenderTarget const&)> visitor
    ) = 0;

    virtual void visitMeshTextures(
        ::brstd::function_ref<void(::Gameface::VisitedTexture const&) const, void(::Gameface::VisitedTexture const&)>
            visitor
    ) = 0;

    virtual void visitMeshSamplers(
        ::brstd::function_ref<void(::Gameface::VisitedSampler const&) const, void(::Gameface::VisitedSampler const&)>
            visitor
    ) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Gameface::IRenderingBackendTextureStorage>
    create(::Gameface::BackendTextureStorageDependencies&& deps);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Gameface
