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
// clang-format on

class SetTitlePacket : public ::Packet {
public:
    // SetTitlePacket inner types define
    enum class TitleType : int {
        Clear               = 0,
        Reset               = 1,
        Title               = 2,
        Subtitle            = 3,
        Actionbar           = 4,
        Times               = 5,
        TitleTextObject     = 6,
        SubtitleTextObject  = 7,
        ActionbarTextObject = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SetTitlePacket::TitleType>     mType;
    ::ll::TypedStorage<8, 32, ::std::string>                  mTitleText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredTitleText;
    ::ll::TypedStorage<4, 4, int>                             mFadeInTime;
    ::ll::TypedStorage<4, 4, int>                             mStayTime;
    ::ll::TypedStorage<4, 4, int>                             mFadeOutTime;
    ::ll::TypedStorage<8, 32, ::std::string>                  mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPlatformOnlineId;
    // NOLINTEND

public:
    // prevent constructor by default
    SetTitlePacket& operator=(SetTitlePacket const&);

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
    virtual ~SetTitlePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetTitlePacket(::SetTitlePacket const&);

    MCAPI explicit SetTitlePacket(::SetTitlePacket::TitleType type);

    MCAPI SetTitlePacket(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI SetTitlePacket(
        ::SetTitlePacket::TitleType    type,
        ::std::string const&           titleText,
        ::std::optional<::std::string> filteredTitleText
    );

    MCAPI ::SetTitlePacket& operator=(::SetTitlePacket&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SetTitlePacket const&);

    MCAPI void* $ctor(::SetTitlePacket::TitleType type);

    MCAPI void* $ctor(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI void* $ctor(
        ::SetTitlePacket::TitleType    type,
        ::std::string const&           titleText,
        ::std::optional<::std::string> filteredTitleText
    );
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
