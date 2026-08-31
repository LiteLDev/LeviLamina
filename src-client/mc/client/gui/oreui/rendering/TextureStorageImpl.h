#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/rendering/IRenderingBackendTextureStorage.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/Sampler2DObject.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BackendRenderConfig.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureService; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct BackendTextureStorageDependencies; }
namespace Gameface { struct VisitedRenderTarget; }
namespace Gameface { struct VisitedSampler; }
namespace Gameface { struct VisitedTexture; }
namespace GeometryAtlas { class IAtlasTile; }
namespace dragon { class ResolvedTextureResource; }
namespace mce { struct SamplerStateDescription; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct SetPSSamplersCmd; }
namespace renoir { struct SetPSTexturesCmd; }
namespace renoir { struct SetRenderTargetCmd; }
namespace renoir { struct Texture2D; }
namespace renoir { struct UpdateBox; }
// clang-format on

namespace Gameface {

class TextureStorageImpl : public ::Gameface::IRenderingBackendTextureStorage {
public:
    // TextureStorageImpl inner types declare
    // clang-format off
    struct WrapUserTextureArgs;
    struct TextureStorage;
    // clang-format on

    // TextureStorageImpl inner types define
    struct WrapUserTextureArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::renoir::Texture2D const&>       mDescription;
        ::ll::TypedStorage<8, 8, ::renoir::Texture2DObject const&> mObject;
        // NOLINTEND

    public:
        // prevent constructor by default
        WrapUserTextureArgs& operator=(WrapUserTextureArgs const&);
        WrapUserTextureArgs(WrapUserTextureArgs const&);
        WrapUserTextureArgs();
    };

    struct TextureStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            32,
            ::std::variant<
                ::std::monostate,
                ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>,
                ::mce::ClientTexture,
                ::std::shared_ptr<::GeometryAtlas::IAtlasTile>>>
                                                                mTexture;
        ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mDesc;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::Texture2DObject, ::Gameface::TextureStorageImpl::TextureStorage>>
        mTextures;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::DepthStencilTextureObject, ::Gameface::TextureStorageImpl::TextureStorage>>
        mDepthTextures;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::renoir::Sampler2DObject, ::mce::SamplerStateDescription>>
                                                                          mSamplers;
    ::ll::TypedStorage<4, 20, ::std::array<::renoir::Texture2DObject, 5>> mRequestedTextures;
    ::ll::TypedStorage<4, 20, ::std::array<::renoir::Sampler2DObject, 5>> mRequestedSamplers;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>         mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Gameface::IRenderingBackendTextureService>>>
                                                                                 mTextureService;
    ::ll::TypedStorage<1, 2, ::Gameface::RenderUtils::BackendRenderConfig const> mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStorageImpl& operator=(TextureStorageImpl const&);
    TextureStorageImpl(TextureStorageImpl const&);
    TextureStorageImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void wrapUserRenderTarget(
        ::mce::ClientTexture             texture,
        ::renoir::Texture2D const&       description,
        ::renoir::Texture2DObject const& object
    ) /*override*/;

    virtual void wrapUserTexture(
        uint64                          id,
        ::renoir::Texture2D const&      description,
        ::renoir::Texture2DObject const object
    ) /*override*/;

    virtual void createTexture(
        ::renoir::Texture2DObject const object,
        ::renoir::Texture2D const&      description,
        void const*                     data,
        uint const                      dataLen
    ) /*override*/;

    virtual void destroyTexture(::renoir::Texture2DObject const object) /*override*/;

    virtual void updateTexture(
        ::renoir::Texture2DObject const object,
        ::renoir::Texture2D const&      description,
        ::renoir::UpdateBox*            boxes,
        void const**                    newBytes,
        uint const                      count
    ) /*override*/;

    virtual void createDepthStencilTexture(
        ::renoir::DepthStencilTextureObject const object,
        ::renoir::DepthStencilTexture const&      description
    ) /*override*/;

    virtual void destroyDepthStencilTexture(::renoir::DepthStencilTextureObject const object) /*override*/;

    virtual void
    createSampler2D(::renoir::Sampler2DObject const object, ::renoir::Sampler2D const& description) /*override*/;

    virtual void destroySampler2D(::renoir::Sampler2DObject const object) /*override*/;

    virtual void visitRenderTarget(
        ::renoir::SetRenderTargetCmd const& cmd,
        ::brstd::function_ref<
            void(::Gameface::VisitedRenderTarget const&) const,
            void(::Gameface::VisitedRenderTarget const&)> visitor
    ) /*override*/;

    virtual void
    setPSSamplers(::renoir::SetPSSamplersCmd const& cmd, ::renoir::Sampler2DObject const* samplers) /*override*/;

    virtual void
    setPSTextures(::renoir::SetPSTexturesCmd const& cmd, ::renoir::Texture2DObject const* textures) /*override*/;

    virtual void visitMeshTextures(
        ::brstd::function_ref<void(::Gameface::VisitedTexture const&) const, void(::Gameface::VisitedTexture const&)>
            visitor
    ) /*override*/;

    virtual void visitMeshSamplers(
        ::brstd::function_ref<void(::Gameface::VisitedSampler const&) const, void(::Gameface::VisitedSampler const&)>
            visitor
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TextureStorageImpl(::Gameface::BackendTextureStorageDependencies&& deps);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Gameface::BackendTextureStorageDependencies&& deps);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $wrapUserRenderTarget(
        ::mce::ClientTexture             texture,
        ::renoir::Texture2D const&       description,
        ::renoir::Texture2DObject const& object
    );

    MCAPI void
    $wrapUserTexture(uint64 id, ::renoir::Texture2D const& description, ::renoir::Texture2DObject const object);

    MCAPI void $createTexture(
        ::renoir::Texture2DObject const object,
        ::renoir::Texture2D const&      description,
        void const*                     data,
        uint const                      dataLen
    );

    MCAPI void $destroyTexture(::renoir::Texture2DObject const object);

    MCAPI void $updateTexture(
        ::renoir::Texture2DObject const object,
        ::renoir::Texture2D const&      description,
        ::renoir::UpdateBox*            boxes,
        void const**                    newBytes,
        uint const                      count
    );

    MCAPI void $createDepthStencilTexture(
        ::renoir::DepthStencilTextureObject const object,
        ::renoir::DepthStencilTexture const&      description
    );

    MCAPI void $destroyDepthStencilTexture(::renoir::DepthStencilTextureObject const object);

    MCAPI void $createSampler2D(::renoir::Sampler2DObject const object, ::renoir::Sampler2D const& description);

    MCAPI void $destroySampler2D(::renoir::Sampler2DObject const object);

    MCAPI void $visitRenderTarget(
        ::renoir::SetRenderTargetCmd const& cmd,
        ::brstd::function_ref<
            void(::Gameface::VisitedRenderTarget const&) const,
            void(::Gameface::VisitedRenderTarget const&)> visitor
    );

    MCAPI void $setPSSamplers(::renoir::SetPSSamplersCmd const& cmd, ::renoir::Sampler2DObject const* samplers);

    MCAPI void $setPSTextures(::renoir::SetPSTexturesCmd const& cmd, ::renoir::Texture2DObject const* textures);

    MCAPI void $visitMeshTextures(
        ::brstd::function_ref<void(::Gameface::VisitedTexture const&) const, void(::Gameface::VisitedTexture const&)>
            visitor
    );

    MCAPI void $visitMeshSamplers(
        ::brstd::function_ref<void(::Gameface::VisitedSampler const&) const, void(::Gameface::VisitedSampler const&)>
            visitor
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Gameface
