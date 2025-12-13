#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
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

class SentryUploadManager : public ::Bedrock::EnableNonOwnerReferences,
                            public ::Bedrock::ImplBase<::Bedrock::SentryUploadManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::Copyable<::Bedrock::Result<void>>>
    uploadMinidump(::TaskGroup&, ::Core::Path const&, ::std::string const&) const = 0;

    virtual ::std::string const& getMinidumpUploadUri() const = 0;

    virtual ~SentryUploadManager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
