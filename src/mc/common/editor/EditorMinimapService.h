#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorMinimapServiceProvider.h"
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
class Vec3;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { struct PlayerMarkerInfo; }
namespace Editor::Services { class MinimapItem; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorMinimapService : public ::Editor::Services::IEditorService,
                             public ::Editor::Services::EditorMinimapServiceProvider,
                             public ::Editor::Services::PayloadStoreHelper {
public:
    // prevent constructor by default
    EditorMinimapService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorMinimapService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::WeakRef<::Editor::Services::MinimapItem>
    createMinimap(int mapWidth, int mapHeight, ::Editor::Services::MinimapViewType minimapViewType) /*override*/;

    virtual bool destroyMinimap(::mce::UUID const& minimapId) /*override*/;

    virtual ::WeakRef<::Editor::Services::MinimapItem> getMinimap(::mce::UUID const& minimapId) /*override*/;

    virtual ::std::vector<::mce::UUID> getAllMinimapIds() const /*override*/;

    virtual bool isMinimapActive(::mce::UUID const& minimapId) const /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapActive(::mce::UUID const& minimapId, bool active) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapSize(::mce::UUID const& minimapId, int mapWidth, int mapHeight) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapViewType(::mce::UUID const& minimapId, ::Editor::Services::MinimapViewType minimapViewType) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    addMinimapMarker(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType markerType) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    removeMinimapMarker(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType markerType) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId) /*override*/;

    virtual ::mce::Color getPlayerColor(::ActorUniqueID playerId) /*override*/;

    virtual void setMinimapUIVisible(::mce::UUID const& minimapId, bool visible) /*override*/;

    virtual ::std::string generateMinimapImage(::mce::UUID const& minimapId, ::Vec3 const& playerPosition) /*override*/;

    virtual ::std::vector<::Editor::Network::PlayerMarkerInfo>
    getPlayerMarkers(::mce::UUID const& minimapId) /*override*/;

    virtual bool hasMarker(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const /*override*/;

    virtual ::std::vector<::mce::UUID> getAllActiveMinimapIds() const /*override*/;

    virtual ::std::pair<int, int> getMapDimensions(::mce::UUID const& minimapId) const /*override*/;

    virtual void triggerInitialCacheUpdate(::mce::UUID const& minimapId, ::Vec3 const& playerPosition) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)> callback) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    listenForPlayerMarkersChanged(::std::function<void(::mce::UUID const&)> callback) /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForMeMarkerChanged(::std::function<void()> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorMinimapService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::WeakRef<::Editor::Services::MinimapItem>
    $createMinimap(int mapWidth, int mapHeight, ::Editor::Services::MinimapViewType minimapViewType);

    MCNAPI bool $destroyMinimap(::mce::UUID const& minimapId);

    MCNAPI ::WeakRef<::Editor::Services::MinimapItem> $getMinimap(::mce::UUID const& minimapId);

    MCNAPI ::std::vector<::mce::UUID> $getAllMinimapIds() const;

    MCNAPI bool $isMinimapActive(::mce::UUID const& minimapId) const;

    MCNAPI ::Scripting::Result_deprecated<void> $setMinimapActive(::mce::UUID const& minimapId, bool active);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapSize(::mce::UUID const& minimapId, int mapWidth, int mapHeight);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapViewType(::mce::UUID const& minimapId, ::Editor::Services::MinimapViewType minimapViewType);

    MCNAPI ::Scripting::Result_deprecated<void>
    $addMinimapMarker(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType markerType);

    MCNAPI ::Scripting::Result_deprecated<void>
    $removeMinimapMarker(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType markerType);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId);

    MCNAPI ::mce::Color $getPlayerColor(::ActorUniqueID playerId);

    MCNAPI void $setMinimapUIVisible(::mce::UUID const& minimapId, bool visible);

    MCNAPI ::std::string $generateMinimapImage(::mce::UUID const& minimapId, ::Vec3 const& playerPosition);

    MCNAPI ::std::vector<::Editor::Network::PlayerMarkerInfo> $getPlayerMarkers(::mce::UUID const& minimapId);

    MCNAPI bool $hasMarker(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const;

    MCNAPI ::std::vector<::mce::UUID> $getAllActiveMinimapIds() const;

    MCNAPI ::std::pair<int, int> $getMapDimensions(::mce::UUID const& minimapId) const;

    MCNAPI void $triggerInitialCacheUpdate(::mce::UUID const& minimapId, ::Vec3 const& playerPosition);

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)> callback);

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForPlayerMarkersChanged(::std::function<void(::mce::UUID const&)> callback);

    MCNAPI ::Bedrock::PubSub::Subscription $listenForMeMarkerChanged(::std::function<void()> callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorMinimapServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
