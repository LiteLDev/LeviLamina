#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class FogDefinitionRegistry;
struct FogDefinition;
struct FogTransitionSetting;
// clang-format on

class FogManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FogManager inner types declare
    // clang-format off
    struct Layer;
    // clang-format on

    // FogManager inner types define
    enum class LayerType : int {};

    struct Layer {};

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
    MCAPI void
    _addToSetting(::FogTransitionSetting& setting, ::FogTransitionSetting const& other, float renderDistance) const;

    MCAPI void _pushLayer(::FogManager::LayerType type, ::std::vector<::WeakRef<::FogDefinition const>> definitions);

    MCAPI void removeAllLayersOfType(::FogManager::LayerType type);

    MCAPI void updateServerDirectedLayers(
        ::std::vector<::std::string> const&                          fogStack,
        ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> fogRegistry
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
