#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct ItemIconInfo;
// clang-format on

struct ItemIconInfoFactory : public ::brstd::function_ref<
                                 ::std::optional<::ItemIconInfo>(::std::string const&, int) const,
                                 ::std::optional<::ItemIconInfo>(::std::string const&, int)> {};
