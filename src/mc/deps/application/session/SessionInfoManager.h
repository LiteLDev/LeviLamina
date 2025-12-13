#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class SessionInfoManagerImpl; }
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock {

class SessionInfoManager : public ::Bedrock::EnableNonOwnerReferences,
                           public ::Bedrock::ImplBase<::Bedrock::SessionInfoManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() = 0;

    virtual void beginNewSession() = 0;

    virtual ::std::shared_ptr<::Bedrock::SessionInfo const> getCurrentSession() const = 0;

    virtual ::Bedrock::AccessUpdateEditor<
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
    editCurrentSession() = 0;

    virtual ::Bedrock::PubSub::Connector<void(
        ::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&,
        ::std::shared_ptr<::Bedrock::SessionInfo const> const&
    )>&
    onCurrentSessionChanged() = 0;

    virtual ::std::string serializeSession(::Bedrock::SessionInfo const&) const = 0;

    virtual ::std::shared_ptr<::Bedrock::SessionInfo> deserializeSession(::std::string_view) const = 0;

    virtual ~SessionInfoManager() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
