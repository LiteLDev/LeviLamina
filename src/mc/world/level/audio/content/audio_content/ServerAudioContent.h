#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace AudioContent::ServerContent::v1_0_0 {

struct ServerAudioContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke79946;
    ::ll::UntypedStorage<8, 32> mUnk8b83bb;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerAudioContent& operator=(ServerAudioContent const&);
    ServerAudioContent(ServerAudioContent const&);
    ServerAudioContent();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND
};

} // namespace AudioContent::ServerContent::v1_0_0
