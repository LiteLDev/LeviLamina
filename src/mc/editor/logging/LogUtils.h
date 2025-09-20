#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/LogChannel.h"
#include "mc/editor/logging/LogContext.h"
#include "mc/editor/logging/LogLevel.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class LogUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    log(::Editor::ServiceProviderCollection&  providers,
        ::Editor::LogContext                  context,
        ::Editor::LogLevel                    level,
        ::std::vector<::HashedString>&&       tags,
        ::std::string                         message,
        ::std::optional<::Editor::LogChannel> channelMask,
        ::std::optional<::std::string>        subMessage);
    // NOLINTEND
};

} // namespace Editor
