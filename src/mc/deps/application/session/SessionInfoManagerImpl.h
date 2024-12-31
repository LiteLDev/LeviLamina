#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/session/SessionInfoManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock {

class SessionInfoManagerImpl : public ::Bedrock::SessionInfoManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk76644a;
    ::ll::UntypedStorage<8, 128> mUnk6a2f7c;
    ::ll::UntypedStorage<8, 80>  mUnkab0304;
    ::ll::UntypedStorage<8, 16>  mUnkc9cc48;
    ::ll::UntypedStorage<8, 168> mUnk1c9ab3;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionInfoManagerImpl& operator=(SessionInfoManagerImpl const&);
    SessionInfoManagerImpl(SessionInfoManagerImpl const&);
    SessionInfoManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize() /*override*/;

    // vIndex: 2
    virtual void beginNewSession() /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::SessionInfo const> getCurrentSession() const /*override*/;

    // vIndex: 4
    virtual ::Bedrock::AccessUpdateEditor<
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
    editCurrentSession() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<
        void(::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&, ::std::shared_ptr<::Bedrock::SessionInfo const> const&)>&
    onCurrentSessionChanged() /*override*/;

    // vIndex: 6
    virtual ::std::string serializeSession(::Bedrock::SessionInfo const&) const /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::Bedrock::SessionInfo> deserializeSession(::std::string_view) const /*override*/;

    // vIndex: 0
    virtual ~SessionInfoManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
