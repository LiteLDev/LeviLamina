#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

class PropertyComponent {
public:
    // prevent constructor by default
    PropertyComponent& operator=(PropertyComponent const&);
    PropertyComponent(PropertyComponent const&);
    PropertyComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyComponent@@QEAA@$$QEAV0@@Z
    MCAPI PropertyComponent(class PropertyComponent&&);

    // symbol: ??0PropertyComponent@@QEAA@V?$not_null@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@gsl@@AEAVRenderParams@@@Z
    MCAPI
    PropertyComponent(gsl::not_null<std::shared_ptr<class PropertyGroup const>>, class RenderParams& renderParams);

    // symbol: ?addAdditionalSaveData@PropertyComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol:
    // ?applyPendingChanges@PropertyComponent@@QEAAXAEBV?$unordered_map@_KV?$variant@HM_N_K@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$variant@HM_N_K@std@@@std@@@2@@std@@@Z
    MCAPI void applyPendingChanges(std::unordered_map<uint64, std::variant<int, float, bool, uint64>> const&);

    // symbol: ?getBool@PropertyComponent@@QEBA_N_K@Z
    MCAPI bool getBool(uint64 h) const;

    // symbol: ?getFloat@PropertyComponent@@QEBAM_K@Z
    MCAPI float getFloat(uint64 h) const;

    // symbol: ?getInt@PropertyComponent@@QEBAH_K@Z
    MCAPI int getInt(uint64 h) const;

    // symbol: ?getMolangValue@PropertyComponent@@QEBA_N_KAEAUMolangScriptArg@@@Z
    MCAPI bool getMolangValue(uint64, struct MolangScriptArg& out) const;

    // symbol: ?getPropertyType@PropertyComponent@@QEBA?AW4ContainedType@PropertyMetadata@@_K@Z
    MCAPI ::PropertyMetadata::ContainedType getPropertyType(uint64 h) const;

    // symbol: ?getString@PropertyComponent@@QEBAAEBVHashedString@@_K@Z
    MCAPI class HashedString const& getString(uint64 h) const;

    // symbol: ?hasDirtyProperties@PropertyComponent@@QEBA_NXZ
    MCAPI bool hasDirtyProperties() const;

    // symbol: ?packAllSyncData@PropertyComponent@@QEBA?AUPropertySyncData@@XZ
    MCAPI struct PropertySyncData packAllSyncData() const;

    // symbol: ?packDirtySyncData@PropertyComponent@@QEAA?AUPropertySyncData@@XZ
    MCAPI struct PropertySyncData packDirtySyncData();

    // symbol: ?readLoadedProperties@PropertyComponent@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readLoadedProperties(class CompoundTag const&);

    // symbol:
    // ?setAliasProperties@PropertyComponent@@QEAAXAEBV?$unordered_map@VHashedString@@V?$shared_ptr@VTag@@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$shared_ptr@VTag@@@std@@@std@@@3@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1@Z
    MCAPI void setAliasProperties(
        std::unordered_map<class HashedString, std::shared_ptr<class Tag>> const&,
        std::string const&,
        std::string const& canonicalName
    );

    // symbol: ?tryGetBool@PropertyComponent@@QEBA?AV?$optional@_N@std@@_K@Z
    MCAPI std::optional<bool> tryGetBool(uint64 h) const;

    // symbol: ?tryGetFloat@PropertyComponent@@QEBA?AV?$optional@M@std@@_K@Z
    MCAPI std::optional<float> tryGetFloat(uint64 h) const;

    // symbol: ?tryGetInt@PropertyComponent@@QEBA?AV?$optional@H@std@@_K@Z
    MCAPI std::optional<int> tryGetInt(uint64 h) const;

    // symbol: ?tryGetString@PropertyComponent@@QEBAPEBVHashedString@@_K@Z
    MCAPI class HashedString const* tryGetString(uint64 h) const;

    // symbol: ??1PropertyComponent@@QEAA@XZ
    MCAPI ~PropertyComponent();

    // NOLINTEND
};
