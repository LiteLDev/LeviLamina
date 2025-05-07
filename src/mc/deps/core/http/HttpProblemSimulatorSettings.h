#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock::Http {

class HttpProblemSimulatorSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk932093;
    ::ll::UntypedStorage<8, 8> mUnkc2b700;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpProblemSimulatorSettings& operator=(HttpProblemSimulatorSettings const&);
    HttpProblemSimulatorSettings(HttpProblemSimulatorSettings const&);
    HttpProblemSimulatorSettings();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HttpProblemSimulatorSettings() /*override*/ = default;
    // NOLINTEND
};

} // namespace Bedrock::Http
