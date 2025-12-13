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
    ::ll::UntypedStorage<8, 128> mUnk35cbdc;
    ::ll::UntypedStorage<8, 80>  mUnkab0304;
    ::ll::UntypedStorage<8, 16>  mUnkc9cc48;
    ::ll::UntypedStorage<8, 120> mUnk1c9ab3;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionInfoManagerImpl& operator=(SessionInfoManagerImpl const&);
    SessionInfoManagerImpl(SessionInfoManagerImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() /*override*/;

    virtual void beginNewSession() /*override*/;

    virtual ::std::shared_ptr<::Bedrock::SessionInfo const> getCurrentSession() const /*override*/;

    virtual ::Bedrock::AccessUpdateEditor<
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
    editCurrentSession() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(
        ::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&,
        ::std::shared_ptr<::Bedrock::SessionInfo const> const&
    )>&
    onCurrentSessionChanged() /*override*/;

    virtual ::std::string serializeSession(::Bedrock::SessionInfo const& session) const /*override*/;

    virtual ::std::shared_ptr<::Bedrock::SessionInfo> deserializeSession(::std::string_view contents) const
        /*override*/;

    virtual ~SessionInfoManagerImpl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SessionInfoManagerImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $beginNewSession();

    MCNAPI ::std::shared_ptr<::Bedrock::SessionInfo const> $getCurrentSession() const;

    MCNAPI ::Bedrock::AccessUpdateEditor<
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
    $editCurrentSession();

    MCNAPI ::Bedrock::PubSub::Connector<void(
        ::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&,
        ::std::shared_ptr<::Bedrock::SessionInfo const> const&
    )>&
    $onCurrentSessionChanged();

    MCNAPI ::std::string $serializeSession(::Bedrock::SessionInfo const& session) const;

    MCNAPI ::std::shared_ptr<::Bedrock::SessionInfo> $deserializeSession(::std::string_view contents) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForImplBase();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Bedrock
