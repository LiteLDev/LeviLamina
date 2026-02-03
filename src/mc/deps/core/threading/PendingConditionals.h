#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Details { class PendingConditional; }
// clang-format on

namespace Bedrock::Threading {

class PendingConditionals : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Bedrock::Threading::Details::PendingConditional>>>
        mConditionals;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PendingConditionals() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void _flushCompletedConditionals();

    MCAPI_C void
    _forAll(::std::function<void(::std::shared_ptr<::Bedrock::Threading::Details::PendingConditional>&)> pred);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
