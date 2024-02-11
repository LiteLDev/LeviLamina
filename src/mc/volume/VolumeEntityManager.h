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
    // vIndex: 0, symbol: ??1VolumeEntityManager@@UEAA@XZ
    virtual ~VolumeEntityManager();

    // symbol: ?getVolumeInstanceCount@VolumeEntityManager@@QEBA_KXZ
    MCAPI uint64 getVolumeInstanceCount() const;

    // symbol:
    // ?getVolumeInstances@VolumeEntityManager@@QEBAAEBV?$vector@V?$OwnerPtr@VEntityContext@@@@V?$allocator@V?$OwnerPtr@VEntityContext@@@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getVolumeInstances(DimensionType dimension) const;

    // symbol:
    // ?registerComponentNetRelevancy@VolumeEntityManager@@SAXAEAVComponentNetRelevancyRegistry@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static void
    registerComponentNetRelevancy(class ComponentNetRelevancyRegistry&, struct cereal::ReflectionCtx const&);

    // symbol: ?isTriggerVolumesEnabled@VolumeEntityManager@@2_NA
    MCAPI static bool isTriggerVolumesEnabled;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0VolumeEntityManager@@IEAA@V?$StackRefResult@VEntityRegistry@@@@AEAUReflectionCtx@cereal@@@Z
    MCAPI VolumeEntityManager(class StackRefResult<class EntityRegistry>, struct cereal::ReflectionCtx&);

    // symbol:
    // ?_createVolumeEntity@VolumeEntityManager@@IEAA?AV?$OwnerPtr@VEntityContext@@@@AEBVDefinitionInstanceGroup@@@Z
    MCAPI class OwnerPtr<class EntityContext> _createVolumeEntity(class DefinitionInstanceGroup const& definitionGroup);

    // NOLINTEND
};
