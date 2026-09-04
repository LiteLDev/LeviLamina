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

class DefaultUIScreenSetupCleanupStrategy : public ::AbstractScreenSetupCleanupStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultUIScreenSetupCleanupStrategy() /*override*/ = default;

    virtual void setupScreen(::ScreenContext& screenContext) /*override*/;

    virtual void cleanupScreen(::ScreenContext& screenContext) /*override*/;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupScreen(::ScreenContext& screenContext);

    MCAPI void $cleanupScreen(::ScreenContext& screenContext);

    MCAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
