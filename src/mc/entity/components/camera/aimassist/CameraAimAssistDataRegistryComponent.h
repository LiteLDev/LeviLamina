#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ResourcePackManager;
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraAimAssistDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk9bdd5b;
    ::ll::UntypedStorage<8, 64>  mUnkff09fc;
    ::ll::UntypedStorage<8, 104> mUnka59ae7;
    ::ll::UntypedStorage<8, 104> mUnkd00666;
    ::ll::UntypedStorage<8, 80>  mUnkccf88c;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryComponent& operator=(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraAimAssistDataRegistryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CameraAimAssistDataRegistryComponent(::cereal::ReflectionCtx const& ctx);

    MCAPI void _parseAndLoadAimAssistCategory(::std::string const& fileData);

    MCAPI void _parseAndLoadAimAssistPreset(::std::string const& fileData);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition const* _tryGetCategories(::HashedString const& id
    ) const;

    MCAPI ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition> const&
    getCategories() const;

    MCAPI ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition> const&
    getPresets() const;

    MCAPI void loadJsonFilesForServer(::ResourcePackManager& resourcePackManager);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const* tryGetPreset(::HashedString const& id) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
