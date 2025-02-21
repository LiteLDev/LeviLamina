#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/store/servicecomponent/StoreUIComponent.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
class StoreCatalogItemVisualLayer;
class StoreDataDrivenScreenController;
struct ImageTelemetryInfo;
struct LinksToStyle;
struct StyleData;
namespace Json { class Value; }
// clang-format on

class OfferCollectionComponent : public ::StoreUIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem&>                                              mInvalidItem;
    ::ll::TypedStorage<8, 72, ::StoreCatalogItemVisualLayer>                                   mInvalidItemVisualLayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StoreCatalogItemVisualLayer>>> mOffers;
    ::ll::TypedStorage<4, 4, uint>                                                             mVisibleOfferPerRow;
    ::ll::TypedStorage<4, 4, uint>                                                             mMaxOffers;
    ::ll::TypedStorage<4, 4, uint>                                                             mMaxOffersPerPage;
    ::ll::TypedStorage<4, 4, uint>                                                             mPossibleOffers;
    ::ll::TypedStorage<4, 4, uint>                                                             mFirstVisibleItemIndex;
    ::ll::TypedStorage<8, 48, ::ImageTelemetryInfo>                                            mImageTelemetryInfo;
    ::ll::TypedStorage<1, 1, bool>                                                             mDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mLinksToPageId;
    ::ll::TypedStorage<8, 368, ::LinksToStyle>                                                 mLinksToStyle;
    ::ll::TypedStorage<1, 1, bool>                                                             mHasFetchedInitialImages;
    ::ll::TypedStorage<1, 1, bool>                                                             mShowMoreButtonVisible;
    ::ll::TypedStorage<1, 1, bool>                                                             mAreCycleButtonsVisible;
    ::ll::TypedStorage<8, 208, ::StyleData>                                                    mStyleData;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                                   mOfflineJson;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OfferCollectionComponent() /*override*/ = default;

    // vIndex: 5
    virtual void getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>&) /*override*/;

    // vIndex: 7
    virtual void tick(::ui::DirtyFlag&) /*override*/;

    // vIndex: 9
    virtual bool canRemove() const /*override*/;

    // vIndex: 10
    virtual int getReadyCount() const /*override*/;

    // vIndex: 12
    virtual ::ImageTelemetryInfo getImageTelemetry() const /*override*/;

    // vIndex: 16
    virtual void _registerBindsAndEvents(::StoreDataDrivenScreenController&) /*override*/;

    // vIndex: 15
    virtual void _parseData(::Json::Value const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
