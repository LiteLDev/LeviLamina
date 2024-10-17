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
    MCAPI PropertyContainer(
        gsl::not_null<std::shared_ptr<class PropertyGroup const>> propertyGroup,
        class RenderParams&                                       renderParams
    );

    MCAPI void addAdditionalSaveDataToCompoundTag(class CompoundTag& compoundTag) const;

    MCAPI void addEntryToSyncData(class PropertyMetadata const& propMetadata, struct PropertySyncData& syncData) const;

    MCAPI std::optional<bool> getBoolValue(uint64 propertyNameHash) const;

    MCAPI std::optional<uint64> getEnumIndexValue(uint64 propertyNameHash) const;

    MCAPI std::optional<float> getFloatValue(uint64 propertyNameHash) const;

    MCAPI std::optional<int> getIntValue(uint64 propertyNameHash) const;

    MCAPI bool getMolangValue(uint64 propertyNameHash, struct MolangScriptArg& out) const;

    MCAPI void readLoadedProperties(class CompoundTag const& loadedPropertyTag);

    MCAPI void setAliasProperties(
        std::unordered_map<class HashedString, std::shared_ptr<class Tag>> const& aliasProperties,
        std::string const&                                                        aliasName,
        std::string const&                                                        canonicalName
    );

    MCAPI void setBoolValue(uint64 boolArrayIndex, bool value);

    MCAPI void setEnumIndexValue(uint64 enumIndexArrayIndex, uint64 value);

    MCAPI void setFloatValue(uint64 floatArrayIndex, float value);

    MCAPI void setIntValue(uint64 intArrayIndex, int value);

    MCAPI ~PropertyContainer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _addDataToCompoundTag(class CompoundTag& compoundTag, class PropertyMetadata const& propertyMetadata) const;

    MCAPI std::optional<uint64>
          _getPropertyTypeArrayIndex(uint64 propertyNameHash, ::PropertyMetadata::ContainedType propertyType) const;

    MCAPI bool _readValueFromTag(class PropertyMetadata const& propertyMetadata, class Tag const& tag);

    MCAPI bool _trySetEnumIndexByString(uint64 enumIndexArrayIndex, std::string const& value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void*
    ctor$(gsl::not_null<std::shared_ptr<class PropertyGroup const>> propertyGroup, class RenderParams& renderParams);

    MCAPI void dtor$();

    // NOLINTEND
};
