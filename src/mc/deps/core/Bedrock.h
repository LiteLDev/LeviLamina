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

MCAPI ::std::string
formatTime(::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> const& unitlessTime);

MCAPI ::std::string formatTimeToFourDigits(::std::chrono::seconds duration);

MCAPI ::std::string formatTimeToFourDigits(::std::chrono::nanoseconds duration);

MCAPI void initializeGameCoreCrashProcessing();
#endif

MCAPI int strtoint32(char const* str, char** endptr, int base);

MCAPI uint strtouint32(char const* str, char** endptr, int base);
// NOLINTEND

} // namespace Bedrock
