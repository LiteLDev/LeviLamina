#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Details { class PendingConditional; }
// clang-format on

namespace Bedrock::Threading {

class PendingConditionals : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkac936f;
    ::ll::UntypedStorage<8, 24> mUnkd1de75;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingConditionals& operator=(PendingConditionals const&);
    PendingConditionals(PendingConditionals const&);
    PendingConditionals();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PendingConditionals() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _flushCompletedConditionals();

    MCNAPI_C void
    _forAll(::std::function<void(::std::shared_ptr<::Bedrock::Threading::Details::PendingConditional>&)> pred);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
