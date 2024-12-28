#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/store/servicecomponent/StoreUIComponent.h"

// auto generated forward declare list
// clang-format off
class StoreDataDrivenScreenController;
struct ImageTelemetryInfo;
namespace Json { class Value; }
// clang-format on

class OfferCollectionComponent : public ::StoreUIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk52965e;
    ::ll::UntypedStorage<8, 72>  mUnkf013a1;
    ::ll::UntypedStorage<8, 24>  mUnk548612;
    ::ll::UntypedStorage<4, 4>   mUnkc9bab3;
    ::ll::UntypedStorage<4, 4>   mUnk66f371;
    ::ll::UntypedStorage<4, 4>   mUnk4411f4;
    ::ll::UntypedStorage<4, 4>   mUnk7fd23a;
    ::ll::UntypedStorage<4, 4>   mUnkd8d5ba;
    ::ll::UntypedStorage<8, 48>  mUnkf7933a;
    ::ll::UntypedStorage<1, 1>   mUnk803253;
    ::ll::UntypedStorage<8, 32>  mUnk6fe3f7;
    ::ll::UntypedStorage<8, 368> mUnk115a5a;
    ::ll::UntypedStorage<1, 1>   mUnk6436ce;
    ::ll::UntypedStorage<1, 1>   mUnk1b8507;
    ::ll::UntypedStorage<1, 1>   mUnka3c131;
    ::ll::UntypedStorage<8, 208> mUnk46de51;
    ::ll::UntypedStorage<8, 16>  mUnk6f832c;
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
    virtual ~OfferCollectionComponent() /*override*/;

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>&);

    MCAPI void $tick(::ui::DirtyFlag&);

    MCAPI bool $canRemove() const;

    MCAPI int $getReadyCount() const;

    MCAPI ::ImageTelemetryInfo $getImageTelemetry() const;

    MCAPI void $_registerBindsAndEvents(::StoreDataDrivenScreenController&);

    MCAPI void $_parseData(::Json::Value const&);
    // NOLINTEND
};
