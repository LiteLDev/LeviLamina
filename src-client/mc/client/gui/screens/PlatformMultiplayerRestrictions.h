#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftScreenModel;
// clang-format on

class PlatformMultiplayerRestrictions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformMultiplayerRestrictions() = default;

    virtual bool platformRestrictsMultiplayer() const = 0;

    virtual void displayPlatformRestrictsMultiplayerModal(::std::function<void()>&&) = 0;

    virtual void displayPlatformRestrictsUserGeneratedContentModal(::std::function<void()>&&) = 0;

    virtual void displayPlatformRestrictsChatModal(::std::function<void()>&&) = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::std::unique_ptr<
        ::PlatformMultiplayerRestrictions>(::std::shared_ptr<::MinecraftScreenModel>, ::IClientInstance&)>&
    sFactory();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
