#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types declare
    // clang-format off
    struct DebugMarkerData;
    // clang-format on
    
    // ClientboundDebugRendererPacket inner types define
    enum class Type : uint {
        Invalid = 0,
        ClearDebugMarkers = 1,
        AddDebugMarkerCube = 2,
    };
    
    struct DebugMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> text;
        ::ll::TypedStorage<4, 12, ::Vec3> position;
        ::ll::TypedStorage<4, 16, ::mce::Color> color;
        ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> duration;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DebugMarkerData();
    
        MCAPI ~DebugMarkerData();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ClientboundDebugRendererPacket::Type> mType;
    ::ll::TypedStorage<8, 80, ::std::optional<::ClientboundDebugRendererPacket::DebugMarkerData>> mDebugMarkerData;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundDebugRendererPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ClientboundDebugRendererPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientboundDebugRendererPacket(::std::string text, ::mce::Color const& color, ::Vec3 const& position, ::std::chrono::milliseconds duration);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string text, ::mce::Color const& color, ::Vec3 const& position, ::std::chrono::milliseconds duration);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
