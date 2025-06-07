#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/puv/Loader.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
class EntityContext;
class HashedString;
class PacketSender;
class ResourcePackManager;
struct CameraAimAssistDataRegistryDirtyComponent;
namespace Bedrock::Threading { class Mutex; }
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
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>>
        mPresets;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>>
                                                           mCategories;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mRegistriesLock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraAimAssistDataRegistryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistDataRegistryComponent();

    MCNAPI void _parseAndLoadAimAssistCategories(
        ::EntityContext&                                                             levelEntity,
        ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistCategoriesFile> const& loader,
        ::std::string const&                                                         fileData
    );

    MCNAPI void _parseAndLoadAimAssistPreset(
        ::EntityContext&                                                         levelEntity,
        ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistPresetFile> const& loader,
        ::std::string const&                                                     fileData
    );

    MCNAPI bool _validatePresetCategorySetting(::std::string const& categoryId) const;

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&
    addCategory(::EntityContext& levelEntity, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&& category);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&
    addPreset(::EntityContext& levelEntity, ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&& preset);

    MCNAPI void loadJsonFilesForServer(
        ::EntityContext&               levelEntity,
        ::cereal::ReflectionCtx const& ctx,
        ::ResourcePackManager const&   resourcePackManager
    );

    MCNAPI ::CameraAimAssistPresetsPacket makePresetsPacketFromFullRegistry() const;

    MCNAPI ::CameraAimAssistPresetsPacket makeUpdatePresetsPacketFromDirtyRegistry(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent
    ) const;

    MCNAPI void synchronizeWithClients(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent,
        ::PacketSender&                                    packetSender
    );

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const*
    tryGetCategory(::HashedString const& id) const;

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const* tryGetPreset(::HashedString const& id) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
