#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/store/StoreCatalogItemVisualLayer.h"
#include "mc/client/store/servicecomponent/ImageTelemetryInfo.h"
#include "mc/client/store/servicecomponent/StoreUIComponentWithStaticBinding.h"
#include "mc/client/store/servicecomponent/utility/LinksToStyle.h"
#include "mc/client/store/servicecomponent/utility/StyleData.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class StoreUIComponent;
class StoreVisualStyle;
class UIPropertyBag;
struct TextStyle;
struct IStoreCatalogItem;
struct MainMenuScreenModel;
struct StoreCatalogItem;
struct StoreDataDrivenScreenController;
namespace catalog { struct ImageInfo; }
// clang-format on

class OfferCollectionComponent : public ::StoreUIComponentWithStaticBinding<::OfferCollectionComponent> {
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
    ::ll::TypedStorage<1, 1, bool>                                                             mHasMoreOffers;
    ::ll::TypedStorage<8, 208, ::StyleData>                                                    mStyleData;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                                   mOfflineJson;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferCollectionComponent& operator=(OfferCollectionComponent const&);
    OfferCollectionComponent(OfferCollectionComponent const&);
    OfferCollectionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~OfferCollectionComponent() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~OfferCollectionComponent() /*override*/;
#endif

    virtual void getComponentDependanciesToAdd(
        ::std::vector<::std::shared_ptr<::StoreUIComponent>>& compDependanciesToAdd
    ) /*override*/;

    virtual void tick(::ui::DirtyFlag&) /*override*/;

    virtual bool canRemove() const /*override*/;

    virtual int getReadyCount() const /*override*/;

    virtual ::ImageTelemetryInfo getImageTelemetry() const /*override*/;

    virtual void _parseData(::Json::Value const& offerCollectionCompJson) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C OfferCollectionComponent(::StoreVisualStyle& owner, ::std::shared_ptr<::MainMenuScreenModel> model);

    MCNAPI_C void _forceSelectLastItemIfNeeded(
        ::StoreDataDrivenScreenController& controller,
        ::UIPropertyBag*                   bag,
        ::OfferCollectionComponent*        offerCollectionComp
    );

    MCNAPI_C ::std::function<void(::Bedrock::Http::StatusCode, ::catalog::ImageInfo&)> _getImageFetchCallback();

    MCNAPI_C void addNewOffers(::std::vector<::gsl::not_null<::IStoreCatalogItem*>>& newOffers);

    MCNAPI_C void fetchImages();

    MCNAPI_C void fireEventSearchItemSelected(
        ::StoreDataDrivenScreenController& controller,
        int                                offerCollectionIndex,
        ::std::string const&               productId
    ) const;

    MCNAPI_C ::std::string const getFocusIdString(::UIPropertyBag const& bag, int index) const;

    MCNAPI_C ::TextStyle
    getIconOverlayTextStyle(::std::string const& anchor, int iconOverlayIndex, ::UIPropertyBag& bag);

    MCNAPI_C ::std::vector<::gsl::not_null<::IStoreCatalogItem*>> getOffers() const;

    MCNAPI_C void incrementFirstVisibleItemIndex();

    MCNAPI_C bool isLastOfferInCollection(int offerIndex) const;

    MCNAPI_C bool isShowMoreButtonVisible(int offerIndex) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _registerIconOverlayBinds(::StoreDataDrivenScreenController& controller);

    MCNAPI_C static ::std::vector<::std::string>
    bindCoinBundleSectionContent(::OfferCollectionComponent const& offerCollection);

    MCNAPI_C static ::std::vector<::std::string>
    bindVerticalSectionContent(::OfferCollectionComponent const& offerCollectionComp);

    MCNAPI_C static void registerStaticBindsAndEvents(::StoreDataDrivenScreenController& controller);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::StoreVisualStyle& owner, ::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void
    $getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>& compDependanciesToAdd);

    MCNAPI bool $canRemove() const;

    MCNAPI int $getReadyCount() const;

    MCNAPI ::ImageTelemetryInfo $getImageTelemetry() const;

    MCNAPI void $_parseData(::Json::Value const& offerCollectionCompJson);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
