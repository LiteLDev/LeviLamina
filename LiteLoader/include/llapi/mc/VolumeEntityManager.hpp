/**
 * @file  MC/VolumeEntityManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeEntityManager.
 *
 */
class VolumeEntityManager {

#define AFTER_EXTRA
// Add Member There
public:
struct VolumeEntityDefinition {
    VolumeEntityDefinition() = delete;
    VolumeEntityDefinition(VolumeEntityDefinition const&) = delete;
    VolumeEntityDefinition(VolumeEntityDefinition const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEENTITYMANAGER
public:
    class VolumeEntityManager& operator=(class VolumeEntityManager const &) = delete;
    VolumeEntityManager(class VolumeEntityManager const &) = delete;
    VolumeEntityManager() = delete;
#endif

public:
    /**
     * @hash   455069915
     * @symbol ?getVolumeInstanceCount@VolumeEntityManager@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getVolumeInstanceCount() const;
    /**
     * @hash   -1112723
     * @symbol ?getVolumeInstances@VolumeEntityManager@@QEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getVolumeInstances(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   2022685087
     * @symbol ?isTriggerVolumesEnabled@VolumeEntityManager@@2_NA
     */
    MCAPI static bool isTriggerVolumesEnabled;
    /**
     * @hash   30598610
     * @symbol ?registerComponentNetRelevancy@VolumeEntityManager@@SAXAEAVComponentNetRelevancyRegistry@@@Z
     */
    MCAPI static void registerComponentNetRelevancy(class ComponentNetRelevancyRegistry &);

//protected:
    /**
     * @hash   -1185576289
     * @symbol ??0VolumeEntityManager@@IEAA@V?$StackRefResultT@UEntityRegistryRefTraits@@@@@Z
     */
    MCAPI VolumeEntityManager(class StackRefResultT<struct EntityRegistryRefTraits>);
    /**
     * @hash   -1256213409
     * @symbol ?_createVolumeEntity@VolumeEntityManager@@IEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBVDefinitionInstanceGroup@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> _createVolumeEntity(class DefinitionInstanceGroup const &);

protected:

};