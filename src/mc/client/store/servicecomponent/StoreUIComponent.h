#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class StoreVisualStyle;
struct ImageTelemetryInfo;
namespace Json { class Value; }
struct MainMenuScreenModel;
struct StoreDataDrivenScreenController;
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
#ifdef LL_PLAT_S
    virtual ~StoreUIComponent() = default;
#else // LL_PLAT_C
    virtual ~StoreUIComponent();
#endif

    virtual void onScreenClosed(::StoreDataDrivenScreenController&);

    virtual void onScreenEntered();

    virtual void onScreenEntering();

    virtual void onScreenOpened();

    virtual void getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>&);

    virtual bool isValid() const;

    virtual void tick(::ui::DirtyFlag&);

    virtual void tick(::StoreDataDrivenScreenController&, ::ui::DirtyFlag&);

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual bool canRemove() const;

    virtual bool canRemove(::StoreDataDrivenScreenController&) const;

    virtual int getReadyCount() const;

    virtual ::std::string getTelemetryData() const;

    virtual ::ImageTelemetryInfo getImageTelemetry() const;

    virtual void _onInit(::StoreDataDrivenScreenController&);

    virtual void _onPostInit(::StoreDataDrivenScreenController&);

    virtual void _parseData(::Json::Value const&);

    virtual void _registerBindsAndEvents(::StoreDataDrivenScreenController&) = 0;
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
    MCNAPI void $onScreenClosed(::StoreDataDrivenScreenController&);

    MCNAPI void $onScreenEntered();

    MCNAPI void $onScreenEntering();

    MCNAPI void $onScreenOpened();

    MCNAPI void $getComponentDependanciesToAdd(::std::vector<::std::shared_ptr<::StoreUIComponent>>&);

    MCNAPI bool $isValid() const;

    MCNAPI bool $canRemove() const;

    MCNAPI bool $canRemove(::StoreDataDrivenScreenController&) const;

    MCNAPI int $getReadyCount() const;

    MCNAPI ::std::string $getTelemetryData() const;

    MCNAPI ::ImageTelemetryInfo $getImageTelemetry() const;

    MCNAPI void $_onInit(::StoreDataDrivenScreenController&);

    MCNAPI void $_onPostInit(::StoreDataDrivenScreenController&);

    MCNAPI void $_parseData(::Json::Value const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
