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
    MCAPI PropertyComponent(class PropertyComponent&&);

    MCAPI PropertyComponent(
        gsl::not_null<std::shared_ptr<class PropertyGroup const>> propertyGroup,
        class RenderParams&                                       renderParams
    );

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void
    applyPendingChanges(std::unordered_map<uint64, std::variant<int, float, bool, uint64>> const& pendingChanges);

    MCAPI bool getBool(uint64 h) const;

    MCAPI float getFloat(uint64 h) const;

    MCAPI int getInt(uint64 h) const;

    MCAPI bool getMolangValue(uint64 propertyNameHash, struct MolangScriptArg& out) const;

    MCAPI ::PropertyMetadata::ContainedType getPropertyType(uint64 h) const;

    MCAPI class HashedString const& getString(uint64 h) const;

    MCAPI bool hasDirtyProperties() const;

    MCAPI class PropertyComponent& operator=(class PropertyComponent&&);

    MCAPI struct PropertySyncData packAllSyncData() const;

    MCAPI struct PropertySyncData packDirtySyncData();

    MCAPI void readLoadedProperties(class CompoundTag const& loadedPropertyTag);

    MCAPI void setAliasProperties(
        std::unordered_map<class HashedString, std::shared_ptr<class Tag>> const& aliasProperties,
        std::string const&                                                        aliasName,
        std::string const&                                                        canonicalName
    );

    MCAPI std::optional<bool> tryGetBool(uint64 h) const;

    MCAPI std::optional<float> tryGetFloat(uint64 h) const;

    MCAPI std::optional<int> tryGetInt(uint64 h) const;

    MCAPI class HashedString const* tryGetString(uint64 h) const;

    MCAPI ~PropertyComponent();

    // NOLINTEND
};
