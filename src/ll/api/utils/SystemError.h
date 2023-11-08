#include "ll/api/base/Macro.h"
#include <system_error>

namespace ll::utils::syserr_utils {
LLNDAPI std::system_error getLastError() noexcept;
}
