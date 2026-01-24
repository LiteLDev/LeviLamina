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
        AuthorAndMessage(AuthorAndMessage const&) = default;
        AuthorAndMessage()                        = default;
        AuthorAndMessage(TextPacketType type, std::string const& author, std::string const& message)
        : mType(type),
          mAuthor(author),
          mMessage(message) {}

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::TextPacketPayload::AuthorAndMessage& operator=(::TextPacketPayload::AuthorAndMessage&&);

        MCAPI ::TextPacketPayload::AuthorAndMessage& operator=(::TextPacketPayload::AuthorAndMessage const&);

        MCAPI bool operator==(::TextPacketPayload::AuthorAndMessage const& other) const;

        MCAPI ~AuthorAndMessage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
        MessageAndParams(MessageAndParams const&) = default;
        MessageAndParams()                        = default;
        MessageAndParams(TextPacketType type, std::string const& message, std::vector<std::string> const& params)
        : mType(type),
          mMessage(message),
          mParams(params) {}

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::TextPacketPayload::MessageAndParams& operator=(::TextPacketPayload::MessageAndParams&&);

        MCFOLD ::TextPacketPayload::MessageAndParams& operator=(::TextPacketPayload::MessageAndParams const&);

        MCAPI bool operator==(::TextPacketPayload::MessageAndParams const& other) const;

        MCAPI ~MessageAndParams();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct MessageOnly {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 32, ::std::string>   mMessage;
        // NOLINTEND

    public:
        MessageOnly(MessageOnly const&) = default;
        MessageOnly()                   = default;
        MessageOnly(TextPacketType type, std::string const& message) : mType(type), mMessage(message) {}

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::TextPacketPayload::MessageOnly& operator=(::TextPacketPayload::MessageOnly&&);

        MCFOLD ::TextPacketPayload::MessageOnly& operator=(::TextPacketPayload::MessageOnly const&);

        MCAPI ~MessageOnly();
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
    MCAPI TextPacketPayload(::TextPacketPayload&&);

    MCAPI TextPacketPayload(::TextPacketPayload const&);

    MCAPI_C ::std::string const& getAuthorOrEmpty() const;

    MCAPI ::std::string const& getMessage() const;

    MCAPI ::TextPacketPayload& operator=(::TextPacketPayload&&);

    MCAPI ::TextPacketPayload& operator=(::TextPacketPayload const&);

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

    MCAPI static ::TextPacket createTextObjectMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string               fromXuid,
        ::std::string               fromPlatformId
    );

    MCAPI static ::TextPacket
    createTranslated(::std::string const& message, ::std::vector<::std::string> const& params);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TextPacketPayload&&);

    MCAPI void* $ctor(::TextPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
