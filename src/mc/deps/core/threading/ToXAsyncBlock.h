#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XTaskQueueObject;
// clang-format on

namespace Bedrock::Threading::AsyncResult {

class ToXAsyncBlock : public ::Bedrock::Threading::AsyncResultBase<::XAsyncBlock*> {
public:
    // ToXAsyncBlock inner types define
    using Context = ::std::weak_ptr<::Bedrock::Threading::AsyncResult::ToXAsyncBlock>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::XAsyncBlock>> mAsyncBlock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::weak_ptr<::Bedrock::Threading::AsyncResult::ToXAsyncBlock>>>
        mAsyncContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ToXAsyncBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToXAsyncBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ToXAsyncBlock(::XTaskQueueObject* queue);

    MCAPI ::XAsyncBlock* _getAsyncBlock();

    MCAPI void _handleResult(long hr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::XTaskQueueObject* queue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading::AsyncResult
