#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class BodySize {
public:
    // BodySize inner types define
    enum class Type {};

public:
    // prevent constructor by default
    BodySize& operator=(BodySize const&);
    BodySize(BodySize const&);
    BodySize();

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<::persona::BodySize::Type, struct persona::SizeInfo> const mInfoList;

    // NOLINTEND
};

}; // namespace persona
