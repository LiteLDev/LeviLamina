#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    VolumeEntityManager& operator=(VolumeEntityManager const&);
    VolumeEntityManager(VolumeEntityManager const&);
    VolumeEntityManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeEntityManager();

    MCAPI uint64 getVolumeInstanceCount() const;

    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getVolumeInstances(DimensionType dimension) const;

    MCAPI static void registerComponentNetRelevancy(
        class ComponentNetRelevancyRegistry& registry,
        struct cereal::ReflectionCtx const&  ctx
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI VolumeEntityManager(class StackRefResult<class EntityRegistry> registry, struct cereal::ReflectionCtx& ctx);

    MCAPI class OwnerPtr<class EntityContext> _createVolumeEntity(class DefinitionInstanceGroup const& definitionGroup);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class StackRefResult<class EntityRegistry> registry, struct cereal::ReflectionCtx& ctx);

    MCAPI void dtor$();

    MCAPI static bool& isTriggerVolumesEnabled();

    // NOLINTEND
};
