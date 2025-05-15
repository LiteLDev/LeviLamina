#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
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
    ::ll::TypedStorage<4, 4, ::ClientboundDebugRendererPacket::Type>                              mType;
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

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
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
