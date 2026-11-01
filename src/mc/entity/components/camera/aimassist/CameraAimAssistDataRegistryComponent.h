#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
class CameraAimAssistRegistryComponent;
class EntityContext;
class IMinecraftEventing;
class LinkedAssetValidator;
class NetworkIdentifier;
class PacketSender;
class ResourcePackManager;
struct CameraAimAssistDataRegistryDirtyComponent;
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraAimAssistDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>>
        mPresets;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>>
                                                    mCategories;
    ::ll::TypedStorage<8, 80, ::std::mutex>         mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryComponent& operator=(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraAimAssistDataRegistryComponent(::IMinecraftEventing& eventing);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&
    addCategory(::EntityContext& levelEntity, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&& category);

    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&
    addPreset(::EntityContext& levelEntity, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&& preset);

    MCNAPI void loadJsonFilesForServer(
        ::EntityContext&                                   levelEntity,
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager const&                       resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI ::CameraAimAssistPresetsPacket makePresetsPacketFromFullRegistry() const;

    MCNAPI ::CameraAimAssistPresetsPacket makeUpdatePresetsPacketFromDirtyRegistry(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent
    ) const;

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const*
    tryGetCategory(::HashedString const& id) const;

    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const*
    tryGetPreset(::HashedString const& id) const;

    MCNAPI void updateServerAndSendRegistryToClient(
        ::PacketSender&                     packetSender,
        ::CameraAimAssistRegistryComponent& aimAssistRegistry,
        ::NetworkIdentifier const&          source
    );

    MCNAPI void updateServerAndSynchronizeWithClients(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent,
        ::CameraAimAssistRegistryComponent&                aimAssistRegistry,
        ::PacketSender&                                    packetSender
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _validatePresetCategorySetting(::std::string const& categoryId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
