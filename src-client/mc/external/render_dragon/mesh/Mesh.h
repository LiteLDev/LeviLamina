#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::mesh { struct MeshDescription; }
// clang-format on

namespace dragon::mesh {

class Mesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka798ae;
    ::ll::UntypedStorage<8, 24> mUnkdbf63d;
    ::ll::UntypedStorage<8, 24> mUnk4000f3;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mesh();

    MCNAPI Mesh(::dragon::mesh::Mesh const&);

    MCNAPI Mesh(
        ::dragon::mesh::MeshDescription const&                                meshDescription,
        ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>& vertexBuffer,
        ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>&  indexBuffer
    );

    MCNAPI Mesh(
        ::dragon::mesh::MeshDescription const&                                              meshDescription,
        ::std::vector<::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>> vertexBuffers,
        ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>&                indexBuffer
    );

    MCNAPI bool areBuffersValid() const;

    MCNAPI ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource> const&
    getVertexBuffer(uchar index) const;

    MCNAPI ::dragon::mesh::Mesh& operator=(::dragon::mesh::Mesh const&);

    MCNAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::dragon::mesh::Mesh const&);

    MCNAPI void* $ctor(
        ::dragon::mesh::MeshDescription const&                                meshDescription,
        ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>& vertexBuffer,
        ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>&  indexBuffer
    );

    MCNAPI void* $ctor(
        ::dragon::mesh::MeshDescription const&                                              meshDescription,
        ::std::vector<::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>> vertexBuffers,
        ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>&                indexBuffer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::mesh
