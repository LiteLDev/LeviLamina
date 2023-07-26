#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/world/AutomaticID.h"

class VolumeEntityManager {

public:
    // prevent constructor by default
    VolumeEntityManager& operator=(VolumeEntityManager const&) = delete;
    VolumeEntityManager(VolumeEntityManager const&)            = delete;
    VolumeEntityManager()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEENTITYMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VolumeEntityManager(); // NOLINT
#endif
    /**
     * @symbol ?getVolumeInstanceCount\@VolumeEntityManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getVolumeInstanceCount() const; // NOLINT
    /**
     * @symbol
     * ?getVolumeInstances\@VolumeEntityManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const&
          getVolumeInstances(class AutomaticID<class Dimension, int>) const; // NOLINT
    /**
     * @symbol ?registerComponentNetRelevancy\@VolumeEntityManager\@\@SAXAEAVComponentNetRelevancyRegistry\@\@\@Z
     */
    MCAPI static void registerComponentNetRelevancy(class ComponentNetRelevancyRegistry&); // NOLINT
    /**
     * @symbol ?isTriggerVolumesEnabled\@VolumeEntityManager\@\@2_NA
     */
    MCAPI static bool isTriggerVolumesEnabled; // NOLINT

    // protected:
    /**
     * @symbol ??0VolumeEntityManager\@\@IEAA\@V?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@\@Z
     */
    MCAPI VolumeEntityManager(class StackRefResultT<struct EntityRegistryRefTraits>); // NOLINT
    /**
     * @symbol
     * ?_createVolumeEntity\@VolumeEntityManager\@\@IEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> _createVolumeEntity(class DefinitionInstanceGroup const&); // NOLINT

protected:
};
