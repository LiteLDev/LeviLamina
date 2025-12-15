#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/RequirementCategory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
// clang-format on

class ClientRequirementVerifier : public ::std::enable_shared_from_this<::ClientRequirementVerifier> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk17abcd;
    ::ll::UntypedStorage<1, 1>  mUnk19f1f1;
    ::ll::UntypedStorage<8, 24> mUnke52a4e;
    ::ll::UntypedStorage<8, 16> mUnk1b05cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientRequirementVerifier& operator=(ClientRequirementVerifier const&);
    ClientRequirementVerifier(ClientRequirementVerifier const&);
    ClientRequirementVerifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientRequirementVerifier(
        ::Bedrock::NotNullNonOwnerPtr<::FlightingService> const& flightingService
    );

    MCNAPI bool doesMeetRequirements(::RequirementCategory category, ::std::string const& requirement) const;

    MCNAPI void init();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::FlightingService> const& flightingService);
    // NOLINTEND
};
