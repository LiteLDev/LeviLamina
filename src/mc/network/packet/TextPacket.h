#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/TextPacketType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class ResolvedTextObject;
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

class TextPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::TextPacketType>                mType;
    ::ll::TypedStorage<8, 32, ::std::string>                  mAuthor;
    ::ll::TypedStorage<8, 32, ::std::string>                  mMessage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredMessage;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   params;
    ::ll::TypedStorage<1, 1, bool>                            mLocalize;
    ::ll::TypedStorage<8, 32, ::std::string>                  mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPlatformId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextPacket();

    MCAPI TextPacket(
        ::TextPacketType                    type,
        ::std::string const&                author,
        ::std::string const&                message,
        ::std::optional<::std::string>      filteredMessage,
        ::std::vector<::std::string> const& params,
        bool                                localize_,
        ::std::string const&                xuid,
        ::std::string const&                platformId
    );

    MCAPI ::TextPacket& operator=(::TextPacket const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool const _shouldHandleTextPacketForPlayer(
        ::PlayerCapabilities::IPlayerData&             playerData,
        ::PlayerCapabilities::ISharedController const& sharedController
    );

    MCAPI static ::TextPacket createAnnouncement(
        ::std::string const&           author,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           xuid,
        ::std::string const&           platformId
    );

    MCAPI static ::TextPacket createChat(
        ::std::string const&           author,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           xuid,
        ::std::string const&           platformId
    );

    MCAPI static ::TextPacket
    createJukeboxPopup(::std::string const& message, ::std::vector<::std::string> const& params);

    MCAPI static ::TextPacket createRawJsonObjectMessage(::std::string const& rawJson);

    MCAPI static ::TextPacket createSystemMessage(::std::string const& message);

    MCAPI static ::TextPacket createTextObjectMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string               fromXuid,
        ::std::string               fromPlatformId
    );

    MCAPI static ::TextPacket createTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI static ::TextPacket createTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCAPI static ::TextPacket
    createTranslated(::std::string const& message, ::std::vector<::std::string> const& params);

    MCAPI static ::TextPacket createTranslatedAnnouncement(
        ::std::string const& author,
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI static ::TextPacket createWhisper(
        ::std::string const&           author,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           xuid,
        ::std::string const&           platformId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::TextPacketType                    type,
        ::std::string const&                author,
        ::std::string const&                message,
        ::std::optional<::std::string>      filteredMessage,
        ::std::vector<::std::string> const& params,
        bool                                localize_,
        ::std::string const&                xuid,
        ::std::string const&                platformId
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
