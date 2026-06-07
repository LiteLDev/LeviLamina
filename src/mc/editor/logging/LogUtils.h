#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/LogChannel.h"
#include "mc/editor/logging/LogContext.h"
#include "mc/editor/logging/LogLevel.h"
#include "mc/editor/logging/LogLevelFilter.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Player;
namespace Editor { class LogMessage; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct LogContent; }
// clang-format on

namespace Editor {

class LogUtils {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::string getTimeStamp();
#endif

    MCNAPI static void
    log(::Player&                                           player,
        ::Editor::LogLevel                                  level,
        ::std::vector<::HashedString>&&                     tags,
        ::std::variant<::std::string, ::Editor::LogContent> content,
        ::Editor::LogChannel                                channelMask);

    MCNAPI static void
    log(::Editor::ServiceProviderCollection&                providers,
        ::Editor::LogContext                                context,
        ::Editor::LogLevel                                  level,
        ::std::vector<::HashedString>&&                     tags,
        ::std::variant<::std::string, ::Editor::LogContent> content,
        ::Editor::LogChannel                                channelMask);

    MCNAPI static void queueToast(
        ::Editor::ServiceProviderCollection& providers,
        ::Editor::LogContext                 context,
        ::Editor::LogLevel                   level,
        ::Editor::LogContent                 content
    );

#ifdef LL_PLAT_C
    MCNAPI static bool shouldFilterMessage(
        ::Editor::LogMessage const&          message,
        ::Editor::LogLevelFilter             levelFilter,
        ::std::vector<::HashedString> const& expectedTags
    );
#endif
    // NOLINTEND
};

} // namespace Editor
