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
    ::ll::UntypedStorage<8, 16> mUnk1fb873;
    ::ll::UntypedStorage<8, 16> mUnk891ef2;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentQueryResponse& operator=(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string GetDefaultEnvironment() const;

    MCNAPI ::std::string GetPropertyValue(::std::string const& serviceName, ::std::string const& propertyKey) const;

    MCNAPI ::std::map<::std::string, ::std::string> const*
    GetServiceEnvironmentProperties(::std::string const& serviceName, ::std::string const& environmentName) const;
#endif

    MCNAPI void fromJsonShared(::Json::Value const& jsonValue);

#ifdef LL_PLAT_C
    MCNAPI ~EnvironmentQueryResponse();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Services
