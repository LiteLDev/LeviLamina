#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/checked_resource_service/TransactionContainer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct TaskQueueContext; }
namespace dragon { struct TextureDescription; }
namespace mce { struct AsyncExecutionPolicy; }
// clang-format on

namespace dragon::res {

class CopyTextureTransaction {
public:
    // CopyTextureTransaction inner types define
    using TransactionContainer = ::mce::TransactionContainer<
        ::dragon::res::CopyTextureTransaction,
        ::dragon::ResolvedTextureResource,
        ::mce::AsyncExecutionPolicy>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>> mSrc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::dragon::TextureDescription> apply(
        ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource> const& textureTransactionPointer,
        ::dragon::TaskQueueContext&
    );

    MCNAPI ~CopyTextureTransaction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::res
