#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class IResourceAwaiter {
public:
    // IResourceAwaiter inner types define
    enum class Status : uchar {
        NotWaiting     = 0,
        Waiting        = 1,
        NewlyCompleted = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceAwaiter() = default;

    virtual ::OreUI::IResourceAwaiter::Status updateStatus() = 0;

    virtual void refreshResources() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
