#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ShapeDataPayload;
// clang-format on

struct DebugDrawerPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapeDataPayload>> mShapes;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugDrawerPacketPayload& operator=(DebugDrawerPacketPayload const&);
    DebugDrawerPacketPayload(DebugDrawerPacketPayload const&);
    DebugDrawerPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DebugDrawerPacketPayload& operator=(::DebugDrawerPacketPayload&&);

    MCAPI ~DebugDrawerPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
