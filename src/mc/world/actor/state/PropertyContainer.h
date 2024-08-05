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
    MCAPI
    PropertyContainer(gsl::not_null<std::shared_ptr<class PropertyGroup const>>, class RenderParams& renderParams);

    MCAPI void addAdditionalSaveDataToCompoundTag(class CompoundTag& compoundTag) const;

    MCAPI void addEntryToSyncData(class PropertyMetadata const&, struct PropertySyncData&) const;

    MCAPI std::optional<bool> getBoolValue(uint64) const;

    MCAPI std::optional<uint64> getEnumIndexValue(uint64) const;

    MCAPI std::optional<float> getFloatValue(uint64) const;

    MCAPI std::optional<int> getIntValue(uint64) const;

    MCAPI bool getMolangValue(uint64, struct MolangScriptArg& out) const;

    MCAPI void readLoadedProperties(class CompoundTag const&);

    MCAPI void setAliasProperties(
        std::unordered_map<class HashedString, std::shared_ptr<class Tag>> const&,
        std::string const&,
        std::string const& canonicalName
    );

    MCAPI void setBoolValue(uint64, bool value);

    MCAPI void setEnumIndexValue(uint64, uint64 value);

    MCAPI void setFloatValue(uint64, float value);

    MCAPI void setIntValue(uint64, int value);

    MCAPI ~PropertyContainer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addDataToCompoundTag(class CompoundTag& compoundTag, class PropertyMetadata const&) const;

    MCAPI std::optional<uint64> _getPropertyTypeArrayIndex(uint64, ::PropertyMetadata::ContainedType) const;

    MCAPI bool _readValueFromTag(class PropertyMetadata const&, class Tag const& tag);

    MCAPI bool _trySetEnumIndexByString(uint64, std::string const& value);

    // NOLINTEND
};
