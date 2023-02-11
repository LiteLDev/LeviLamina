/**
 * @file  DynamicProperties.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -902250940
     * @symbol  ?deserialize\@DynamicProperties\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   869163959
     * @symbol  ?getCollectionCount\@DynamicProperties\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCollectionCount() const;
    /**
     * @hash   312707913
     * @symbol  ?getDynamicProperty\@DynamicProperties\@\@QEAAPEAV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@0\@Z
     */
    MCAPI class std::variant<float, bool, std::string> * getDynamicProperty(std::string const &, std::string const &);
    /**
     * @hash   -864300207
     * @symbol  ?removeDynamicProperty\@DynamicProperties\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool removeDynamicProperty(std::string const &, std::string const &);
    /**
     * @hash   739334590
     * @symbol  ?serialize\@DynamicProperties\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @hash   -1180426154
     * @symbol  ?setDynamicProperty\@DynamicProperties\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@0\@Z
     */
    MCAPI void setDynamicProperty(std::string const &, class std::variant<float, bool, std::string> const &, std::string const &);
    /**
     * @hash   -1724176606
     * @symbol  ?writeToLevelStorage\@DynamicProperties\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void writeToLevelStorage(class LevelStorage &);
    /**
     * @hash   -206785250
     * @symbol  ??1DynamicProperties\@\@QEAA\@XZ
     */
    MCAPI ~DynamicProperties();
    /**
     * @hash   490785999
     * @symbol  ?STORAGE_TAG\@DynamicProperties\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_TAG;
    /**
     * @hash   1663422207
     * @symbol  ?bindType\@DynamicProperties\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1845097249
     * @symbol  ?readFromLevelStorage\@DynamicProperties\@\@SA?AV?$unique_ptr\@VDynamicProperties\@\@U?$default_delete\@VDynamicProperties\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI static std::unique_ptr<class DynamicProperties> readFromLevelStorage(class LevelStorage &);
    /**
     * @hash   -1548016906
     * @symbol  ?validateDynamicProperty\@DynamicProperties\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUDynamicPropertyDefinition\@\@AEBV23\@PEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@\@Z
     */
    MCAPI static std::string validateDynamicProperty(struct DynamicPropertyDefinition const *, std::string const &, class std::variant<float, bool, std::string> const *);

//private:
    /**
     * @hash   -537028237
     * @symbol  ?_getPropertyVariant\@DynamicProperties\@\@CA?AVmeta_any\@entt\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class entt::meta_any _getPropertyVariant(class std::variant<float, bool, std::string> const &);

private:

};