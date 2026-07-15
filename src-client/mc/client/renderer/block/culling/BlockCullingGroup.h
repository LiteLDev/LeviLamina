#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
struct BlockCullingData;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockCullingGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::BlockCullingData>> mBlockCullingDataMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCullingGroup& operator=(BlockCullingGroup const&);
    BlockCullingGroup(BlockCullingGroup const&);
    BlockCullingGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockCullingGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockCullingGroup(::IMinecraftEventing& eventing);

    MCAPI void loadBlockCullingDataAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::cereal::ReflectionCtx const&                       ctx
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
