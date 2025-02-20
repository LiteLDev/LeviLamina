#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
class EntityContext;
class HashedString;
class PacketSender;
class ResourcePackManager;
struct CameraAimAssistDataRegistryDirtyComponent;
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesFile; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraAimAssistDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9bdd5b;
    ::ll::UntypedStorage<8, 64> mUnkaee6d6;
    ::ll::UntypedStorage<8, 80> mUnkccf88c;
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
    MCAPI void _parseAndLoadAimAssistCategories(
        ::EntityContext&                                                             levelEntity,
        ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistCategoriesFile> const& loader,
        ::std::string const&                                                         fileData
    );

    MCAPI void _parseAndLoadAimAssistPreset(
        ::EntityContext&                                                         levelEntity,
        ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistPresetFile> const& loader,
        ::std::string const&                                                     fileData
    );

    MCAPI bool _validatePresetCategorySetting(::std::string const& categoryId) const;

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&
    addCategory(::EntityContext& levelEntity, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&& category);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&
    addPreset(::EntityContext& levelEntity, ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&& preset);

    MCAPI void loadJsonFilesForServer(
        ::EntityContext&               levelEntity,
        ::cereal::ReflectionCtx const& ctx,
        ::ResourcePackManager const&   resourcePackManager
    );

    MCAPI ::CameraAimAssistPresetsPacket makePresetsPacketFromFullRegistry() const;

    MCAPI ::CameraAimAssistPresetsPacket
    makeUpdatePresetsPacketFromDirtyRegistry(::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent
    ) const;

    MCAPI void synchronizeWithClients(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent,
        ::PacketSender&                                    packetSender
    );

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const* tryGetCategory(::HashedString const& id
    ) const;

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const* tryGetPreset(::HashedString const& id) const;
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
