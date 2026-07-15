#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorMinimapServiceProvider.h"
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapTrackingMode.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
class Vec2;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class MinimapItem; }
namespace Editor::Services { struct MinimapMarkerData; }
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

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId) /*override*/;

    virtual ::mce::Color getPlayerColor(::ActorUniqueID playerId) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setVanillaBiomeColorMap(::std::unordered_map<::std::string, ::mce::Color> const& colorMap) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    updateVanillaColorMap(::std::string const& biomeId, ::mce::Color const& color) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapYLevel(::mce::UUID const& minimapId, int yLevel) /*override*/;

    virtual int getMinimapYLevel(::mce::UUID const& minimapId) const /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapTrackingMode(::mce::UUID const& minimapId, ::Editor::Services::MinimapTrackingMode mode) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setMinimapFreeCenter(::mce::UUID const& minimapId, ::Vec2 const& center) /*override*/;

    virtual ::Vec2 getMinimapFreeCenter(::mce::UUID const& minimapId) const /*override*/;

    virtual bool hasMinimapMarkerOfType(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const
        /*override*/;

    virtual bool hasCustomGroup(::mce::UUID const& minimapId, ::std::string const& iconIdentifier) const /*override*/;

#ifdef LL_PLAT_S
    virtual void setMinimapUIVisible(::mce::UUID const&, bool) /*override*/;
#else // LL_PLAT_C
    virtual void setMinimapUIVisible(::mce::UUID const& minimapId, bool visible) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool queryPosition(::mce::UUID const&, float, float, float&, ::std::string&, ::std::string&) /*override*/;
#else // LL_PLAT_C
    virtual bool queryPosition(
        ::mce::UUID const& minimapId,
        float              worldX,
        float              worldZ,
        float&             outY,
        ::std::string&     outBiomeName,
        ::std::string&     outBlockName
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::std::string generateMinimapImage(::mce::UUID const&, ::Vec3 const&) /*override*/;
#else // LL_PLAT_C
    virtual ::std::string generateMinimapImage(::mce::UUID const& minimapId, ::Vec3 const& playerPosition) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::std::vector<::Editor::Services::MinimapMarkerData>
    getAllMarkers(::mce::UUID const&, ::DimensionType) const /*override*/;
#else // LL_PLAT_C
    virtual ::std::vector<::Editor::Services::MinimapMarkerData>
    getAllMarkers(::mce::UUID const& minimapId, ::DimensionType currentDimension) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Bedrock::PubSub::Subscription
        listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)>) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::PubSub::Subscription
    listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)> callback) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Bedrock::PubSub::Subscription
        listenForMarkersChanged(::std::function<void(::mce::UUID const&)>) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::PubSub::Subscription
    listenForMarkersChanged(::std::function<void(::mce::UUID const&)> callback) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Bedrock::PubSub::Subscription listenForMeMarkerChanged(::std::function<void()>) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::PubSub::Subscription listenForMeMarkerChanged(::std::function<void()> callback) /*override*/;
#endif

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

    MCNAPI ::Scripting::Result_deprecated<bool>
    $setCustomBiome(::mce::UUID const& minimapId, ::WeakRef<::ICustomBiomeSource> const& customBiomeSource);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $setCustomBiome(::mce::UUID const& minimapId, ::mce::UUID const& customBiomeId);

    MCNAPI ::mce::Color $getPlayerColor(::ActorUniqueID playerId);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setVanillaBiomeColorMap(::std::unordered_map<::std::string, ::mce::Color> const& colorMap);

    MCNAPI ::Scripting::Result_deprecated<void>
    $updateVanillaColorMap(::std::string const& biomeId, ::mce::Color const& color);

    MCNAPI ::Scripting::Result_deprecated<void> $setMinimapYLevel(::mce::UUID const& minimapId, int yLevel);

    MCNAPI int $getMinimapYLevel(::mce::UUID const& minimapId) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapTrackingMode(::mce::UUID const& minimapId, ::Editor::Services::MinimapTrackingMode mode);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMinimapFreeCenter(::mce::UUID const& minimapId, ::Vec2 const& center);

    MCNAPI ::Vec2 $getMinimapFreeCenter(::mce::UUID const& minimapId) const;

    MCNAPI bool $hasMinimapMarkerOfType(::mce::UUID const& minimapId, ::Editor::Services::MinimapMarkerType type) const;

    MCNAPI bool $hasCustomGroup(::mce::UUID const& minimapId, ::std::string const& iconIdentifier) const;

    MCNAPI void $setMinimapUIVisible(::mce::UUID const&, bool);

    MCNAPI bool $queryPosition(::mce::UUID const&, float, float, float&, ::std::string&, ::std::string&);

    MCNAPI ::std::string $generateMinimapImage(::mce::UUID const&, ::Vec3 const&);

    MCNAPI ::std::vector<::Editor::Services::MinimapMarkerData>
    $getAllMarkers(::mce::UUID const&, ::DimensionType) const;

    MCNAPI ::Bedrock::PubSub::Subscription $listenForMinimapDataChanged(::std::function<void(::mce::UUID const&)>);

    MCNAPI ::Bedrock::PubSub::Subscription $listenForMarkersChanged(::std::function<void(::mce::UUID const&)>);

    MCNAPI ::Bedrock::PubSub::Subscription $listenForMeMarkerChanged(::std::function<void()>);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorMinimapServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
