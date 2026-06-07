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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToXAsyncBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::XAsyncBlock* _getAsyncBlock();

    MCAPI void _handleResult(long hr);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::Bedrock::Threading::AsyncResult::ToXAsyncBlock> create(::XTaskQueueObject* queue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading::AsyncResult
