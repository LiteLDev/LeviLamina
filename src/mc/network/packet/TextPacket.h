#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/TextPacketType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class ResolvedTextObject;
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
    // prevent constructor by default
    TextPacket(TextPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

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

    MCAPI_C static ::TextPacket createRaw(::std::string const& raw);

    MCAPI static ::TextPacket createRawJsonObjectMessage(::std::string const& rawJson);

    MCAPI static ::TextPacket createSystemMessage(::std::string const& message);

    MCAPI static ::TextPacket createTextObjectMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string               fromXuid,
        ::std::string               fromPlatformId
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

    MCAPI static ::TextPacket createTranslatedChat(
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
    MCFOLD ::MinecraftPacketIds $getId() const;

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
