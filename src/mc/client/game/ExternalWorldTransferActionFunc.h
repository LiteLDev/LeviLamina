#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct WorldTransferActionContext;
struct IWorldTransferHandler;
// clang-format on

struct ExternalWorldTransferActionFunc
: public ::type_safe::strong_typedef<
      ::ExternalWorldTransferActionFunc,
      ::std::function<void(::IWorldTransferHandler const&, ::WorldTransferActionContext const&)>>,
  public ::type_safe::strong_typedef_op::equality_comparison<::ExternalWorldTransferActionFunc> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ExternalWorldTransferActionFunc();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
