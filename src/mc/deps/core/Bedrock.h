#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Bedrock { class DeviceIdManager; }
class HIDControllerGameCoreDesktop;
// clang-format on

namespace Bedrock {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::Bedrock::DeviceIdManager> _createDefaultDeviceIdManager();

#ifdef LL_PLAT_C
MCAPI ::std::unique_ptr<::HIDControllerGameCoreDesktop> _createHIDController(
    ::HWND__* hwnd,
    ::std::queue<
        ::brstd::move_only_function<void(::IMinecraftEventing*)>,
        ::std::deque<::brstd::move_only_function<void(::IMinecraftEventing*)>>>& events
);

MCAPI void fileNameToSessionID(::std::string& out, ::Core::PathBuffer<::std::string> const& filePath);
#endif

#ifdef LL_PLAT_S
MCAPI int strtoint32(char const* str, char** endptr, int base);
#endif

MCAPI void throw_system_error(::std::errc errc);
// NOLINTEND

} // namespace Bedrock
