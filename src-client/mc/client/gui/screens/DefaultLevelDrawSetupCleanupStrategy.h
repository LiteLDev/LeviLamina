#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AbstractScreenSetupCleanupStrategy.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
// clang-format on

class DefaultLevelDrawSetupCleanupStrategy : public ::AbstractScreenSetupCleanupStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<4, 4, float>                                             mA;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultLevelDrawSetupCleanupStrategy() /*override*/ = default;

    virtual void setupScreen(::ScreenContext& screenContext) /*override*/;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupScreen(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
