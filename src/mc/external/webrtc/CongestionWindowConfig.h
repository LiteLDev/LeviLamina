#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct CongestionWindowConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkd02f2e;
    ::ll::UntypedStorage<4, 8>  mUnk9fef24;
    ::ll::UntypedStorage<8, 16> mUnkfc898b;
    ::ll::UntypedStorage<1, 1>  mUnk923699;
    // NOLINTEND

public:
    // prevent constructor by default
    CongestionWindowConfig& operator=(CongestionWindowConfig const&);
    CongestionWindowConfig(CongestionWindowConfig const&);
    CongestionWindowConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::CongestionWindowConfig Parse(::std::string_view config);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND
};

} // namespace webrtc
