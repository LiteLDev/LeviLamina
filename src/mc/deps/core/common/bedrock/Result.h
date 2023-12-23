#pragma once

#include <expected>

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"

namespace Bedrock {

template <typename T, typename Err>
class Result : public std::expected<T, ErrorInfo<Err>> {
public:
    using Base = std::expected<T, ErrorInfo<Err>>;
    using Base::Base;
};
}; // namespace Bedrock
