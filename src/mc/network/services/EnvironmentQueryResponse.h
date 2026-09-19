#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::discovery::model { struct EnvironmentQueryResponseData; }
// clang-format on

namespace Bedrock::Services {

struct EnvironmentQueryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd85b5a;
    ::ll::UntypedStorage<8, 64> mUnkd6b7df;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentQueryResponse& operator=(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnvironmentQueryResponse(
        ::Bedrock::Services::discovery::model::EnvironmentQueryResponseData&& responseData
    );

#ifdef LL_PLAT_C
    MCNAPI ::std::string GetDefaultEnvironment() const;

    MCNAPI ::std::string GetPropertyValue(::std::string const& serviceName, ::std::string const& propertyKey) const;
#endif

    MCNAPI ::std::unordered_map<::std::string, ::std::string> const*
    GetServiceEnvironmentProperties(::std::string const& serviceName, ::std::string const& environmentName) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::discovery::model::EnvironmentQueryResponseData&& responseData);
    // NOLINTEND
};

} // namespace Bedrock::Services
