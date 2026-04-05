#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
struct StoreDataDrivenScreenParams;
// clang-format on

class ISceneFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneFactory() = default;

    virtual ::std::shared_ptr<::AbstractScene> createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab) = 0;

    virtual ::std::shared_ptr<::AbstractScene> createStartMenuScreen(bool shouldSendEvent) = 0;

    virtual ::std::shared_ptr<::AbstractScene> createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
