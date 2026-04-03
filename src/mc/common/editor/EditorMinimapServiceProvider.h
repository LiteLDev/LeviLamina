#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
class Vec3;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Network { struct PlayerMarkerInfo; }
namespace Editor::Services { class MinimapItem; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorMinimapServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorMinimapServiceProvider() = default;

    virtual ::WeakRef<::Editor::Services::MinimapItem> createMinimap(int, int, ::Editor::Services::MinimapViewType) = 0;

    virtual bool destroyMinimap(::mce::UUID const& minimapId) = 0;

    virtual ::WeakRef<::Editor::Services::MinimapItem> getMinimap(::mce::UUID const& minimapId) = 0;

    virtual ::std::vector<::mce::UUID> getAllMinimapIds() const = 0;

    virtual bool isMinimapActive(::mce::UUID const&) const = 0;

    virtual ::Scripting::Result_deprecated<void> setMinimapActive(::mce::UUID const&, bool) = 0;

    virtual ::Scripting::Result_deprecated<void> setMinimapSize(::mce::UUID const&, int, int) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapViewType(::mce::UUID const&, ::Editor::Services::MinimapViewType) = 0;

    virtual ::Scripting::Result_deprecated<void>
    addMinimapMarker(::mce::UUID const&, ::Editor::Services::MinimapMarkerType) = 0;

    virtual ::Scripting::Result_deprecated<void>
    removeMinimapMarker(::mce::UUID const&, ::Editor::Services::MinimapMarkerType) = 0;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const&, ::WeakRef<::ICustomBiomeSource> const&) = 0;

    virtual ::Scripting::Result_deprecated<bool> setCustomBiome(::mce::UUID const&, ::mce::UUID const&) = 0;

    virtual ::mce::Color getPlayerColor(::ActorUniqueID) = 0;

    virtual ::std::string generateMinimapImage(::mce::UUID const&, ::Vec3 const&) = 0;

    virtual ::std::vector<::Editor::Network::PlayerMarkerInfo> getPlayerMarkers(::mce::UUID const&) = 0;

    virtual bool hasMarker(::mce::UUID const&, ::Editor::Services::MinimapMarkerType) const = 0;

    virtual ::std::vector<::mce::UUID> getAllActiveMinimapIds() const = 0;

    virtual ::std::pair<int, int> getMapDimensions(::mce::UUID const&) const = 0;

    virtual void triggerInitialCacheUpdate(::mce::UUID const&, ::Vec3 const&) = 0;

    virtual void setMinimapUIVisible(::mce::UUID const&, bool) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription
        listenForPlayerMarkersChanged(::std::function<void(::mce::UUID const&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForMeMarkerChanged(::std::function<void()>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
