#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/SentryUploadManager.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Copyable.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class SentryUploadManagerImpl : public ::Bedrock::SentryUploadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6d8b88;
    ::ll::UntypedStorage<8, 32> mUnk747b7e;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryUploadManagerImpl& operator=(SentryUploadManagerImpl const&);
    SentryUploadManagerImpl(SentryUploadManagerImpl const&);
    SentryUploadManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::Bedrock::Copyable<::Bedrock::Result<void>>> uploadMinidump(::TaskGroup&, ::Core::Path const&, ::std::string const&) const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getMinidumpUploadUri() const /*override*/;

    // vIndex: 0
    virtual ~SentryUploadManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
