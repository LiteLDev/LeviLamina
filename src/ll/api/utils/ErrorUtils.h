#pragma once

#include <system_error>
#include <typeinfo>

#include "ll/api/base/CompilerPredefine.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/utils/StacktraceUtils.h"

#include "ll/api/io/LogLevel.h"

#include "mc/deps/core/utility/optional_ref.h"

namespace ll::inline utils::error_utils {

class AnyExceptionRef {
    void* impl;

    LLAPI void* typeCast(std::type_info const&) const;

public:
    LLNDAPI AnyExceptionRef(std::exception_ptr const& ptr);
    LLAPI ~AnyExceptionRef();

    AnyExceptionRef(AnyExceptionRef&&)                 = delete;
    AnyExceptionRef(AnyExceptionRef const&)            = delete;
    AnyExceptionRef& operator=(AnyExceptionRef&&)      = delete;
    AnyExceptionRef& operator=(AnyExceptionRef const&) = delete;

    template <class T>
    [[nodiscard]] optional_ref<T> tryGet() const {
        return reinterpret_cast<T*>(typeCast(typeid(T)));
    }
};

LLNDAPI std::system_error getLastSystemError() noexcept;

LLNDAPI std::exception_ptr createExceptionPtr(void*) noexcept;

LLNDAPI Stacktrace stacktraceFromCurrentException(size_t skip = 0, size_t maxDepth = ~0ull);

LLNDAPI std::string makeExceptionString(std::exception_ptr ePtr) noexcept;

LLAPI void printCurrentException(
    io::Logger&  logger,
    io::LogLevel level        = io::LogLevel::Error,
    std::exception_ptr const& = std::current_exception()
) noexcept;

template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(T const& e, io::Logger& logger, io::LogLevel level = io::LogLevel::Error) noexcept {
    printCurrentException(logger, level, std::make_exception_ptr(e));
}
} // namespace ll::inline utils::error_utils
