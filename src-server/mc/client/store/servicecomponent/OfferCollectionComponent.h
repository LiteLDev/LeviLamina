#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/store/StoreCatalogItemVisualLayer.h"
#include "mc/client/store/servicecomponent/ImageTelemetryInfo.h"
#include "mc/client/store/servicecomponent/StoreUIComponentWithStaticBinding.h"
#include "mc/client/store/servicecomponent/utility/LinksToStyle.h"
#include "mc/client/store/servicecomponent/utility/StyleData.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
class StoreUIComponent;
// clang-format on

class OfferCollectionComponent : public ::StoreUIComponentWithStaticBinding<::OfferCollectionComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem&> mInvalidItem;
    ::ll::TypedStorage<8, 72, ::StoreCatalogItemVisualLayer> mInvalidItemVisualLayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StoreCatalogItemVisualLayer>>> mOffers;
    ::ll::TypedStorage<4, 4, uint> mVisibleOfferPerRow;
    ::ll::TypedStorage<4, 4, uint> mMaxOffers;
    ::ll::TypedStorage<4, 4, uint> mMaxOffersPerPage;
    ::ll::TypedStorage<4, 4, uint> mPossibleOffers;
    ::ll::TypedStorage<4, 4, uint> mFirstVisibleItemIndex;
    ::ll::TypedStorage<8, 48, ::ImageTelemetryInfo> mImageTelemetryInfo;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<8, 32, ::std::string> mLinksToPageId;
    ::ll::TypedStorage<8, 368, ::LinksToStyle> mLinksToStyle;
    ::ll::TypedStorage<1, 1, bool> mHasFetchedInitialImages;
    ::ll::TypedStorage<1, 1, bool> mShowMoreButtonVisible;
    ::ll::TypedStorage<1, 1, bool> mAreCycleButtonsVisible;
    ::ll::TypedStorage<1, 1, bool> mHasMoreOffers;
    ::ll::TypedStorage<8, 208, ::StyleData> mStyleData;
    ::ll::TypedStorage<8, 16, ::Json::Value> mOfflineJson;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferCollectionComponent& operator=(OfferCollectionComponent const&);
    OfferCollectionComponent(OfferCollectionComponent const&);
    OfferCollectionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OfferCollectionComponent() /*override*/ = default;

    // vIndex: 5
    virtual void getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>&) /*override*/;

    // vIndex: 8
    virtual void tick(::ui::DirtyFlag&) /*override*/;

    // vIndex: 11
    virtual bool canRemove() const /*override*/;

    // vIndex: 12
    virtual int getReadyCount() const /*override*/;

    // vIndex: 14
    virtual ::ImageTelemetryInfo getImageTelemetry() const /*override*/;

    // vIndex: 17
    virtual void _parseData(::Json::Value const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
