#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class FogDefinitionRegistry;
struct FogDefinition;
struct FogDistanceSetting;
struct FogTransitionSetting;
struct FogVolumetricCoefficientSetting;
struct FogVolumetricDensitySetting;
struct FogVolumetricHenyeyGreensteinGSetting;
// clang-format on

class FogManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FogManager inner types declare
    // clang-format off
    struct Layer;
    // clang-format on

    // FogManager inner types define
    enum class LayerType : int {
        DataDefault    = 0,
        Biome          = 1,
        Volume         = 2,
        ServerDirected = 3,
    };

    struct Layer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FogManager::LayerType>                          mType;
        ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::FogDefinition const>>> mDefinitions;
        ::ll::TypedStorage<4, 4, int>                                              mPriority;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Layer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FogManager::Layer>>             mFogLayers;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::FogDefinition const>> mEngineDefault;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FogManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogManager();

    MCAPI void
    _addToSetting(::FogTransitionSetting& setting, ::FogTransitionSetting const& other, float renderDistance) const;

    MCAPI void _pushLayer(::FogManager::LayerType type, ::std::vector<::WeakRef<::FogDefinition const>> definitions);

    MCAPI ::FogVolumetricCoefficientSetting
    calculateCurrentCoefficientSetting(::FogDefinition::CoefficientSettingType settingType) const;

    MCAPI ::FogVolumetricDensitySetting
    calculateCurrentDensitySetting(::FogDefinition::DensitySettingType settingType) const;

    MCAPI ::FogDistanceSetting
    calculateCurrentDistanceSetting(::FogDefinition::DistanceSettingType settingType, float renderDistance) const;

    MCAPI ::FogVolumetricHenyeyGreensteinGSetting
    calculateCurrentHenyeyGreensteinGSetting(::FogDefinition::HenyeyGreensteinGSettingType settingType) const;

    MCAPI ::FogTransitionSetting
    calculateCurrentTransitionSetting(::FogDefinition::DistanceSettingType settingType, float renderDistance) const;

    MCAPI void pushFogDefinitionAverageLayer(
        ::FogManager::LayerType                         type,
        ::std::vector<::WeakRef<::FogDefinition const>> definitions
    );

    MCAPI void pushFogDefinitionLayer(::FogManager::LayerType type, ::WeakRef<::FogDefinition const> const& definition);

    MCAPI void removeAllLayersOfType(::FogManager::LayerType type);

    MCFOLD void setEngineDefault(::FogDefinition const& engineDefault);

    MCAPI void updateServerDirectedLayers(
        ::std::vector<::std::string> const&                          fogStack,
        ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> fogRegistry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
