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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaed0d7;
    ::ll::UntypedStorage<8, 8> mUnkacb2bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ToXAsyncBlock& operator=(ToXAsyncBlock const&);
    ToXAsyncBlock(ToXAsyncBlock const&);
    ToXAsyncBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ToXAsyncBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ToXAsyncBlock(::XTaskQueueObject* queue);

    MCNAPI ::XAsyncBlock* _getAsyncBlock();

    MCNAPI void _handleResult(long hr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::XTaskQueueObject* queue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
