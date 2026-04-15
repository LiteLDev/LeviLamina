#pragma once

#include <concepts>
#include <memory>
#include <string_view>

#include "ll/api/base/Macro.h"
#include "ll/api/io/LogLevel.h"

#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutput;

namespace ll {
class Error;

template <class T = void>
using Expected = ::nonstd::expected<T, ::ll::Error>;

using Unexpected = ::nonstd::unexpected_type<::ll::Error>;

class ErrorInfoBase {
    friend Error;
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ErrorInfoBase() noexcept;
    LLAPI virtual ~ErrorInfoBase();

    virtual std::string message() const noexcept { return message({}); }
    virtual std::string message(std::string_view locale) const noexcept = 0;
};
class Error {
    mutable std::unique_ptr<ErrorInfoBase> mInfo;

public:
    Error& operator=(Error&&) noexcept         = default;
    Error& operator=(Error const&) noexcept    = delete;
    [[nodiscard]] Error(Error&&) noexcept      = default;
    [[nodiscard]] Error(Error const&) noexcept = delete;

    LL_CONSTEXPR23 Error() noexcept  = default;
    LL_CONSTEXPR23 ~Error() noexcept = default;

    LL_CONSTEXPR23 Error(std::unique_ptr<ErrorInfoBase> i) noexcept : mInfo(std::move(i)) {}

    LL_CONSTEXPR23 Error(::nonstd::unexpected_type<::ll::Error> i) noexcept : Error(std::move(i.error())) {}

    LL_CONSTEXPR23 operator bool() const noexcept { return mInfo != nullptr; }

    LL_CONSTEXPR23 operator Unexpected() noexcept {
        return ::nonstd::make_unexpected<Error>(std::in_place, std::move(mInfo));
    }

    LLNDAPI std::string message() const noexcept;

    LLNDAPI std::string message(std::string_view locale) const noexcept;

    template <class T>
    LL_CONSTEXPR23 bool isA() noexcept {
        return mInfo ? typeid(T) == typeid(*mInfo) : false;
    }
    template <class T>
    LL_CONSTEXPR23 T& as() noexcept {
        return *static_cast<T*>(mInfo.get());
    }
    LLAPI Error& join(Error) noexcept;

    Error& join(Unexpected err) noexcept { return join(std::move(err.error())); }

    LLAPI Error const& log(io::Logger&, io::LogLevel = io::LogLevel::Error) const noexcept;

    LLAPI Error const& log(io::Logger&, std::string_view locale, io::LogLevel = io::LogLevel::Error) const noexcept;

    LLAPI Error const& log(CommandOutput&, CommandOutputMessageType = CommandOutputMessageType::Error) const noexcept;

    LLAPI Error const&
    log(CommandOutput&,
        std::string_view locale,
        CommandOutputMessageType = CommandOutputMessageType::Error) const noexcept;

    LLAPI Error const&
    log(brstd::function_ref<void(std::string_view msg)> out, std::string_view locale = {}) const noexcept;
};

struct StringError : ErrorInfoBase {
    std::string str;
    StringError(std::string str) : str(std::move(str)) {}
    std::string message(std::string_view) const noexcept override { return str; }
};
struct ErrorCodeError : ErrorInfoBase {
    std::error_code ec;
    ErrorCodeError(std::error_code ec) : ec(ec) {}
    std::string message(std::string_view) const noexcept override { return ec.message(); }
};
[[nodiscard]] inline Unexpected forwardError(::ll::Error& err) noexcept {
    return ::nonstd::make_unexpected(std::move(err));
}

[[nodiscard]] inline Unexpected makeSuccessed() noexcept { return ::nonstd::make_unexpected(Error{}); }

template <std::derived_from<::ll::ErrorInfoBase> T, class... Args>
[[nodiscard]] LL_CONSTEXPR23 inline Unexpected makeError(Args&&... args) noexcept {
    return ::nonstd::make_unexpected<Error>(std::in_place, std::make_unique<T>(std::forward<Args>(args)...));
}
[[nodiscard]] inline Unexpected makeStringError(std::string str) noexcept {
    return makeError<StringError>(std::move(str));
}

[[nodiscard]] inline Unexpected makeErrorCodeError(std::error_code ec) noexcept {
    return makeError<ErrorCodeError>(ec);
}

[[nodiscard]] inline Unexpected makeErrorCodeError(std::errc ec) noexcept {
    return makeError<ErrorCodeError>(make_error_code(ec));
}

LLNDAPI Unexpected makeExceptionError(std::exception_ptr const& exc = std::current_exception()) noexcept;

} // namespace ll

namespace nonstd::expected_lite {
template <>
class bad_expected_access<::ll::Error> : public bad_expected_access<void> {
    std::shared_ptr<::ll::Error> mError;
    std::string                  mMessage;

public:
    explicit bad_expected_access(::ll::Error& e) noexcept
    : mError(::std::make_shared<::ll::Error>(::std::move(e))),
      mMessage(mError->message()) {}

    char const* what() const noexcept override { return mMessage.c_str(); }

    ::ll::Error& error() & { return *mError; }

    ::ll::Error const& error() const& { return *mError; }

    ::ll::Error&& error() && { return ::std::move(*mError); }

    ::ll::Error const&& error() const&& { return ::std::move(*mError); }
};
template <>
struct error_traits<::ll::Error> {
    static void rethrow(::ll::Error const& e) { throw bad_expected_access<::ll::Error>{const_cast<::ll::Error&>(e)}; }
};
} // namespace nonstd::expected_lite
