#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"

namespace Bedrock {

template <typename T, typename Err>
class Result {
    using value_type = std::conditional_t<std::is_void_v<T>, char, T>;
    union {
        value_type     mValue;
        ErrorInfo<Err> mError;
    };
    bool mHasValue;

public:
    template <class... Args>
    [[nodiscard]] explicit Result(Args&&... args) : mValue(std::forward<Args>(args)...),
                                                    mHasValue(true) {}
    [[nodiscard]] explicit Result(ErrorInfo<Err> err) : mError(std::move(err)), mHasValue(false) {}

    [[nodiscard]] Result(Result&& other) noexcept {
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = std::move(other.mValue);
        } else {
            mError = std::move(other.mError);
        }
    }
    Result& operator=(Result&& other) noexcept {
        if (this == &other) {
            return *this;
        }
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = std::move(other.mValue);
        } else {
            mError = std::move(other.mError);
        }
        return *this;
    }
    [[nodiscard]] Result(Result const& other) noexcept {
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = other.mValue;
        } else {
            mError = other.mError;
        }
    }
    Result& operator=(Result const& other) noexcept {
        if (this == &other) {
            return *this;
        }
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = other.mValue;
        } else {
            mError = other.mError;
        }
    }

    [[nodiscard]] bool has_value() const { return mHasValue; }

    [[nodiscard]] explicit operator bool() const { return mHasValue; }

    [[nodiscard]] Err& error() {
        if (mHasValue) throw std::logic_error("Bad error result access.");
        return mError;
    }

    [[nodiscard]] value_type& value()
        requires(!std::is_void_v<T>)
    {
        if (!mHasValue) {
            throw std::system_error(error());
        }
        return mValue;
    }
    ~Result() {
        if (mHasValue) {
            mValue.~value_type();
        } else {
            mError.~ErrorInfo<Err>();
        }
    }
};
}; // namespace Bedrock
