#pragma once

#include "ll/api/Expected.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/ErrorInfo.h"

namespace Bedrock {
template <typename T, typename Err>
class Result : public nonstd::expected<T, ErrorInfo<Err>> {
public:
    using Base = nonstd::expected<T, ErrorInfo<Err>>;
    using Base::Base;
};
}; // namespace Bedrock
