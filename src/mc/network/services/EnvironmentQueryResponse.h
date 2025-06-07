#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Services {

struct EnvironmentQueryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk80e9f5;
    ::ll::UntypedStorage<8, 16> mUnkf2e698;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentQueryResponse& operator=(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnvironmentQueryResponse(::Bedrock::Services::EnvironmentQueryResponse const&);

    MCNAPI ::std::map<::std::string, ::std::string> const*
    GetServiceEnvironmentProperties(::std::string const& serviceName, ::std::string const& environmentName) const;

    MCNAPI void fromJsonShared(::Json::Value const& jsonValue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::EnvironmentQueryResponse const&);
    // NOLINTEND
};

} // namespace Bedrock::Services
