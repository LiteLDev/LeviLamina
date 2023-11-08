#include "ll/api/utils/SystemError.h"
#include "errhandlingapi.h"
#include "ll/api/base/StdInt.h"

namespace ll::utils::syserr_utils {
std::system_error getLastError() noexcept { return {(int)GetLastError(), std::system_category()}; }
} // namespace ll::utils::syserr_utils
