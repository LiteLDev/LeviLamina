#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#include "mc/events/identity/EduSignInStage.h"

class IActiveDirectoryIdentityTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActiveDirectoryIdentityTelemetry();

    virtual void fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    ) = 0;

    virtual void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource) = 0;

    virtual void fireCodeBuilderLoadPerformanceEvent(::CodeBuilderPerformance::Stage stage) = 0;

    virtual ::std::string getAppSessionId() = 0;
    // NOLINTEND
};
