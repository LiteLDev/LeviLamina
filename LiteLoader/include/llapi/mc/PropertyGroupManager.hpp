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
     * @symbol ??0PropertyGroupManager\@\@QEAA\@XZ
     */
    MCAPI PropertyGroupManager();
    /**
     * @symbol ?getActorPropertyDataTag\@PropertyGroupManager\@\@QEBA?AVCompoundTag\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class CompoundTag getActorPropertyDataTag(class HashedString const &) const;
    /**
     * @symbol ?getAllPropertyGroups\@PropertyGroupManager\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class std::shared_ptr<class PropertyGroup const>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class PropertyGroup const>>>> const & getAllPropertyGroups() const;
    /**
     * @symbol ?registerGroup\@PropertyGroupManager\@\@QEAAXAEBVHashedString\@\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@\@Z
     */
    MCAPI void registerGroup(class HashedString const &, class std::shared_ptr<class PropertyGroup const>);
    /**
     * @symbol ?tryInitPropertiesOnActor\@PropertyGroupManager\@\@QEBAXAEAVActor\@\@\@Z
     */
    MCAPI void tryInitPropertiesOnActor(class Actor &) const;
    /**
     * @symbol ??1PropertyGroupManager\@\@QEAA\@XZ
     */
    MCAPI ~PropertyGroupManager();

};
