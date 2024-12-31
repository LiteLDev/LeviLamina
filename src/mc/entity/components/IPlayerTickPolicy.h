#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerTickComponent;
// clang-format on

struct IPlayerTickPolicy {
public:
    // IPlayerTickPolicy inner types define
    enum class TickAction : int {
        ProcessTick    = 0,
        StopProcessing = 1,
        SkipTick       = 2,
    };

public:
    // prevent constructor by default
    IPlayerTickPolicy& operator=(IPlayerTickPolicy const&);
    IPlayerTickPolicy(IPlayerTickPolicy const&);
    IPlayerTickPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayerTickPolicy() = default;

    // vIndex: 1
    virtual uint64 getMaxTickCount(::PlayerTickComponent const&) const = 0;

    // vIndex: 2
    virtual ::IPlayerTickPolicy::TickAction shouldTickPlayer(::PlayerTickComponent const&, uint64) const = 0;
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
