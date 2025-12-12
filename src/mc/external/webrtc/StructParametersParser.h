#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::struct_parser_impl { struct MemberParameter; }
// clang-format on

namespace webrtc {

class StructParametersParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5ab1c0;
    // NOLINTEND

public:
    // prevent constructor by default
    StructParametersParser& operator=(StructParametersParser const&);
    StructParametersParser(StructParametersParser const&);
    StructParametersParser();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string Encode() const;

    MCNAPI void Parse(::std::string_view src);

    MCNAPI explicit StructParametersParser(::std::vector<::webrtc::struct_parser_impl::MemberParameter> members);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::webrtc::struct_parser_impl::MemberParameter> members);
    // NOLINTEND
};

} // namespace webrtc
