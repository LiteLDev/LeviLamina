#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class IMapDataManagerOptions {
public:
    // prevent constructor by default
    IMapDataManagerOptions& operator=(IMapDataManagerOptions const&);
    IMapDataManagerOptions(IMapDataManagerOptions const&);
    IMapDataManagerOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMapDataManagerOptions() = default;

    // vIndex: 1
    virtual bool isPremiumWorldTemplate() const = 0;

    // vIndex: 2
    virtual bool isLegacyLevel() const = 0;

    // vIndex: 3
    virtual bool hasMapsCenteredToOrigin() const = 0;

    // vIndex: 4
    virtual ::BlockPos const& getWorldCenter() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
