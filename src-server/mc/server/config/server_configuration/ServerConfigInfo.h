#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ServerConfiguration { struct ServerConfigurationJoinInfo; }
// clang-format on

namespace ServerConfiguration {

struct ServerConfigInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk27432b;
    ::ll::UntypedStorage<8, 72>  mUnk9cff42;
    ::ll::UntypedStorage<8, 48>  mUnk4e0cab;
    ::ll::UntypedStorage<8, 104> mUnk8a1a69;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConfigInfo& operator=(ServerConfigInfo const&);
    ServerConfigInfo(ServerConfigInfo const&);
    ServerConfigInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerConfiguration::ServerConfigurationJoinInfo createJoinInfo() const;
    // NOLINTEND
};

} // namespace ServerConfiguration
