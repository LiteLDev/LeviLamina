#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class ComponentNetRelevancyRegistry;
class DefinitionInstanceGroup;
class EntityContext;
class EntityRegistry;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4d91e3;
    ::ll::UntypedStorage<8, 8>  mUnk3ed3b4;
    ::ll::UntypedStorage<8, 64> mUnk438525;
    ::ll::UntypedStorage<8, 64> mUnk2b84c0;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeEntityManager& operator=(VolumeEntityManager const&);
    VolumeEntityManager(VolumeEntityManager const&);
    VolumeEntityManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~VolumeEntityManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~VolumeEntityManager() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::OwnerPtr<::EntityContext> _createVolumeEntity(::DefinitionInstanceGroup const& definitionGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void
    registerComponentNetRelevancy(::ComponentNetRelevancyRegistry& registry, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::StackRefResult<::EntityRegistry> registry, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
