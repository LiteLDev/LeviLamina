#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TextPacketType.h"

// auto generated forward declare list
// clang-format off
class ResolvedTextObject;
class TextPacket;
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
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
        AuthorAndMessage()                                   = default;
        AuthorAndMessage(TextPacketType type, std::string const& author, std::string const& message)
        : mType(type),
          mAuthor(author),
          mMessage(message) {}

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AuthorAndMessage(::TextPacketPayload::AuthorAndMessage const&);

        MCAPI ::TextPacketPayload::AuthorAndMessage& operator=(::TextPacketPayload::AuthorAndMessage&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::TextPacketPayload::AuthorAndMessage const&);
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
        MessageAndParams& operator=(MessageAndParams const&) = default;
        MessageAndParams()                                   = default;
        MessageAndParams(TextPacketType type, std::string const& message, std::vector<std::string> const& params)
        : mType(type),
          mMessage(message),
          mParams(params) {}

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI MessageAndParams(::TextPacketPayload::MessageAndParams const&);

        MCAPI bool operator==(::TextPacketPayload::MessageAndParams const& other) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::TextPacketPayload::MessageAndParams const&);
        // NOLINTEND
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
    TextPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextPacketPayload(::TextPacketPayload const&);

    MCAPI ::std::string const& getAuthorOrEmpty() const;

    MCAPI ::std::string const& getMessage() const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::std::string> const& getParams() const;
#endif

    MCAPI ::TextPacketType getType() const;

    MCAPI ::TextPacketPayload& operator=(::TextPacketPayload&&);

    MCAPI ::TextPacketPayload& operator=(::TextPacketPayload const&);

    MCAPI ~TextPacketPayload();
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TextPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
