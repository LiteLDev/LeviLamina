/**
 * @file  PropertyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "PropertyMetadata.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyComponent.
 *
 */
class PropertyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYCOMPONENT
public:
    class PropertyComponent& operator=(class PropertyComponent const &) = delete;
    PropertyComponent(class PropertyComponent const &) = delete;
    PropertyComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0PropertyComponent\@\@QEAA\@V?$not_null\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@\@gsl\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI PropertyComponent(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>, class RenderParams &);
    /**
     * @symbol  ??0PropertyComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PropertyComponent(class PropertyComponent &&);
    /**
     * @symbol  ?addAdditionalSaveData\@PropertyComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?applyPendingChanges\@PropertyComponent\@\@QEAAXAEBV?$unordered_map\@_KV?$variant\@HM_N_K\@std\@\@U?$hash\@_K\@2\@U?$equal_to\@_K\@2\@V?$allocator\@U?$pair\@$$CB_KV?$variant\@HM_N_K\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void applyPendingChanges(class std::unordered_map<unsigned __int64, class std::variant<int, float, bool, unsigned __int64>, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, class std::variant<int, float, bool, unsigned __int64>>>> const &);
    /**
     * @symbol  ?getMolangValue\@PropertyComponent\@\@QEBA_N_KAEAUMolangScriptArg\@\@\@Z
     */
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg &) const;
    /**
     * @symbol  ?getPropertyType\@PropertyComponent\@\@QEBA?AW4ContainedType\@PropertyMetadata\@\@_K\@Z
     */
    MCAPI enum class PropertyMetadata::ContainedType getPropertyType(unsigned __int64) const;
    /**
     * @symbol  ?hasDirtyProperties\@PropertyComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasDirtyProperties() const;
    /**
     * @symbol  ?packAllSyncData\@PropertyComponent\@\@QEBA?AUPropertySyncData\@\@XZ
     */
    MCAPI struct PropertySyncData packAllSyncData() const;
    /**
     * @symbol  ?packDirtySyncData\@PropertyComponent\@\@QEAA?AUPropertySyncData\@\@XZ
     */
    MCAPI struct PropertySyncData packDirtySyncData();
    /**
     * @symbol  ?readLoadedProperties\@PropertyComponent\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readLoadedProperties(class CompoundTag const &);
    /**
     * @symbol  ?setAliasProperties\@PropertyComponent\@\@QEAAXAEBV?$unordered_map\@VHashedString\@\@V?$shared_ptr\@VTag\@\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$shared_ptr\@VTag\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@1\@Z
     */
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const &, std::string const &, std::string const &);
    /**
     * @symbol  ?tryGetBool\@PropertyComponent\@\@QEBA?AV?$optional\@_N\@std\@\@_K\@Z
     */
    MCAPI class std::optional<bool> tryGetBool(unsigned __int64) const;
    /**
     * @symbol  ?tryGetFloat\@PropertyComponent\@\@QEBA?AV?$optional\@M\@std\@\@_K\@Z
     */
    MCAPI class std::optional<float> tryGetFloat(unsigned __int64) const;
    /**
     * @symbol  ?tryGetInt\@PropertyComponent\@\@QEBA?AV?$optional\@H\@std\@\@_K\@Z
     */
    MCAPI class std::optional<int> tryGetInt(unsigned __int64) const;
    /**
     * @symbol  ?tryGetString\@PropertyComponent\@\@QEBAPEBVHashedString\@\@_K\@Z
     */
    MCAPI class HashedString const * tryGetString(unsigned __int64) const;
    /**
     * @symbol  ??1PropertyComponent\@\@QEAA\@XZ
     */
    MCAPI ~PropertyComponent();

};