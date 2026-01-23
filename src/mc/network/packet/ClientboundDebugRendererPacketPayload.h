#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"

class ClientboundDebugRendererPacketPayload {
public:
    // ClientboundDebugRendererPacketPayload inner types declare
    // clang-format off
    struct DebugMarkerData;
    // clang-format on

    // ClientboundDebugRendererPacketPayload inner types define
    enum class PayloadType : uchar {
        Invalid            = 0,
        ClearDebugMarkers  = 1,
        AddDebugMarkerCube = 2,
    };

    struct DebugMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> text;
        ::ll::TypedStorage<4, 12, ::Vec3>        position;
        ::ll::TypedStorage<4, 16, ::mce::Color>  color;
        ::ll::TypedStorage<8, 8, uint64>         durationMS;
        // NOLINTEND

    public:
        // prevent constructor by default
        DebugMarkerData(DebugMarkerData const&);
        DebugMarkerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::ClientboundDebugRendererPacketPayload::DebugMarkerData&
        operator=(::ClientboundDebugRendererPacketPayload::DebugMarkerData&&);

        MCAPI ::ClientboundDebugRendererPacketPayload::DebugMarkerData&
        operator=(::ClientboundDebugRendererPacketPayload::DebugMarkerData const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ClientboundDebugRendererPacketPayload::PayloadType> mType;
    ::ll::TypedStorage<8, 80, ::std::optional<::ClientboundDebugRendererPacketPayload::DebugMarkerData>>
        mDebugMarkerData;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundDebugRendererPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientboundDebugRendererPacketPayload(
        ::std::string               text,
        ::mce::Color const&         color,
        ::Vec3 const&               position,
        ::std::chrono::milliseconds duration
    );

    MCAPI ~ClientboundDebugRendererPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string text, ::mce::Color const& color, ::Vec3 const& position, ::std::chrono::milliseconds duration);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
