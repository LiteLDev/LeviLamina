#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

class PropertyContainer {

public:
    // prevent constructor by default
    PropertyContainer& operator=(PropertyContainer const&) = delete;
    PropertyContainer(PropertyContainer const&)            = delete;
    PropertyContainer()                                    = delete;

public:
    /**
     * @symbol
     * ??0PropertyContainer\@\@QEAA\@V?$not_null\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@\@gsl\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI
    PropertyContainer(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>, class RenderParams&); // NOLINT
    /**
     * @symbol ?addEntryToSyncData\@PropertyContainer\@\@QEBAXAEBVPropertyMetadata\@\@AEAUPropertySyncData\@\@\@Z
     */
    MCAPI void addEntryToSyncData(class PropertyMetadata const&, struct PropertySyncData&) const; // NOLINT
    /**
     * @symbol ?getMolangValue\@PropertyContainer\@\@QEBA_N_KAEAUMolangScriptArg\@\@\@Z
     */
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg&) const; // NOLINT
    /**
     * @symbol ?readLoadedProperties\@PropertyContainer\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readLoadedProperties(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?setAliasProperties\@PropertyContainer\@\@QEAAXAEBV?$unordered_map\@VHashedString\@\@V?$shared_ptr\@VTag\@\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$shared_ptr\@VTag\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@1\@Z
     */
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?setFloatValue\@PropertyContainer\@\@QEAAX_KM\@Z
     */
    MCAPI void setFloatValue(unsigned __int64, float); // NOLINT
    /**
     * @symbol ?setIntValue\@PropertyContainer\@\@QEAAX_KH\@Z
     */
    MCAPI void setIntValue(unsigned __int64, int); // NOLINT
    /**
     * @symbol ??1PropertyContainer\@\@QEAA\@XZ
     */
    MCAPI ~PropertyContainer(); // NOLINT

    // private:
    /**
     * @symbol ?_addDataToCompoundTag\@PropertyContainer\@\@AEBAXAEAVCompoundTag\@\@AEBVPropertyMetadata\@\@\@Z
     */
    MCAPI void _addDataToCompoundTag(class CompoundTag&, class PropertyMetadata const&) const; // NOLINT
    /**
     * @symbol
     * ?_getPropertyTypeArrayIndex\@PropertyContainer\@\@AEBA?AV?$optional\@_K\@std\@\@_KW4ContainedType\@PropertyMetadata\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64>
    _getPropertyTypeArrayIndex(unsigned __int64, enum class PropertyMetadata::ContainedType) const; // NOLINT
    /**
     * @symbol ?_readValueFromTag\@PropertyContainer\@\@AEAA_NAEBVPropertyMetadata\@\@AEBVTag\@\@\@Z
     */
    MCAPI bool _readValueFromTag(class PropertyMetadata const&, class Tag const&); // NOLINT
    /**
     * @symbol
     * ?_trySetEnumIndexByString\@PropertyContainer\@\@AEAA_N_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _trySetEnumIndexByString(unsigned __int64, std::string const&); // NOLINT

private:
};
