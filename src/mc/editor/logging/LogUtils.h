#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // prevent constructor by default
    LogUtils& operator=(LogUtils const&);
    LogUtils(LogUtils const&);
    LogUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _log(
        ::Editor::ServiceProviderCollection& providers,
        ::Editor::LogContext                 context,
        ::Editor::LogLevel                   level,
        ::std::vector<::HashedString>&&      tags,
        ::std::string&&                      message
    );
    // NOLINTEND
};

} // namespace Editor
