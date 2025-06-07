#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class StoreDataDrivenScreenController;
class StoreVisualStyle;
struct ImageTelemetryInfo;
namespace Json { class Value; }
// clang-format on

class StoreUIComponent : public ::std::enable_shared_from_this<::StoreUIComponent> {
public:
    // StoreUIComponent inner types define
    using ID = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreVisualStyle&>                                            mOwner;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                      mMainMenuScreenModel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::StoreDataDrivenScreenController>> mController;
    ::ll::TypedStorage<2, 2, ushort>                                                         mId;
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
    virtual void onScreenClosed(::StoreDataDrivenScreenController&);

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

    // vIndex: 10
    virtual bool canRemove() const;

    // vIndex: 9
    virtual bool canRemove(::StoreDataDrivenScreenController&) const;

    // vIndex: 11
    virtual int getReadyCount() const;

    // vIndex: 12
    virtual ::std::string getTelemetryData() const;

    // vIndex: 13
    virtual ::ImageTelemetryInfo getImageTelemetry() const;

    // vIndex: 14
    virtual void _onInit(::StoreDataDrivenScreenController&);

    // vIndex: 15
    virtual void _onPostInit();

    // vIndex: 16
    virtual void _parseData(::Json::Value const&);

    // vIndex: 18
    virtual void _registerBindsAndEvents();

    // vIndex: 17
    virtual void _registerBindsAndEvents(::StoreDataDrivenScreenController&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
