#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IWorldTransferHandler;
struct WorldTransferActionContext;
// clang-format on

struct ExternalWorldTransferActionFunc : public ::type_safe::strong_typedef<::ExternalWorldTransferActionFunc, ::std::function<void(::IWorldTransferHandler const&, ::WorldTransferActionContext const&)>>, public ::type_safe::strong_typedef_op::equality_comparison<::ExternalWorldTransferActionFunc> {
};
