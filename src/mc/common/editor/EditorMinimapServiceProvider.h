#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapTrackingMode.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
class Vec2;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Services { class MinimapItem; }
namespace Editor::Services { struct MinimapMarkerData; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorMinimapServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorMinimapServiceProvider() = default;

    virtual ::WeakRef<::Editor::Services::MinimapItem>
    createMinimap(int mapWidth, int mapHeight, ::Editor::Services::MinimapViewType minimapViewType) = 0;

    virtual bool destroyMinimap(::mce::UUID const& minimapId) = 0;

    virtual ::WeakRef<::Editor::Services::MinimapItem> getMinimap(::mce::UUID const& minimapId) = 0;

    virtual ::std::vector<::mce::UUID> getAllMinimapIds() const = 0;

    virtual bool isMinimapActive(::mce::UUID const& minimapId) const = 0;

    virtual ::Scripting::Result_deprecated<void> setMinimapActive(::mce::UUID const& minimapId, bool active) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapSize(::mce::UUID const& minimapId, int mapWidth, int mapHeight) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapViewType(::mce::UUID const& minimapId, ::Editor::Services::MinimapViewType minimapViewType) = 0;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource) = 0;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId) = 0;

    virtual ::mce::Color getPlayerColor(::ActorUniqueID playerId) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setVanillaBiomeColorMap(::std::unordered_map<::std::string, ::mce::Color> const& colorMap) = 0;

    virtual ::Scripting::Result_deprecated<void>
    updateVanillaColorMap(::std::string const& biomeId, ::mce::Color const& color) = 0;

    virtual ::Scripting::Result_deprecated<void> setMinimapYLevel(::mce::UUID const& minimapId, int yLevel) = 0;

    virtual int getMinimapYLevel(::mce::UUID const& minimapId) const = 0;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapTrackingMode(::mce::UUID const& minimapId, ::Editor::Services::MinimapTrackingMode mode) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapFreeCenter(::mce::UUID const& minimapId, ::Vec2 const& center) = 0;

    virtual ::Vec2 getMinimapFreeCenter(::mce::UUID const& minimapId) const = 0;

    virtual ::Scripting::Result_deprecated<void> addMultiplayerMarker(::mce::UUID const& minimapId) = 0;

    virtual ::Scripting::Result_deprecated<void> removeMultiplayerMarker(::mce::UUID const& minimapId) = 0;

    virtual ::Scripting::Result_deprecated<void> addLocationMarker(
        ::mce::UUID const&                                   minimapId,
        ::std::vector<::Editor::Services::MinimapMarkerData> data,
        ::std::string const&                                 dimensionId
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    removeLocationMarker(::mce::UUID const& minimapId, ::std::string const& dimensionId) = 0;

    virtual ::Scripting::Result_deprecated<void> addCustomMarker(
        ::mce::UUID const&                                   minimapId,
        ::std::string const&                                 iconIdentifier,
        ::std::vector<::Editor::Services::MinimapMarkerData> data,
        ::std::string const&                                 dimensionId
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> removeCustomMarker(
        ::mce::UUID const&   minimapId,
        ::std::string const& iconIdentifier,
        ::std::string const& dimensionId
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    removeAllCustomMarkers(::mce::UUID const& minimapId, ::std::string const& dimensionId) = 0;

    virtual bool
    hasMinimapMarkerOfType(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const = 0;

    virtual bool hasCustomGroup(::mce::UUID const& minimapId, ::std::string const& iconIdentifier) const = 0;

    virtual ::std::string generateMinimapImage(::mce::UUID const& minimapId, ::Vec3 const& playerPosition) = 0;

    virtual ::std::vector<::Editor::Services::MinimapMarkerData>
    getAllMarkers(::mce::UUID const& minimapId, ::DimensionType currentDimension) const = 0;

    virtual void setMinimapUIVisible(::mce::UUID const& minimapId, bool visible) = 0;

    virtual bool queryPosition(
        ::mce::UUID const& minimapId,
        float              worldX,
        float              worldZ,
        float&             outY,
        ::std::string&     outBiomeName,
        ::std::string&     outBlockName
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
    listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)> callback) = 0;

    virtual ::Bedrock::PubSub::Subscription
    listenForMarkersChanged(::std::function<void(::mce::UUID const&)> callback) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForMeMarkerChanged(::std::function<void()> callback) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
