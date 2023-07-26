#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicProperties {

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&) = delete;
    DynamicProperties(DynamicProperties const&)            = delete;
    DynamicProperties()                                    = delete;

public:
    /**
     * @symbol ?deserialize\@DynamicProperties\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?getCollectionCount\@DynamicProperties\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCollectionCount() const; // NOLINT
    /**
     * @symbol
     * ?getDynamicProperty\@DynamicProperties\@\@QEAAPEAV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@0\@Z
     */
    MCAPI class std::variant<float, bool, std::string>*
    getDynamicProperty(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?registerLevelStorageManagerListener\@DynamicProperties\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&); // NOLINT
    /**
     * @symbol
     * ?removeDynamicProperty\@DynamicProperties\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool removeDynamicProperty(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?serialize\@DynamicProperties\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const; // NOLINT
    /**
     * @symbol
     * ?setDynamicProperty\@DynamicProperties\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@0\@Z
     */
    MCAPI void
    setDynamicProperty(std::string const&, class std::variant<float, bool, std::string> const&, std::string const&); // NOLINT
    /**
     * @symbol ?writeToLevelStorage\@DynamicProperties\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void writeToLevelStorage(class LevelStorage&); // NOLINT
    /**
     * @symbol ??1DynamicProperties\@\@QEAA\@XZ
     */
    MCAPI ~DynamicProperties(); // NOLINT
    /**
     * @symbol ?bindType\@DynamicProperties\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?readFromLevelStorage\@DynamicProperties\@\@SA?AV?$unique_ptr\@VDynamicProperties\@\@U?$default_delete\@VDynamicProperties\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI static std::unique_ptr<class DynamicProperties> readFromLevelStorage(class LevelStorage&); // NOLINT
    /**
     * @symbol
     * ?validateDynamicProperty\@DynamicProperties\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUDynamicPropertyDefinition\@\@AEBV23\@PEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@\@Z
     */
    MCAPI static std::string
    validateDynamicProperty(struct DynamicPropertyDefinition const*, std::string const&, class std::variant<float, bool, std::string> const*); // NOLINT
    /**
     * @symbol
     * ?STORAGE_TAG\@DynamicProperties\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_TAG; // NOLINT

    // private:
    /**
     * @symbol
     * ?_getPropertyVariant\@DynamicProperties\@\@CA?AVmeta_any\@entt\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class entt::meta_any
    _getPropertyVariant(class std::variant<float, bool, std::string> const&); // NOLINT

private:
};
