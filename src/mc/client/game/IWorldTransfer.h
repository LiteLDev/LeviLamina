#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldTransferAgent;
struct ExternalWorldTransferActionFunc;
struct LocalWorldTransferActionFunc;
// clang-format on

struct IWorldTransfer {
public:
    // prevent constructor by default
    IWorldTransfer& operator=(IWorldTransfer const&);
    IWorldTransfer(IWorldTransfer const&);
    IWorldTransfer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWorldTransfer();

    // vIndex: 1
    virtual void setWorldTransferAction(::std::variant<
                                        ::LocalWorldTransferActionFunc,
                                        ::ExternalWorldTransferActionFunc,
                                        ::std::monostate>) = 0;

    // vIndex: 2
    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const = 0;

    // vIndex: 3
    virtual void setIsWorldTransferInProgress(bool) = 0;

    // vIndex: 4
    virtual bool isWorldTransferInProgress() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
