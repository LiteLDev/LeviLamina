#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class Buffer; }
namespace mce { struct BufferResourceService; }
// clang-format on

namespace mce {

class IndexBufferContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4020f2;
    ::ll::UntypedStorage<4, 4>  mUnke8c3a1;
    ::ll::UntypedStorage<4, 4>  mUnkcdebe6;
    ::ll::UntypedStorage<4, 4>  mUnk22efce;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferContainer& operator=(IndexBufferContainer const&);
    IndexBufferContainer(IndexBufferContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IndexBufferContainer();

    MCNAPI ::mce::ClientResourcePointer<::std::variant<
        ::std::monostate,
        ::mce::Buffer,
        ::mce::ClientResourcePointer<::dragon::ResolvedVertexBufferResource>,
        ::mce::ClientResourcePointer<::dragon::ResolvedIndexBufferResource>>> const&
    getIndexBuffer() const;

    MCNAPI uint getIndexCount() const;

    MCNAPI int getIteration() const;

    MCNAPI void loadIndexBuffer(
        ::mce::BufferResourceService& bufferResourceService,
        uint                          stride,
        uchar const* const            data,
        uint                          count,
        ::std::string_view            debugName
    );

    MCNAPI void setIteration(int iteration);

    MCNAPI ~IndexBufferContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
