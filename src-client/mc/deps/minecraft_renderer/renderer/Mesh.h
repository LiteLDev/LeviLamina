#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/minecraft_renderer/resources/IndexBufferContainer.h"
#include "mc/deps/renderer/VertexField.h"

// auto generated forward declare list
// clang-format off
struct UIActorOffscreenCaptureDescription;
struct UIMeshOffscreenCaptureDescription;
struct UIStructureVolumeOffscreenCaptureDescription;
struct UIThumbnailMeshOffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class MeshContext; }
namespace mce { class MeshData; }
namespace mce { class TexturePtr; }
namespace mce { struct BufferResourceService; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
namespace mce { struct VertexLayout; }
// clang-format on


namespace dragon::mesh {
class Mesh;
}

namespace mce {

class Mesh : public ::mce::IndexBufferContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkec9286;
    ::ll::UntypedStorage<1, 1>   mUnkb4d322;
    ::ll::UntypedStorage<1, 1>   mUnk8c4214;
    ::ll::UntypedStorage<1, 1>   mUnke541a1;
    ::ll::UntypedStorage<8, 16>  mUnka680f3;
    ::ll::UntypedStorage<8, 288> mUnkeee020;
    ::ll::UntypedStorage<8, 24>  mUnk333a59;
    ::ll::UntypedStorage<8, 24>  mUnk7e0951;
    ::ll::UntypedStorage<4, 8>   mUnk97b8bc;
    ::ll::UntypedStorage<2, 70>  mUnk56b681;
    ::ll::UntypedStorage<8, 24>  mUnkec49af;
    // NOLINTEND

public:
    // prevent constructor by default
    Mesh& operator=(Mesh const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mesh();

    MCNAPI Mesh(::mce::Mesh&& c);

    MCNAPI Mesh(::mce::Mesh const& rhs);

    MCNAPI Mesh(
        ::std::shared_ptr<::mce::BufferResourceService>& bufferResourceService,
        ::mce::MeshData&&                                data,
        bool                                             temporary,
        ::std::string_view                               debugName
    );

    MCNAPI void _freeHALData() const;

    MCNAPI bool _loadRawData(::mce::BufferResourceService& bufferResourceService, ::std::string_view debugName) const;

    MCNAPI void _move(::mce::Mesh& rhs);

    MCNAPI void _renderMesh(
        ::mce::MeshContext&       meshContext,
        ::mce::MaterialPtr const& materialPtr,
        ::brstd::static_vector<
            ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture>,
            8> textures,
        uint   startOffset,
        uint   count,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*                         overrideIndexBuffer,
        ::std::optional<::dragon::RenderMetadata>                  renderMetadata
    ) const;

    MCNAPI bool areBuffersValid() const;

    MCNAPI void generateHALData(::mce::VertexLayout const* forcedLayout, bool splitStream) const;

    MCNAPI uint64 getMeshVertexCount() const;

    MCNAPI bool hasField(::mce::VertexField type) const;

    MCNAPI bool isValid() const;

    MCNAPI bool isVertexLayoutValid() const;

    MCNAPI explicit operator ::dragon::mesh::Mesh() const;

    MCNAPI void prepareAsEmptyData(::mce::VertexLayout const& forcedLayout) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&       meshContext,
        ::mce::MaterialPtr const& materialPtr,
        uint                      startOffset,
        uint                      count,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*                         overrideIndexBuffer
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&       meshContext,
        ::mce::MaterialPtr const& materialPtr,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        uint startOffset,
        uint count,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*                         overrideIndexBuffer
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&                      meshContext,
        ::mce::MaterialPtr const&                materialPtr,
        ::gsl::span<::mce::ClientTexture const*> textures,
        uint                                     startOffset,
        uint                                     count,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*                         overrideIndexBuffer
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&                                                        meshContext,
        ::mce::MaterialPtr const&                                                  materialPtr,
        ::std::initializer_list<::std::reference_wrapper<::mce::TexturePtr const>> textures,
        uint                                                                       startOffset,
        uint                                                                       count,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        ::mce::IndexBufferContainer const*                         overrideIndexBuffer
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&             meshContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::mce::MaterialPtr const&       materialPtr,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        uint                               startOffset,
        uint                               count,
        ::mce::IndexBufferContainer const* overrideIndexBuffer
    ) const;

    MCNAPI void reset();

    MCNAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::Mesh&& c);

    MCNAPI void* $ctor(::mce::Mesh const& rhs);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::mce::BufferResourceService>& bufferResourceService,
        ::mce::MeshData&&                                data,
        bool                                             temporary,
        ::std::string_view                               debugName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
