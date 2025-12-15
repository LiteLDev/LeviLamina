#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
// clang-format on

namespace dragon::frameobject {

struct IntraFrameAllocatorContainer {
public:
    // IntraFrameAllocatorContainer inner types declare
    // clang-format off
    struct BufferCompare;
    struct BufferHasher;
    struct ThreadLocalData;
    // clang-format on

    // IntraFrameAllocatorContainer inner types define
    struct BufferCompare {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource> const& lhs,
            ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource> const& rhs
        ) const;

        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource> const&,
            ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource> const&
        ) const;
        // NOLINTEND
    };

    struct BufferHasher {};

    struct ThreadLocalData {};
};

} // namespace dragon::frameobject
