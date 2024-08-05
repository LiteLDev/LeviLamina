#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/AutomaticID.h"

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

    MCAPI static void
    registerComponentNetRelevancy(class ComponentNetRelevancyRegistry&, struct cereal::ReflectionCtx const&);

    MCAPI static bool isTriggerVolumesEnabled;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI VolumeEntityManager(class StackRefResult<class EntityRegistry>, struct cereal::ReflectionCtx&);

    MCAPI class OwnerPtr<class EntityContext> _createVolumeEntity(class DefinitionInstanceGroup const& definitionGroup);

    // NOLINTEND
};
