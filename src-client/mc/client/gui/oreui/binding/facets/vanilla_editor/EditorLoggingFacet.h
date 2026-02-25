#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
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

class EditorLoggingFacet : public ::OreUI::FacetBase<::OreUI::EditorLoggingFacet> {
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
        // prevent constructor by default
        LogMessage& operator=(LogMessage const&);
        LogMessage(LogMessage const&);
        LogMessage();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::string const& getContentMessage() const;

        MCFOLD ::Editor::LogContext getLogContext() const;

        MCFOLD ::Editor::LogLevel getLogLevel() const;

        MCAPI ::std::string getTagListString() const;

        MCFOLD ::std::string const& getTimeStamp() const;

        MCFOLD ::OreUI::EditorLoggingFacet::LogMessage& operator=(::OreUI::EditorLoggingFacet::LogMessage&&);

        MCAPI ~LogMessage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~LogNotification();
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
    virtual ~EditorLoggingFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorLoggingFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI bool _addMessage(::Editor::LogMessage const& message);

    MCAPI void _handleGraphicSettingsChanged(::Editor::Settings::GraphicsProps const& graphicProp);

    MCAPI void _handleNewLogMessage(::Editor::LogMessage const& message);

    MCAPI void _handleScriptReload(::Editor::Network::ServerScriptTeardownRebuildPayload const& payload);

    MCAPI void _refreshLogMessages();

    MCAPI bool _shouldFilterMessage(::Editor::LogMessage const& message);

    MCAPI ::std::optional<::OreUI::EditorLoggingFacet::LogNotification> acquireNotification();

    MCAPI void flush();

    MCFOLD ::Editor::LogLevelFilter getLogLevelFilter() const;

    MCFOLD ::std::vector<::OreUI::EditorLoggingFacet::LogMessage> const& getMessages() const;

    MCFOLD uint64 const getNotificationQueueCount() const;

    MCAPI bool getNotificationsEnabled() const;

    MCFOLD ::HashedString const& getTagFilter() const;

    MCFOLD ::std::vector<::HashedString> const& getTagList() const;

    MCAPI void setLogLevelFilter(::Editor::LogLevelFilter filter);

    MCAPI void setNotificationsEnabled(bool isEnabled);

    MCAPI void setTagFilter(::HashedString const& filter);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
