#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class EditorMinimapServiceProvider; }
namespace mce { class UUID; }
// clang-format on

namespace OreUI {

class EditorMinimapFacet : public ::OreUI::FacetBase<::OreUI::EditorMinimapFacet> {
public:
    // EditorMinimapFacet inner types declare
    // clang-format off
    struct PlayerMarkerData;
    struct MapDimensions;
    struct MinimapData;
    // clang-format on

    // EditorMinimapFacet inner types define
    struct PlayerMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>         mX;
        ::ll::TypedStorage<4, 4, float>         mZ;
        ::ll::TypedStorage<4, 4, float>         mRotation;
        ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
        ::ll::TypedStorage<1, 1, bool>          mIsOnMap;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
        // NOLINTEND
    };

    struct MapDimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mWidth;
        ::ll::TypedStorage<4, 4, int> mHeight;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
        // NOLINTEND
    };

    struct MinimapData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                             mMapImage;
        ::ll::TypedStorage<4, 8, ::OreUI::EditorMinimapFacet::MapDimensions> mDimensions;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~MinimapData();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mIsDirty;
    ::ll::TypedStorage<8, 8, ::Editor::Services::EditorMinimapServiceProvider*> mMinimapService;
    ::ll::TypedStorage<8, 8, ::Editor::ServiceProviderCollection*>              mServices;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::EditorMinimapFacet::MinimapData>> mMinimaps;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::vector<::OreUI::EditorMinimapFacet::PlayerMarkerData>>>
                                                                             mPlayerMarkers;
    ::ll::TypedStorage<4, 32, ::OreUI::EditorMinimapFacet::PlayerMarkerData> mMeMarker;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>           mVisibleMinimapUIs;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mMinimapDataChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mPlayerMarkersChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mMeMarkerChangedSub;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorMinimapFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorMinimapFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorMinimapFacet(::Editor::ServiceProviderCollection* services);

    MCAPI void _handleMeMarkerChanged();

    MCAPI void _handleMinimapDataChanged(::mce::UUID const& minimapId);

    MCAPI void _handlePlayerMarkersChanged(::mce::UUID const& minimapId);

    MCAPI void _updateMinimapData(::mce::UUID const& minimapId);

    MCAPI void _updatePlayerMarkers(::mce::UUID const& minimapId);

    MCFOLD ::OreUI::EditorMinimapFacet::PlayerMarkerData const& getMeMarker();

    MCFOLD ::std::unordered_map<::std::string, ::OreUI::EditorMinimapFacet::MinimapData> const& getMinimaps();

    MCFOLD ::std::unordered_map<::std::string, ::std::vector<::OreUI::EditorMinimapFacet::PlayerMarkerData>> const&
    getPlayerMarkers();

    MCAPI void registerMinimapUI(::std::string const& mapId);

    MCAPI void unregisterMinimapUI(::std::string const& mapId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
