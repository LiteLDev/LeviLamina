#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::struct_parser_impl {

struct MemberParameter {
public:
    // prevent constructor by default
    MemberParameter& operator=(MemberParameter const&);
    MemberParameter(MemberParameter const&);
    MemberParameter();
};

} // namespace webrtc::struct_parser_impl
