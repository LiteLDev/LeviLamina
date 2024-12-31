#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"

// auto generated forward declare list
// clang-format off
class StoreDataDrivenScreenController;
struct ImageTelemetryInfo;
namespace Json { class Value; }
// clang-format on

class StoreUIComponent : public ::std::enable_shared_from_this<::StoreUIComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8bd2f3;
    ::ll::UntypedStorage<8, 16> mUnkf5fc51;
    ::ll::UntypedStorage<8, 24> mUnk733091;
    ::ll::UntypedStorage<2, 2>  mUnkbf596f;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreUIComponent& operator=(StoreUIComponent const&);
    StoreUIComponent(StoreUIComponent const&);
    StoreUIComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoreUIComponent() = default;

    // vIndex: 1
    virtual void onScreenClosed();

    // vIndex: 2
    virtual void onScreenEntered();

    // vIndex: 3
    virtual void onScreenEntering();

    // vIndex: 4
    virtual void onScreenOpened();

    // vIndex: 5
    virtual void getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>&);

    // vIndex: 6
    virtual bool isValid() const;

    // vIndex: 7
    virtual void tick(::ui::DirtyFlag&);

    // vIndex: 8
    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    // vIndex: 9
    virtual bool canRemove() const;

    // vIndex: 10
    virtual int getReadyCount() const;

    // vIndex: 11
    virtual ::std::string getTelemetryData() const;

    // vIndex: 12
    virtual ::ImageTelemetryInfo getImageTelemetry() const;

    // vIndex: 13
    virtual void _onInit(::StoreDataDrivenScreenController&);

    // vIndex: 14
    virtual void _onPostInit();

    // vIndex: 15
    virtual void _parseData(::Json::Value const&);

    // vIndex: 17
    virtual void _registerBindsAndEvents();

    // vIndex: 16
    virtual void _registerBindsAndEvents(::StoreDataDrivenScreenController&);
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
