#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "mc/external/expected_lite/expected.h"

namespace Bedrock {
template <typename T, typename Err>
class Result : public nonstd::expected<T, ErrorInfo<Err>> {
public:
    using Base = nonstd::expected<T, ErrorInfo<Err>>;
    using Base::Base;
};
}; // namespace Bedrock
