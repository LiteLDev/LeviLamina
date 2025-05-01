#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::struct_parser_impl { struct MemberParameter; }
// clang-format on

namespace webrtc {

class StructParametersParser {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string Encode() const;

    MCNAPI void Parse(::std::string_view);

    MCNAPI explicit StructParametersParser(::std::vector<::webrtc::struct_parser_impl::MemberParameter>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::webrtc::struct_parser_impl::MemberParameter>);
    // NOLINTEND
};

} // namespace webrtc
