#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::struct_parser_impl { struct MemberParameter; }
// clang-format on

namespace webrtc {

class StructParametersParser {
public:
    // prevent constructor by default
    StructParametersParser& operator=(StructParametersParser const&);
    StructParametersParser(StructParametersParser const&);
    StructParametersParser();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Encode@StructParametersParser@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string Encode() const;

    // symbol: ?Parse@StructParametersParser@webrtc@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void Parse(std::string_view);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0StructParametersParser@webrtc@@AEAA@V?$vector@UMemberParameter@struct_parser_impl@webrtc@@V?$allocator@UMemberParameter@struct_parser_impl@webrtc@@@std@@@std@@@Z
    MCAPI explicit StructParametersParser(std::vector<struct webrtc::struct_parser_impl::MemberParameter>);

    // NOLINTEND
};

}; // namespace webrtc
