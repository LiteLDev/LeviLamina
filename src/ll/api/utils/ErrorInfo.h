#pragma once

#include <system_error>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll {
class Logger;
}

namespace ll::utils::error_info {

class seh_exception : public std::system_error {
public:
    void* expPtr;

    LLNDAPI seh_exception(uint ntStatus, void* expPtr);
};

inline void TranslateSEHtoCE(uint ntStatus, struct _EXCEPTION_POINTERS* expPtr) {
    throw seh_exception(ntStatus, expPtr);
}

LLNDAPI std::error_category const& u8system_category() noexcept;

LLNDAPI std::error_category const& ntstatus_category() noexcept;

LLNDAPI std::system_error getLastWinError() noexcept;

LLNDAPI std::string makeExceptionString(std::exception_ptr eptr);

LLNDAPI void printCurrentException(
    optional_ref<ll::Logger>  = nullptr,
    std::exception_ptr const& = std::current_exception()
) noexcept;

template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(T const& e, optional_ref<ll::Logger> l = nullptr) noexcept {
    printCurrentException(l, std::make_exception_ptr(e));
}

} // namespace ll::utils::error_info
