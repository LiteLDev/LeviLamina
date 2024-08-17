#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "ll/api/Expected.h"

namespace Bedrock {
template <typename T, typename Err>
class Result : public nonstd::expected<T, ErrorInfo<Err>> {
public:
    using Base = nonstd::expected<T, ErrorInfo<Err>>;
    using Base::Base;
};
}; // namespace Bedrock
