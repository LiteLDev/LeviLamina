#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class AbstractScreenSetupCleanupStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractScreenSetupCleanupStrategy() = default;

    virtual void setupScreen(::ScreenContext&);

    virtual void cleanupScreen(::ScreenContext& screenContext);

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $cleanupScreen(::ScreenContext& screenContext);
    // NOLINTEND
};
