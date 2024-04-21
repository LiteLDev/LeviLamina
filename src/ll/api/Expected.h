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
    LLAPI ErrorInfoBase();
    LLAPI virtual ~ErrorInfoBase();

    virtual std::string message() const = 0;
};
class Error {
    std::shared_ptr<ErrorInfoBase> mInfo;

public:
    Error& operator=(Error&&) noexcept         = default;
    Error& operator=(Error const&) noexcept    = default;
    [[nodiscard]] Error(Error&&) noexcept      = default;
    [[nodiscard]] Error(Error const&) noexcept = default;

    Error() noexcept = default;
    ~Error()         = default;

    Error(std::shared_ptr<ErrorInfoBase> i) : mInfo(std::move(i)) {}

    Error(::nonstd::unexpected_type<::ll::Error> i) : Error(std::move(i.value())) {}

    operator bool() const { return mInfo != nullptr; }

    LLNDAPI std::string message() const;

    template <class T>
    bool isA() {
        return mInfo ? typeid(T) == typeid(*mInfo) : false;
    }
    template <class T>
    auto as() {
        return std::static_pointer_cast<T>(mInfo);
    }
    LLAPI Error& join(Error);

    LLAPI Error& log(::ll::OutputStream&);

    LLAPI Error& log(CommandOutput&);

    Error const& log(::ll::OutputStream& s) const { return const_cast<Error*>(this)->log(s); }

    Error const& log(CommandOutput& s) const { return const_cast<Error*>(this)->log(s); }
};

template <class T = void>
using Expected = ::nonstd::expected<T, ::ll::Error>;

using Unexpected = ::nonstd::unexpected_type<::ll::Error>;

struct StringError : ErrorInfoBase {
    std::string str;
    StringError(std::string str) : str(std::move(str)) {}
    std::string message() const override { return str; }
};
struct CStringError : ErrorInfoBase {
    char const* cstr;
    CStringError(char const* cstr) : cstr(cstr) {}
    std::string message() const override { return cstr; }
};
struct ErrorCodeError : ErrorInfoBase {
    std::error_code ec;
    ErrorCodeError(std::error_code ec) : ec(ec) {}
    std::string message() const override { return ec.message(); }
};
inline Unexpected forwardError(::ll::Error& err) { return ::nonstd::make_unexpected(std::move(err)); }

inline Unexpected makeSuccessError() { return ::nonstd::make_unexpected(Error{}); }

template <std::derived_from<::ll::ErrorInfoBase> T, class... Args>
inline Unexpected makeError(Args&&... args) {
    return ::nonstd::make_unexpected(::ll::Error{std::make_shared<T>(std::forward<Args>(args)...)});
}
inline Unexpected makeStringError(std::string str) { return makeError<StringError>(std::move(str)); }

inline Unexpected makeStringError(char const* cstr) { return makeError<CStringError>(cstr); }

inline Unexpected makeErrorCodeError(std::error_code ec) { return makeError<ErrorCodeError>(ec); }

inline Unexpected makeErrorCodeError(std::errc ec) { return makeError<ErrorCodeError>(make_error_code(ec)); }

LLNDAPI Unexpected makeExceptionError(std::exception_ptr const& exc = std::current_exception());

} // namespace ll

namespace nonstd::expected_lite {
template <>
class bad_expected_access<::ll::Error> : public std::exception {
public:
    explicit bad_expected_access(::ll::Error const& e) : std::exception(e.message().c_str()) {}
};
} // namespace nonstd::expected_lite
