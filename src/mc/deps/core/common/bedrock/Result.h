#pragma once

#if _HAS_CXX23
#include <expected>
#endif

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"

namespace Bedrock {

// #if _HAS_CXX23
// template <typename T, typename Err>
// class Result : public std::expected<T, ErrorInfo<Err>> {
// public:
//     using Base = std::expected<T, ErrorInfo<Err>>;
//     using Base::Base;
// };
// #else
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
    [[nodiscard]] Result(Args&&... args) : mValue(std::forward<Args>(args)...),
                                           mHasValue(true) {}
    [[nodiscard]] Result(ErrorInfo<Err> err) : mError(std::move(err)), mHasValue(false) {}

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
        return mError.code();
    }

    [[nodiscard]] value_type& value()
        requires(!std::is_void_v<T>)
    {
        if (!mHasValue) {
            throw std::system_error(error());
        }
        return mValue;
    }

    [[nodiscard]] value_type* operator->()
        requires(!std::is_void_v<T>)
    {
        return &value();
    }

    [[nodiscard]] value_type& operator*()
        requires(!std::is_void_v<T>)
    {
        return value();
    }

    ~Result() {
        if (mHasValue) {
            mValue.~value_type();
        } else {
            mError.~ErrorInfo<Err>();
        }
    }
};
// #endif

}; // namespace Bedrock
