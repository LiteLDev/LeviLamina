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

    MCNAPI_C ::std::string GetPropertyValue(::std::string const& serviceName, ::std::string const& propertyKey) const;

    MCNAPI void fromJsonShared(::Json::Value const& jsonValue);

    MCNAPI_C ~EnvironmentQueryResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::EnvironmentQueryResponse const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
