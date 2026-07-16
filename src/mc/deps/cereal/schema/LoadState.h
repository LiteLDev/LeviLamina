#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct LoaderConfig; }
// clang-format on

namespace cereal::internal {

struct LoadState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::SerializerContext&>  mContext;
    ::ll::TypedStorage<8, 8, ::cereal::LoaderConfig const&> mConfig;
    ::ll::TypedStorage<8, 8, ::cereal::Constraint const*>   mConstraint;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>         mScope;
    ::ll::TypedStorage<1, 1, bool>                          mIsTopLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadState& operator=(LoadState const&);
    LoadState(LoadState const&);
    LoadState();
};

} // namespace cereal::internal
