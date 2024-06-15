#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

class PropertyContainer {
public:
    // prevent constructor by default
    PropertyContainer& operator=(PropertyContainer const&);
    PropertyContainer(PropertyContainer const&);
    PropertyContainer();

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyContainer@@QEAA@V?$not_null@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@gsl@@AEAVRenderParams@@@Z
    MCAPI
    PropertyContainer(gsl::not_null<std::shared_ptr<class PropertyGroup const>>, class RenderParams& renderParams);

    // symbol: ?addAdditionalSaveDataToCompoundTag@PropertyContainer@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveDataToCompoundTag(class CompoundTag& compoundTag) const;

    // symbol: ?addEntryToSyncData@PropertyContainer@@QEBAXAEBVPropertyMetadata@@AEAUPropertySyncData@@@Z
    MCAPI void addEntryToSyncData(class PropertyMetadata const&, struct PropertySyncData&) const;

    // symbol: ?getBoolValue@PropertyContainer@@QEBA?AV?$optional@_N@std@@_K@Z
    MCAPI std::optional<bool> getBoolValue(uint64) const;

    // symbol: ?getEnumIndexValue@PropertyContainer@@QEBA?AV?$optional@_K@std@@_K@Z
    MCAPI std::optional<uint64> getEnumIndexValue(uint64) const;

    // symbol: ?getFloatValue@PropertyContainer@@QEBA?AV?$optional@M@std@@_K@Z
    MCAPI std::optional<float> getFloatValue(uint64) const;

    // symbol: ?getIntValue@PropertyContainer@@QEBA?AV?$optional@H@std@@_K@Z
    MCAPI std::optional<int> getIntValue(uint64) const;

    // symbol: ?getMolangValue@PropertyContainer@@QEBA_N_KAEAUMolangScriptArg@@@Z
    MCAPI bool getMolangValue(uint64, struct MolangScriptArg& out) const;

    // symbol: ?readLoadedProperties@PropertyContainer@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readLoadedProperties(class CompoundTag const&);

    // symbol:
    // ?setAliasProperties@PropertyContainer@@QEAAXAEBV?$unordered_map@VHashedString@@V?$shared_ptr@VTag@@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$shared_ptr@VTag@@@std@@@std@@@3@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1@Z
    MCAPI void setAliasProperties(
        std::unordered_map<class HashedString, std::shared_ptr<class Tag>> const&,
        std::string const&,
        std::string const& canonicalName
    );

    // symbol: ?setBoolValue@PropertyContainer@@QEAAX_K_N@Z
    MCAPI void setBoolValue(uint64, bool value);

    // symbol: ?setEnumIndexValue@PropertyContainer@@QEAAX_K0@Z
    MCAPI void setEnumIndexValue(uint64, uint64 value);

    // symbol: ?setFloatValue@PropertyContainer@@QEAAX_KM@Z
    MCAPI void setFloatValue(uint64, float value);

    // symbol: ?setIntValue@PropertyContainer@@QEAAX_KH@Z
    MCAPI void setIntValue(uint64, int value);

    // symbol: ??1PropertyContainer@@QEAA@XZ
    MCAPI ~PropertyContainer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addDataToCompoundTag@PropertyContainer@@AEBAXAEAVCompoundTag@@AEBVPropertyMetadata@@@Z
    MCAPI void _addDataToCompoundTag(class CompoundTag& compoundTag, class PropertyMetadata const&) const;

    // symbol:
    // ?_getPropertyTypeArrayIndex@PropertyContainer@@AEBA?AV?$optional@_K@std@@_KW4ContainedType@PropertyMetadata@@@Z
    MCAPI std::optional<uint64> _getPropertyTypeArrayIndex(uint64, ::PropertyMetadata::ContainedType) const;

    // symbol: ?_readValueFromTag@PropertyContainer@@AEAA_NAEBVPropertyMetadata@@AEBVTag@@@Z
    MCAPI bool _readValueFromTag(class PropertyMetadata const&, class Tag const& tag);

    // symbol:
    // ?_trySetEnumIndexByString@PropertyContainer@@AEAA_N_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _trySetEnumIndexByString(uint64, std::string const& value);

    // NOLINTEND
};
