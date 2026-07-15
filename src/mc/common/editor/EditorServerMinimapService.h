#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorMinimapService.h"
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapTrackingMode.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
class Vec2;
struct ActorUniqueID;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class MinimapItem; }
namespace Editor::Services { struct MinimapMarkerData; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorServerMinimapService : public ::Editor::Services::EditorMinimapService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk24996e;
    ::ll::UntypedStorage<8, 64> mUnk514da7;
    ::ll::UntypedStorage<8, 64> mUnk3a2a8e;
    ::ll::UntypedStorage<8, 64> mUnk2a898b;
    ::ll::UntypedStorage<8, 64> mUnk107dbb;
    ::ll::UntypedStorage<8, 16> mUnk6f42e6;
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

    virtual ~EditorServerMinimapService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::WeakRef<::Editor::Services::MinimapItem>
    createMinimap(int mapWidth, int mapHeight, ::Editor::Services::MinimapViewType minimapViewType) /*override*/;

    virtual bool destroyMinimap(::mce::UUID const& minimapId) /*override*/;

    virtual ::WeakRef<::Editor::Services::MinimapItem> getMinimap(::mce::UUID const& minimapId) /*override*/;

    virtual ::std::vector<::mce::UUID> getAllMinimapIds() const /*override*/;

    virtual bool isMinimapActive(::mce::UUID const& minimapId) const /*override*/;

    virtual int getMinimapYLevel(::mce::UUID const& minimapId) const /*override*/;

    virtual ::Vec2 getMinimapFreeCenter(::mce::UUID const& minimapId) const /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapActive(::mce::UUID const& minimapId, bool active) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapSize(::mce::UUID const& minimapId, int mapWidth, int mapHeight) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapViewType(::mce::UUID const& minimapId, ::Editor::Services::MinimapViewType minimapViewType) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapYLevel(::mce::UUID const& minimapId, int yLevel) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapTrackingMode(::mce::UUID const& minimapId, ::Editor::Services::MinimapTrackingMode mode) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapFreeCenter(::mce::UUID const& minimapId, ::Vec2 const& center) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId) /*override*/;

    virtual ::mce::Color getPlayerColor(::ActorUniqueID playerId) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setVanillaBiomeColorMap(::std::unordered_map<::std::string, ::mce::Color> const& colorMap) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    updateVanillaColorMap(::std::string const& biomeId, ::mce::Color const& color) /*override*/;

    virtual ::Scripting::Result_deprecated<void> addMultiplayerMarker(::mce::UUID const& minimapId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> removeMultiplayerMarker(::mce::UUID const& minimapId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> addLocationMarker(
        ::mce::UUID const&                                   minimapId,
        ::std::vector<::Editor::Services::MinimapMarkerData> data,
        ::std::string const&                                 dimensionId
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    removeLocationMarker(::mce::UUID const& minimapId, ::std::string const& dimensionId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> addCustomMarker(
        ::mce::UUID const&                                   minimapId,
        ::std::string const&                                 iconIdentifier,
        ::std::vector<::Editor::Services::MinimapMarkerData> data,
        ::std::string const&                                 dimensionId
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> removeCustomMarker(
        ::mce::UUID const&   minimapId,
        ::std::string const& iconIdentifier,
        ::std::string const& dimensionId
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    removeAllCustomMarkers(::mce::UUID const& minimapId, ::std::string const& dimensionId) /*override*/;

    virtual bool hasMinimapMarkerOfType(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const
        /*override*/;

    virtual bool hasCustomGroup(::mce::UUID const& minimapId, ::std::string const& iconIdentifier) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerMinimapService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI int $getMinimapYLevel(::mce::UUID const& minimapId) const;

    MCNAPI ::Vec2 $getMinimapFreeCenter(::mce::UUID const& minimapId) const;

    MCNAPI ::Scripting::Result_deprecated<void> $setMinimapActive(::mce::UUID const& minimapId, bool active);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapSize(::mce::UUID const& minimapId, int mapWidth, int mapHeight);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapViewType(::mce::UUID const& minimapId, ::Editor::Services::MinimapViewType minimapViewType);

    MCNAPI ::Scripting::Result_deprecated<void> $setMinimapYLevel(::mce::UUID const& minimapId, int yLevel);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapTrackingMode(::mce::UUID const& minimapId, ::Editor::Services::MinimapTrackingMode mode);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapFreeCenter(::mce::UUID const& minimapId, ::Vec2 const& center);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId);

    MCNAPI ::mce::Color $getPlayerColor(::ActorUniqueID playerId);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setVanillaBiomeColorMap(::std::unordered_map<::std::string, ::mce::Color> const& colorMap);

    MCNAPI ::Scripting::Result_deprecated<void>
    $updateVanillaColorMap(::std::string const& biomeId, ::mce::Color const& color);

    MCNAPI ::Scripting::Result_deprecated<void> $addMultiplayerMarker(::mce::UUID const& minimapId);

    MCNAPI ::Scripting::Result_deprecated<void> $removeMultiplayerMarker(::mce::UUID const& minimapId);

    MCNAPI ::Scripting::Result_deprecated<void> $addLocationMarker(
        ::mce::UUID const&                                   minimapId,
        ::std::vector<::Editor::Services::MinimapMarkerData> data,
        ::std::string const&                                 dimensionId
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $removeLocationMarker(::mce::UUID const& minimapId, ::std::string const& dimensionId);

    MCNAPI ::Scripting::Result_deprecated<void> $addCustomMarker(
        ::mce::UUID const&                                   minimapId,
        ::std::string const&                                 iconIdentifier,
        ::std::vector<::Editor::Services::MinimapMarkerData> data,
        ::std::string const&                                 dimensionId
    );

    MCNAPI ::Scripting::Result_deprecated<void> $removeCustomMarker(
        ::mce::UUID const&   minimapId,
        ::std::string const& iconIdentifier,
        ::std::string const& dimensionId
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $removeAllCustomMarkers(::mce::UUID const& minimapId, ::std::string const& dimensionId);

    MCNAPI bool $hasMinimapMarkerOfType(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const;

    MCNAPI bool $hasCustomGroup(::mce::UUID const& minimapId, ::std::string const& iconIdentifier) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorMinimapServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
