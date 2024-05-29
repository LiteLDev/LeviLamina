#pragma once

#pragma warning(push)
#pragma warning(disable : 4702)
#include "nonstd/expected.hpp"
#pragma warning(pop)

#include <concepts>
#include <memory>
#include <string_view>

class CommandOutput;

namespace ll {
class OutputStream;
class Error;
class ErrorInfoBase {
    friend Error;
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ErrorInfoBase() noexcept;
    LLAPI virtual ~ErrorInfoBase();

    virtual std::string message() const noexcept = 0;
};
class Error {
    std::shared_ptr<ErrorInfoBase> mInfo;

public:
    Error& operator=(Error&&) noexcept         = default;
    Error& operator=(Error const&) noexcept    = default;
    [[nodiscard]] Error(Error&&) noexcept      = default;
    [[nodiscard]] Error(Error const&) noexcept = default;

    Error() noexcept  = default;
    ~Error() noexcept = default;

    Error(std::shared_ptr<ErrorInfoBase> i) noexcept : mInfo(std::move(i)) {}

    Error(::nonstd::unexpected_type<::ll::Error> i) noexcept : Error(std::move(i.value())) {}

    operator bool() const noexcept { return mInfo != nullptr; }

    LLNDAPI std::string message() const noexcept;

    template <class T>
    bool isA() noexcept {
        return mInfo ? typeid(T) == typeid(*mInfo) : false;
    }
    template <class T>
    auto as() noexcept {
        return std::static_pointer_cast<T>(mInfo);
    }
    LLAPI Error& join(Error) noexcept;

    LLAPI Error& log(::ll::OutputStream&) noexcept;

    LLAPI Error& log(CommandOutput&) noexcept;

    Error const& log(::ll::OutputStream& s) const noexcept { return const_cast<Error*>(this)->log(s); }

    Error const& log(CommandOutput& s) const noexcept { return const_cast<Error*>(this)->log(s); }
};

template <class T = void>
using Expected = ::nonstd::expected<T, ::ll::Error>;

using Unexpected = ::nonstd::unexpected_type<::ll::Error>;

struct StringError : ErrorInfoBase {
    std::string str;
    StringError(std::string str) : str(std::move(str)) {}
    std::string message() const noexcept override { return str; }
};
struct CStringError : ErrorInfoBase {
    char const* cstr;
    CStringError(char const* cstr) : cstr(cstr) {}
    std::string message() const noexcept override { return cstr; }
};
struct ErrorCodeError : ErrorInfoBase {
    std::error_code ec;
    ErrorCodeError(std::error_code ec) : ec(ec) {}
    std::string message() const noexcept override { return ec.message(); }
};
inline Unexpected forwardError(::ll::Error& err) noexcept { return ::nonstd::make_unexpected(std::move(err)); }

inline Unexpected makeSuccessError() noexcept { return ::nonstd::make_unexpected(Error{}); }

template <std::derived_from<::ll::ErrorInfoBase> T, class... Args>
inline Unexpected makeError(Args&&... args) noexcept {
    return ::nonstd::make_unexpected(::ll::Error{std::make_shared<T>(std::forward<Args>(args)...)});
}
inline Unexpected makeStringError(std::string str) noexcept { return makeError<StringError>(std::move(str)); }

inline Unexpected makeStringError(char const* cstr) noexcept { return makeError<CStringError>(cstr); }

inline Unexpected makeErrorCodeError(std::error_code ec) noexcept { return makeError<ErrorCodeError>(ec); }

inline Unexpected makeErrorCodeError(std::errc ec) noexcept { return makeError<ErrorCodeError>(make_error_code(ec)); }

LLNDAPI Unexpected makeExceptionError(std::exception_ptr const& exc = std::current_exception()) noexcept;

} // namespace ll

namespace nonstd::expected_lite {
template <>
class bad_expected_access<::ll::Error> : public bad_expected_access<void> {
    ::ll::Error mError;
    std::string mMessage;

public:
    explicit bad_expected_access(::ll::Error const& e) noexcept : mError(e), mMessage(mError.message()) {}

    char const* what() const noexcept override { return mMessage.c_str(); }

    constexpr ::ll::Error& error() & { return mError; }

    constexpr ::ll::Error const& error() const& { return mError; }

    constexpr ::ll::Error&& error() && { return ::std::move(mError); }

    constexpr ::ll::Error const&& error() const&& { return ::std::move(mError); }
};
} // namespace nonstd::expected_lite
