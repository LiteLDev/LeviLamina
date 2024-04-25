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
    // symbol:
    // ?mInfoList@BodySize@persona@@0V?$unordered_map@W4Type@BodySize@persona@@USizeInfo@3@U?$hash@W4Type@BodySize@persona@@@std@@U?$equal_to@W4Type@BodySize@persona@@@6@V?$allocator@U?$pair@$$CBW4Type@BodySize@persona@@USizeInfo@3@@std@@@6@@std@@B
    MCAPI static std::unordered_map<::persona::BodySize::Type, struct persona::SizeInfo> const mInfoList;

    // NOLINTEND
};

}; // namespace persona
