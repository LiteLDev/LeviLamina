#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"

namespace Bedrock {

template <typename T, typename Err>
class Result {

    union {
        T              mValue;
        ErrorInfo<Err> mError;
    };
    bool mHasValue;

public:
    [[nodiscard]] explicit Result(T value) : mValue(std::move(value)), mHasValue(true) {}
    [[nodiscard]] explicit Result(ErrorInfo<Err> err) : mError(std::move(err)), mHasValue(false) {}

    [[nodiscard]] Result(Result&& other) noexcept {
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = std::move(other.mValue);
        } else {
            mError = std::move(other.mError);
        }
    }

    [[nodiscard]] bool has_value() const { return mHasValue; }

    [[nodiscard]] explicit operator bool() const { return mHasValue; }

    [[nodiscard]] Err& error() {
        if (mHasValue) throw std::logic_error("Bad error result access.");
        return mError;
    }

    [[nodiscard]] T& value() {
        if (!mHasValue) {
            throw std::system_error(error());
        }
        return mValue;
    }
    ~Result() {
        if (mHasValue) {
            mValue.~T();
        } else {
            mError.~ErrorInfo<Err>();
        }
    }
};

template <typename Err>
class Result<void, Err> {

    ErrorInfo<Err> mError;
    bool           mHasValue;

public:
    [[nodiscard]] Result() : mHasValue(true) {}
    [[nodiscard]] explicit Result(ErrorInfo<Err> err) : mError(std::move(err)), mHasValue(false) {}

    [[nodiscard]] Result(Result&& other) noexcept {
        mHasValue = other.mHasValue;
        if (!mHasValue) {
            mError = std::move(other.mError);
        }
    }

    [[nodiscard]] bool has_value() const { return mHasValue; }

    [[nodiscard]] explicit operator bool() const { return mHasValue; }

    void value() {
        if (!mHasValue) {
            throw std::system_error(error());
        }
        // No value to return as T is void
    }

    [[nodiscard]] Err& error() {
        if (mHasValue) throw std::logic_error("Bad error result access.");
        return mError;
    }
};

}; // namespace Bedrock
