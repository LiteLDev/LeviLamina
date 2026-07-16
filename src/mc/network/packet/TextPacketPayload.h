#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TextPacketType.h"

// auto generated forward declare list
// clang-format off
class ResolvedTextObject;
class TextPacket;
// clang-format on

struct TextPacketPayload {
public:
    // TextPacketPayload inner types declare
    // clang-format off
    struct AuthorAndMessage;
    struct MessageAndParams;
    struct MessageOnly;
    // clang-format on

    // TextPacketPayload inner types define
    struct AuthorAndMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 32, ::std::string>   mAuthor;
        ::ll::TypedStorage<8, 32, ::std::string>   mMessage;
        // NOLINTEND

    public:
        AuthorAndMessage& operator=(AuthorAndMessage const&) = default;
        AuthorAndMessage(AuthorAndMessage const&)            = default;
        AuthorAndMessage()                                   = default;
        AuthorAndMessage(TextPacketType type, std::string const& author, std::string const& message)
        : mType(type),
          mAuthor(author),
          mMessage(message) {}

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::TextPacketPayload::AuthorAndMessage& operator=(::TextPacketPayload::AuthorAndMessage&&);
        // NOLINTEND
    };

    struct MessageAndParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType>              mType;
        ::ll::TypedStorage<8, 32, ::std::string>                mMessage;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mParams;
        // NOLINTEND

    public:
        MessageAndParams(TextPacketType type, std::string const& message, std::vector<std::string> const& params)
        : mType(type),
          mMessage(message),
          mParams(params) {}
    };

    struct MessageOnly {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 32, ::std::string>   mMessage;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mLocalize;
    ::ll::TypedStorage<8, 32, ::std::string>                  mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPlatformId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredMessage;
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::TextPacketPayload::MessageOnly,
            ::TextPacketPayload::AuthorAndMessage,
            ::TextPacketPayload::MessageAndParams>>
        mBody;
    // NOLINTEND

public:
    // prevent constructor by default
    TextPacketPayload& operator=(TextPacketPayload const&);
    TextPacketPayload(TextPacketPayload const&);
    TextPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TextPacketPayload& operator=(::TextPacketPayload&&);

    MCAPI ~TextPacketPayload();
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

#ifdef LL_PLAT_C
    MCAPI static ::TextPacket createRaw(::std::string const& raw);
#endif

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
