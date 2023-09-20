/**
 * @file  DynamicProperties.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicProperties.
 *
 */
class DynamicProperties {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICPROPERTIES
public:
    class DynamicProperties& operator=(class DynamicProperties const &) = delete;
    DynamicProperties(class DynamicProperties const &) = delete;
    DynamicProperties() = delete;
#endif

public:
    /**
     * @symbol ?deserialize\@DynamicProperties\@\@QEAAXAEBVCompoundTag\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const &, struct cereal::ReflectionCtx const &);
    /**
     * @symbol ?getCollectionCount\@DynamicProperties\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCollectionCount() const;
    /**
     * @symbol ?getDynamicProperty\@DynamicProperties\@\@QEAAPEAV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@0\@Z
     */
    MCAPI class std::variant<float, bool, std::string, class Vec3> * getDynamicProperty(std::string const &, std::string const &);
    /**
     * @symbol ??4DynamicProperties\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DynamicProperties & operator=(class DynamicProperties &&);
    /**
     * @symbol ?registerLevelStorageManagerListener\@DynamicProperties\@\@QEAAXAEAVLevelStorageManager\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager &, struct cereal::ReflectionCtx const &);
    /**
     * @symbol ?removeDynamicProperty\@DynamicProperties\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool removeDynamicProperty(std::string const &, std::string const &);
    /**
     * @symbol ?serialize\@DynamicProperties\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize(struct cereal::ReflectionCtx const &) const;
    /**
     * @symbol ?setDynamicProperty\@DynamicProperties\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@3\@0\@Z
     */
    MCAPI void setDynamicProperty(std::string const &, class std::variant<float, bool, std::string, class Vec3> const &, std::string const &);
    /**
     * @symbol ?writeToLevelStorage\@DynamicProperties\@\@QEAAXAEAVLevelStorage\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void writeToLevelStorage(class LevelStorage &, struct cereal::ReflectionCtx const &);
    /**
     * @symbol ??1DynamicProperties\@\@QEAA\@XZ
     */
    MCAPI ~DynamicProperties();
    /**
     * @symbol ?STORAGE_TAG\@DynamicProperties\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_TAG;
    /**
     * @symbol ?bindType\@DynamicProperties\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?readFromLevelStorage\@DynamicProperties\@\@SA?AV?$unique_ptr\@VDynamicProperties\@\@U?$default_delete\@VDynamicProperties\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static std::unique_ptr<class DynamicProperties> readFromLevelStorage(class LevelStorage &, struct cereal::ReflectionCtx const &);
    /**
     * @symbol ?validateDynamicProperty\@DynamicProperties\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUDynamicPropertyDefinition\@\@AEBV23\@PEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@3\@\@Z
     */
    MCAPI static std::string validateDynamicProperty(struct DynamicPropertyDefinition const *, std::string const &, class std::variant<float, bool, std::string, class Vec3> const *);

//private:
    /**
     * @symbol ?_getPropertyVariant\@DynamicProperties\@\@CA?AVmeta_any\@entt\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@std\@\@\@Z
     */
    MCAPI static class entt::meta_any _getPropertyVariant(class std::variant<float, bool, std::string, class Vec3> const &);

private:

};
