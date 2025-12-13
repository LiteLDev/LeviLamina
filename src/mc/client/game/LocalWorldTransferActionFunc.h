#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct WorldTransferActionContext;
struct IWorldTransferHandler;
// clang-format on

struct LocalWorldTransferActionFunc
: public ::type_safe::strong_typedef<
      ::LocalWorldTransferActionFunc,
      ::std::function<void(::IWorldTransferHandler const&, ::WorldTransferActionContext const&)>>,
  public ::type_safe::strong_typedef_op::equality_comparison<::LocalWorldTransferActionFunc> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~LocalWorldTransferActionFunc();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
