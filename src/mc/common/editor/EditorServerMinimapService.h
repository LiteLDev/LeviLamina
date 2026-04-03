#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorMinimapService.h"
#include "mc/common/editor/MinimapCacheClearMode.h"
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ICustomBiomeSource;
class Player;
class Vec2;
struct ActorUniqueID;
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class RequestBlockColorsPayload; }
namespace Editor::Network { class RequestPlayersPayload; }
namespace Editor::Network { struct BlockColorInfo; }
namespace Editor::Services { class EditorProjectRegionServiceProvider; }
namespace Editor::Services { class MinimapItem; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorServerMinimapService : public ::Editor::Services::EditorMinimapService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk24996e;
    ::ll::UntypedStorage<8, 64> mUnkcbf122;
    ::ll::UntypedStorage<8, 64> mUnk514da7;
    ::ll::UntypedStorage<8, 64> mUnk3a2a8e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerMinimapService& operator=(EditorServerMinimapService const&);
    EditorServerMinimapService(EditorServerMinimapService const&);
    EditorServerMinimapService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ~EditorServerMinimapService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerMinimapService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _cleanupDisconnectedPlayers(::std::unordered_set<::ActorUniqueID> const& currentPlayerIds);

    MCNAPI ::std::vector<::Editor::Network::BlockColorInfo> _collectBlockColors(
        ::Player*                          player,
        ::mce::UUID const&                 minimapId,
        ::WeakRef<::ICustomBiomeSource>    customBiomeWeakRef,
        ::Vec2 const&                      center,
        int                                radius,
        ::WeakRef<::Editor::ProjectRegion> regionRef,
        ::Vec2 const&                      previousCenter,
        int                                previousRadius
    );

    MCNAPI ::mce::Color _getOrAssignPlayerColor(::ActorUniqueID playerId);

    MCNAPI bool _getOrCreateRegionRef(
        ::Editor::Network::RequestBlockColorsPayload const&     payload,
        ::Editor::Services::EditorProjectRegionServiceProvider* regionServiceProvider,
        ::WeakRef<::Editor::ProjectRegion>&                     out,
        bool&                                                   neededBoundsUpdate
    );

    MCNAPI void _handleRequestBlockColorsPayload(::Editor::Network::RequestBlockColorsPayload const& payload);

    MCNAPI void _handleRequestPlayersPayload(::Editor::Network::RequestPlayersPayload const& payload);

    MCNAPI void _notifyMinimapActiveStatusChange(::mce::UUID const& minimapId, bool isActive);

    MCNAPI void _notifyMinimapMapSizeChange(::mce::UUID const& minimapId, int mapWidth, int mapHeight);

    MCNAPI void _notifyMinimapMarkerTypeChange(
        ::mce::UUID const&                                                 minimapId,
        ::std::unordered_set<::Editor::Services::MinimapMarkerType> const& markerTypes
    );

    MCNAPI void
    _notifyMinimapViewTypeChange(::mce::UUID const& minimapId, ::Editor::Services::MinimapViewType viewType);

    MCNAPI void _processBlockColorsRequest(
        ::Editor::Network::RequestBlockColorsPayload const& payload,
        ::Editor::Services::MinimapCacheClearMode           clearMode
    );

    MCNAPI void _sendEmptyBlockColorResponse(::mce::UUID const& minimapId, ::DimensionType dimensionId);

    MCNAPI void _sendInitialColorBlocks(
        ::mce::UUID const&                        minimapId,
        ::Editor::Services::MinimapItem const&    item,
        ::Editor::Services::MinimapCacheClearMode clearMode
    );

    MCNAPI ::Scripting::Result_deprecated<bool>
    _setCustomBiomeInternal(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource);
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
    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorMinimapServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
