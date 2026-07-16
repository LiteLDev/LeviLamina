#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"
#include "mc/deps/minecraft_renderer/renderer/MeshDebugString.h"
#include "mc/deps/minecraft_renderer/resources/IndexBufferContainer.h"
#include "mc/deps/renderer/VertexLayout.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"

// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::mesh { class Mesh; }
namespace mce { class MaterialPtr; }
namespace mce { class MeshContext; }
namespace mce { class TexturePtr; }
namespace mce { struct BufferResourceService; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace mce {

class Mesh : public ::mce::IndexBufferContainer {
public:
    // Mesh inner types define
    using Index = uint;

    using TextureList = ::brstd::static_vector<
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture>,
        8>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::variant<::std::monostate, uint64, ::glm::ivec3>> mCacheKey;
    ::ll::TypedStorage<1, 1, bool>                                                    mTemporary;
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode>                                    mPrimitiveMode;
    ::ll::TypedStorage<1, 1, ::mce::MeshDebugString>                                  mDebugName;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>>          mBufferResourceService;
    ::ll::TypedStorage<8, 312, ::mce::MeshData>                                       mMeshData;
    ::ll::TypedStorage<
        8,
        24,
        ::mce::ClientResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Buffer,
            ::mce::ClientResourcePointer<::dragon::ResolvedVertexBufferResource>,
            ::mce::ClientResourcePointer<::dragon::ResolvedIndexBufferResource>>>>
        mVertexBuffer;
    ::ll::TypedStorage<
        8,
        24,
        ::mce::ClientResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Buffer,
            ::mce::ClientResourcePointer<::dragon::ResolvedVertexBufferResource>,
            ::mce::ClientResourcePointer<::dragon::ResolvedIndexBufferResource>>>>
                                                    mAttributeBuffer;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mVertexCount;
    ::ll::TypedStorage<2, 110, ::mce::VertexLayout> mVertexLayout;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mRawData;
    // NOLINTEND

public:
    // prevent constructor by default
    Mesh& operator=(Mesh const&);
    Mesh();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Mesh(::mce::Mesh const& rhs);

    MCAPI Mesh(
        ::std::shared_ptr<::mce::BufferResourceService>& bufferResourceService,
        ::mce::MeshData&&                                data,
        bool                                             temporary,
        ::std::string_view                               debugName
    );

    MCAPI bool _loadBlankData(::mce::BufferResourceService& bufferResourceService, ::std::string_view debugName) const;

    MCAPI bool _loadRawData(::mce::BufferResourceService& bufferResourceService, ::std::string_view debugName) const;

    MCAPI void _move(::mce::Mesh& rhs);

    MCAPI void _renderMesh(
        ::mce::MeshContext&       meshContext,
        ::mce::MaterialPtr const& materialPtr,
        ::brstd::static_vector<
            ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture>,
            8>                                    textures,
        uint                                      startOffset,
        uint                                      count,
        ::OffscreenCaptureDescription const&      offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*        overrideIndexBuffer,
        ::std::optional<::dragon::RenderMetadata> renderMetadata
    ) const;

    MCAPI bool areBuffersValid() const;

    MCAPI void generateHALData(::mce::VertexLayout const* forcedLayout, bool splitStream) const;

    MCAPI ::gsl::span<uchar const> getRawData() const;

    MCAPI bool isValid() const;

    MCAPI void load(::mce::BufferResourceService& bufferResourceService);

    MCAPI explicit operator ::dragon::mesh::Mesh() const;

    MCAPI void prepareAsEmptyData(::mce::VertexLayout const& forcedLayout) const;

    MCAPI void prepareRenderData(::mce::VertexLayout const& forcedLayout) const;

    MCAPI void renderMesh(
        ::mce::MeshContext&       meshContext,
        ::mce::MaterialPtr const& materialPtr,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        uint                                 startOffset,
        uint                                 count,
        ::OffscreenCaptureDescription const& offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*   overrideIndexBuffer
    ) const;

    MCAPI void renderMesh(
        ::mce::MeshContext&                      meshContext,
        ::mce::MaterialPtr const&                materialPtr,
        ::gsl::span<::mce::ClientTexture const*> textures,
        uint                                     startOffset,
        uint                                     count,
        ::OffscreenCaptureDescription const&     offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*       overrideIndexBuffer
    ) const;

    MCAPI void renderMesh(
        ::mce::MeshContext&             meshContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::mce::MaterialPtr const&       materialPtr,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        uint                               startOffset,
        uint                               count,
        ::mce::IndexBufferContainer const* overrideIndexBuffer
    ) const;

    MCAPI void reset();

    MCAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::Mesh const& rhs);

    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::BufferResourceService>& bufferResourceService,
        ::mce::MeshData&&                                data,
        bool                                             temporary,
        ::std::string_view                               debugName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
