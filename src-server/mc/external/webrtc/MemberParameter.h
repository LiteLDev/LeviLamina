#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::struct_parser_impl {

struct MemberParameter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk860b3a;
    ::ll::UntypedStorage<8, 8>  mUnkfd59c8;
    ::ll::UntypedStorage<8, 16> mUnkc6130e;
    // NOLINTEND

public:
    // prevent constructor by default
    MemberParameter& operator=(MemberParameter const&);
    MemberParameter(MemberParameter const&);
    MemberParameter();
};

} // namespace webrtc::struct_parser_impl
