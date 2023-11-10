#include <system_error>

#include "ll/api/base/Macro.h"

namespace ll::utils::system_error {

LLNDAPI std::system_error getLastError() noexcept;
}
