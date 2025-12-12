#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec3;
namespace mce { class Color; }
// clang-format on

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types declare
    // clang-format off
    struct DebugMarkerData;
    // clang-format on

    // ClientboundDebugRendererPacket inner types define
    enum class Type : uint {
        Invalid            = 0,
        ClearDebugMarkers  = 1,
        AddDebugMarkerCube = 2,
    };

    struct DebugMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnke77363;
        ::ll::UntypedStorage<4, 12> mUnkaf4e19;
        ::ll::UntypedStorage<4, 16> mUnkb348c8;
        ::ll::UntypedStorage<8, 8>  mUnk6b0c15;
        // NOLINTEND

    public:
        // prevent constructor by default
        DebugMarkerData& operator=(DebugMarkerData const&);
        DebugMarkerData(DebugMarkerData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DebugMarkerData();

        MCNAPI ~DebugMarkerData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1bcc12;
    ::ll::UntypedStorage<8, 80> mUnkebd0e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundDebugRendererPacket& operator=(ClientboundDebugRendererPacket const&);
    ClientboundDebugRendererPacket(ClientboundDebugRendererPacket const&);
    ClientboundDebugRendererPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~ClientboundDebugRendererPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientboundDebugRendererPacket(
        ::std::string               text,
        ::mce::Color const&         color,
        ::Vec3 const&               position,
        ::std::chrono::milliseconds duration
    );
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
