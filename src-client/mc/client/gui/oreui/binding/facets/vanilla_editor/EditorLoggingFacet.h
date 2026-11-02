#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/editor/logging/LogContext.h"
#include "mc/editor/logging/LogLevel.h"
#include "mc/editor/logging/LogLevelFilter.h"
#include "mc/editor/logging/LogMessage.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Editor::Network { class ServerScriptTeardownRebuildPayload; }
namespace Editor::Settings { struct GraphicsProps; }
// clang-format on

namespace OreUI {

class EditorLoggingFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorLoggingFacet> {
public:
    // EditorLoggingFacet inner types declare
    // clang-format off
    struct LogMessage;
    struct LogNotification;
    // clang-format on

    // EditorLoggingFacet inner types define
    struct LogMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 224, ::Editor::LogMessage> mLogMessage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::string const& getContentMessage() const;

        MCNAPI ::Editor::LogContext getLogContext() const;

        MCNAPI ::Editor::LogLevel getLogLevel() const;

        MCNAPI ::std::string getTagListString() const;

        MCNAPI ::std::string const& getTimeStamp() const;
        // NOLINTEND
    };

    struct LogNotification {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                  mMessage;
        ::ll::TypedStorage<1, 1, ::Editor::LogLevel>              mLevel;
        ::ll::TypedStorage<1, 1, ::Editor::LogContext>            mContext;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSubMessage;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>       mClient;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::EditorLoggingFacet::LogMessage>> mMessageList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mLogMessageSub;
    ::ll::TypedStorage<4, 4, ::Editor::LogLevelFilter>                                mLevelFilter;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mTagFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                          mTagList;
    ::ll::TypedStorage<1, 1, bool>                                                    mDirty;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<
            ::OreUI::EditorLoggingFacet::LogNotification,
            ::std::deque<::OreUI::EditorLoggingFacet::LogNotification>>>
                                                               mNotificationQueue;
    ::ll::TypedStorage<1, 1, bool>                             mNotificationEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mNotificationSettingEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGraphicSettingsChangedEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mReloadScriptEventSub;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorLoggingFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorLoggingFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorLoggingFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCNAPI void _handleGraphicSettingsChanged(::Editor::Settings::GraphicsProps const& graphicProp);

    MCNAPI void _handleNewLogMessage(::Editor::LogMessage const& message);

    MCNAPI void _handleScriptReload(::Editor::Network::ServerScriptTeardownRebuildPayload const& payload);

    MCNAPI void _refreshLogMessages();

    MCNAPI bool _shouldFilterMessage(::Editor::LogMessage const& message);

    MCNAPI ::std::optional<::OreUI::EditorLoggingFacet::LogNotification> acquireNotification();

    MCNAPI void flush();

    MCNAPI ::Editor::LogLevelFilter getLogLevelFilter() const;

    MCNAPI ::std::vector<::OreUI::EditorLoggingFacet::LogMessage> const& getMessages() const;

    MCNAPI uint64 const getNotificationQueueCount() const;

    MCNAPI bool getNotificationsEnabled() const;

    MCNAPI ::HashedString const& getTagFilter() const;

    MCNAPI ::std::vector<::HashedString> const& getTagList() const;

    MCNAPI void setLogLevelFilter(::Editor::LogLevelFilter filter);

    MCNAPI void setNotificationsEnabled(bool isEnabled);

    MCNAPI void setTagFilter(::HashedString const& filter);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
