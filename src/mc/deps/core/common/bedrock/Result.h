#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"

namespace Bedrock {

template <typename T, typename Err>
class Result {

private:
    union {
        T              mValue;
        ErrorInfo<Err> mError;
    };
    bool mHasValue;

public:
    explicit Result(T&& value) : mValue(std::move(value)), mHasValue(true) {}

    Result(Result&& other) noexcept {
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = std::move(other.mValue);
        } else {
            mError = std::move(other.mError);
        }
    }

    [[nodiscard]] bool has_value() const { return mHasValue; }

    T& value() {
        if (!mHasValue) {
            std::rethrow_exception(std::make_exception_ptr(mError.getError()));
        }
        return mValue;
    }

    Err& error() {
        if (mHasValue)
            throw std::logic_error("Bad error result access.");
        return mError;
    }
};

template <class Err>
class Result<void, Err> {

private:
    ErrorInfo<Err> mError;
    bool           mHasValue;

public:
    explicit Result() : mHasValue(true) {}

    Result(Result&& other) noexcept {
        mHasValue = other.mHasValue;
        if (!mHasValue) {
            mError = std::move(other.mError);
        }
    }

    [[nodiscard]] bool has_value() const { return mHasValue; }

    void value() {
        if (!mHasValue) {
            std::rethrow_exception(std::make_exception_ptr(mError.getError()));
        }
        // No value to return as T is void
    }

    Err& error() {
        if (mHasValue)
            throw std::logic_error("Bad error result access.");
        return mError;
    }
};

}; // namespace Bedrock
