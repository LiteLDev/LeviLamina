#include "ll/api/Expected.h"
#include "ll/api/Logger.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "mc/server/commands/CommandOutput.h"

#ifdef LL_DEBUG
#include "ll/api/utils/StacktraceUtils.h"
#endif

namespace ll {
#if defined(LL_DEBUG) && _HAS_CXX23
struct ErrorInfoBase::Impl {
    std::stacktrace stacktrace = std::stacktrace::current(1);
};
ErrorInfoBase::ErrorInfoBase() noexcept : impl(std::make_unique<Impl>()) {}
std::string Error::message() const noexcept {
    if (!mInfo) {
        return "success";
    }
    auto res  = mInfo->message();
    res      += "\nexpected stacktrace:\n";
    res      += stacktrace_utils::toString(mInfo->impl->stacktrace);
    return res;
}

struct ExceptionError : ErrorInfoBase {
    std::exception_ptr exc;
    std::stacktrace    stacktrace;
    ExceptionError(std::exception_ptr const& exc) noexcept
    : exc(exc),
      stacktrace(error_utils::stacktraceFromCurrExc()) {}
    std::string message() const noexcept override {
        auto res = error_utils::makeExceptionString(exc);
        if (!stacktrace.empty()) {
            res += "\nexception stacktrace:\n";
            res += stacktrace_utils::toString(stacktrace);
        }
        return res;
    }
};
#else
struct ErrorInfoBase::Impl {};
ErrorInfoBase::ErrorInfoBase() noexcept {}
std::string Error::message() const noexcept { return mInfo ? mInfo->message() : "success"; }

struct ExceptionError : ErrorInfoBase {
    std::exception_ptr exc;
    ExceptionError(std::exception_ptr const& exc) noexcept : exc(exc) {}
    std::string message() const noexcept override { return error_utils::makeExceptionString(exc); }
};
#endif

ErrorInfoBase::~ErrorInfoBase() = default;

Unexpected makeExceptionError(std::exception_ptr const& exc) noexcept {
    auto err = error_utils::UntypedExceptionRef(exc).tryGet<nonstd::bad_expected_access<Error>>();
    if (err) {
        return forwardError(err->error());
    }
    return makeError<ExceptionError>(exc);
}

struct ErrorList : ErrorInfoBase {
    std::vector<std::shared_ptr<ErrorInfoBase>> errors;
    ErrorList() noexcept {}
    std::string message() const noexcept override {
        std::string result;

        for (size_t i = 0; i < errors.size(); i++) {
            result += errors[i]->message();
            if (i + 1 < errors.size()) {
                result += '\n';
            }
        }
        return result;
    }
};

Error& Error::join(Error err) noexcept {
    if (!*this) {
        mInfo = std::move(err.mInfo);
        return *this;
    }
    if (!err) {
        return *this;
    }
    if (isA<ErrorList>()) {
        if (err.isA<ErrorList>()) {
            as<ErrorList>()->errors.append_range(std::move(err.as<ErrorList>()->errors));
        } else {
            as<ErrorList>()->errors.emplace_back(std::move(err.mInfo));
        }
    } else {
        if (err.isA<ErrorList>()) {
            auto ptr = err.as<ErrorList>();
            ptr->errors.insert(ptr->errors.begin(), std::move(mInfo));
            mInfo = std::move(err.mInfo);
        } else {
            auto list = std::make_shared<ErrorList>();
            list->errors.emplace_back(std::move(mInfo));
            list->errors.emplace_back(std::move(err.mInfo));
            mInfo = std::move(list);
        }
    }
    return *this;
}
LLAPI Error& Error::log(::ll::OutputStream& stream) noexcept {
    auto msg = message();
    for (auto& sv : string_utils::splitByPattern(msg, "\n")) {
        if (sv.ends_with('\r')) {
            sv.remove_suffix(1);
        }
        if (sv.starts_with('\r')) {
            sv.remove_prefix(1);
        }
        stream(sv);
    }
    return *this;
}
LLAPI Error& Error::log(CommandOutput& stream) noexcept {
    auto msg = message();
    for (auto& sv : string_utils::splitByPattern(msg, "\n")) {
        if (sv.ends_with('\r')) {
            sv.remove_suffix(1);
        }
        if (sv.starts_with('\r')) {
            sv.remove_prefix(1);
        }
        stream.error(sv);
    }
    return *this;
}
} // namespace ll
