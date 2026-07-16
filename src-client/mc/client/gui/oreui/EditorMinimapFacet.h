#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapTrackingMode.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class EditorMinimapServiceProvider; }
// clang-format on

namespace OreUI {

class EditorMinimapFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorMinimapFacet> {
public:
    // EditorMinimapFacet inner types declare
    // clang-format off
    struct MinimapOreUIMarkerData;
    struct MapDimensions;
    struct MinimapData;
    struct MinimapHoverInfo;
    // clang-format on

    // EditorMinimapFacet inner types define
    struct MinimapOreUIMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Editor::Services::MinimapMarkerType> mType;
        ::ll::TypedStorage<8, 32, ::std::string>                        mIconIdentifier;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mPosition;
        ::ll::TypedStorage<4, 4, float>                                 mRotation;
        ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor;
        ::ll::TypedStorage<8, 32, ::std::string>                        mLabel;
        ::ll::TypedStorage<8, 32, ::std::string>                        mTooltip;
        ::ll::TypedStorage<1, 1, bool>                                  mClickable;
        // NOLINTEND
    };

    struct MapDimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mWidth;
        ::ll::TypedStorage<4, 4, int> mHeight;
        // NOLINTEND
    };

    struct MinimapData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                             mMapImage;
        ::ll::TypedStorage<4, 8, ::OreUI::EditorMinimapFacet::MapDimensions> mDimensions;
        ::ll::TypedStorage<4, 4, ::Editor::Services::MinimapTrackingMode>    mTrackingMode;
        ::ll::TypedStorage<4, 4, float>                                      mViewCenterX;
        ::ll::TypedStorage<4, 4, float>                                      mViewCenterZ;
        ::ll::TypedStorage<1, 1, bool>                                       mIsMeMarkerOnMap;
        // NOLINTEND
    };

    struct MinimapHoverInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>        mWorldPosition;
        ::ll::TypedStorage<8, 32, ::std::string> mBiomeName;
        ::ll::TypedStorage<8, 32, ::std::string> mBlockName;
        ::ll::TypedStorage<1, 1, bool>           mValid;
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
        ::std::unordered_map<::std::string, ::std::vector<::OreUI::EditorMinimapFacet::MinimapOreUIMarkerData>>>
                                                                                                  mMarkers;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::EditorMinimapFacet::MinimapOreUIMarkerData>> mGlobalMarkers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::EditorMinimapFacet::MinimapData>>
        mMinimapsSnapshot;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::vector<::OreUI::EditorMinimapFacet::MinimapOreUIMarkerData>>>
        mMarkersSnapshot;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::EditorMinimapFacet::MinimapOreUIMarkerData>>
                                                                   mGlobalMarkersSnapshot;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mVisibleMinimapUIs;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mMinimapDataChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mMarkersChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mMeMarkerChangedSub;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorMinimapFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorMinimapFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorMinimapFacet(::Editor::ServiceProviderCollection* services);
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
