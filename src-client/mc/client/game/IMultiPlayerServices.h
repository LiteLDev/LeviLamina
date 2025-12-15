#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"

class IMultiPlayerServices {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMultiPlayerServices() = default;

    virtual bool checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier>) = 0;

    virtual bool isPlayingLevel() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
