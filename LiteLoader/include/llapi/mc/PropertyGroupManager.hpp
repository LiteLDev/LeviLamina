/**
 * @file  PropertyGroupManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyGroupManager.
 *
 */
class PropertyGroupManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYGROUPMANAGER
public:
    class PropertyGroupManager& operator=(class PropertyGroupManager const &) = delete;
    PropertyGroupManager(class PropertyGroupManager const &) = delete;
#endif

public:
    /**
     * @hash   541219199
     * @symbol  ??0PropertyGroupManager\@\@QEAA\@XZ
     */
    MCAPI PropertyGroupManager();
    /**
     * @hash   -1067254615
     * @symbol  ?getActorPropertyDataTag\@PropertyGroupManager\@\@QEBA?AVCompoundTag\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class CompoundTag getActorPropertyDataTag(class HashedString const &) const;
    /**
     * @hash   -1853764008
     * @symbol  ?registerGroup\@PropertyGroupManager\@\@QEAAXAEBVHashedString\@\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@\@Z
     */
    MCAPI void registerGroup(class HashedString const &, class std::shared_ptr<class PropertyGroup const>);
    /**
     * @hash   425221946
     * @symbol  ?tryInitPropertiesOnActor\@PropertyGroupManager\@\@QEBAXAEAVActor\@\@\@Z
     */
    MCAPI void tryInitPropertiesOnActor(class Actor &) const;
    /**
     * @hash   -1395110211
     * @symbol  ??1PropertyGroupManager\@\@QEAA\@XZ
     */
    MCAPI ~PropertyGroupManager();

};