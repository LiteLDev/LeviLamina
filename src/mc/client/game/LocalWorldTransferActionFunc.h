#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IWorldTransferHandler;
struct WorldTransferActionContext;
// clang-format on

struct LocalWorldTransferActionFunc
: public ::type_safe::strong_typedef<
      ::LocalWorldTransferActionFunc,
      ::std::function<void(::IWorldTransferHandler const&, ::WorldTransferActionContext const&)>>,
  public ::type_safe::strong_typedef_op::equality_comparison<::LocalWorldTransferActionFunc> {
public:
    // prevent constructor by default
    LocalWorldTransferActionFunc& operator=(LocalWorldTransferActionFunc const&);
    LocalWorldTransferActionFunc(LocalWorldTransferActionFunc const&);
    LocalWorldTransferActionFunc();
};
