#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SaverConfig; }
// clang-format on

namespace cereal::internal {

struct SaveState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::SerializerContext&> mContext;
    ::ll::TypedStorage<8, 8, ::cereal::SaverConfig const&> mConfig;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>        mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveState& operator=(SaveState const&);
    SaveState(SaveState const&);
    SaveState();
};

} // namespace cereal::internal
