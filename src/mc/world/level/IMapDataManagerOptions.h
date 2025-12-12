#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class IMapDataManagerOptions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMapDataManagerOptions() = default;

    virtual bool isPremiumWorldTemplate() const = 0;

    virtual bool isLegacyLevel() const = 0;

    virtual bool hasMapsCenteredToOrigin() const = 0;

    virtual ::BlockPos const& getWorldCenter() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
