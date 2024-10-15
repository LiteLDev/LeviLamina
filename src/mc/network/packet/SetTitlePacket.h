#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SetTitlePacket : public ::Packet {
public:
    // SetTitlePacket inner types define
    enum class TitleType : int {
        Clear               = 0x0,
        Reset               = 0x1,
        Title               = 0x2,
        Subtitle            = 0x3,
        Actionbar           = 0x4,
        Times               = 0x5,
        TitleTextObject     = 0x6,
        SubtitleTextObject  = 0x7,
        ActionbarTextObject = 0x8,
    };

public:
    TitleType   mType;             // this+0x30
    std::string mTitleText;        // this+0x38
    int         mFadeInTime;       // this+0x58
    int         mStayTime;         // this+0x5C
    int         mFadeOutTime;      // this+0x60
    std::string mXuid;             // this+0x68
    std::string mPlatformOnlineId; // this+0x88

    // prevent constructor by default
    SetTitlePacket& operator=(SetTitlePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetTitlePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetTitlePacket();

    MCAPI SetTitlePacket(class SetTitlePacket const&);

    MCAPI explicit SetTitlePacket(::SetTitlePacket::TitleType type);

    MCAPI SetTitlePacket(::SetTitlePacket::TitleType type, class ResolvedTextObject const& resolvedTextObject);

    MCAPI SetTitlePacket(::SetTitlePacket::TitleType type, std::string const& titleText);

    MCAPI SetTitlePacket(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI class SetTitlePacket& operator=(class SetTitlePacket&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(::SetTitlePacket::TitleType type);

    MCAPI void* ctor$(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI void* ctor$(::SetTitlePacket::TitleType type, class ResolvedTextObject const& resolvedTextObject);

    MCAPI void* ctor$(class SetTitlePacket const&);

    MCAPI void* ctor$(::SetTitlePacket::TitleType type, std::string const& titleText);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
