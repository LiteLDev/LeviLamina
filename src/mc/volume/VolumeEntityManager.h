#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/AutomaticID.h"

class VolumeEntityManager : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    VolumeEntityManager& operator=(VolumeEntityManager const&) = delete;
    VolumeEntityManager(VolumeEntityManager const&)            = delete;
    VolumeEntityManager()                                      = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEENTITYMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VolumeEntityManager();
#endif
    /**
     * @symbol ?getVolumeInstanceCount\@VolumeEntityManager\@\@QEBA_KXZ
     */
    MCAPI uint64_t getVolumeInstanceCount() const;
    /**
     * @symbol
     * ?getVolumeInstances\@VolumeEntityManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const&
          getVolumeInstances(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ?registerComponentNetRelevancy\@VolumeEntityManager\@\@SAXAEAVComponentNetRelevancyRegistry\@\@\@Z
     */
    MCAPI static void registerComponentNetRelevancy(class ComponentNetRelevancyRegistry&);
    /**
     * @symbol ?isTriggerVolumesEnabled\@VolumeEntityManager\@\@2_NA
     */
    MCAPI static bool isTriggerVolumesEnabled;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0VolumeEntityManager\@\@IEAA\@V?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@\@Z
     */
    MCAPI VolumeEntityManager(class StackRefResultT<struct EntityRegistryRefTraits>);
    /**
     * @symbol
     * ?_createVolumeEntity\@VolumeEntityManager\@\@IEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> _createVolumeEntity(class DefinitionInstanceGroup const&);
    // NOLINTEND
};
