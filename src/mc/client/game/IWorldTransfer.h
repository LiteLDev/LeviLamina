#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ExternalWorldTransferActionFunc;
struct LocalWorldTransferActionFunc;
struct WorldTransferAgent;
// clang-format on

struct IWorldTransfer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTransfer() = default;

    virtual void setWorldTransferAction(
        ::std::variant<::LocalWorldTransferActionFunc, ::ExternalWorldTransferActionFunc, ::std::monostate>
    ) = 0;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const = 0;

    virtual void setIsWorldTransferInProgress(bool) = 0;

    virtual bool isWorldTransferInProgress() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
