#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
// clang-format on

namespace Realms {

class WorldCache : public ::std::enable_shared_from_this<::Realms::WorldCache> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk75c003;
    ::ll::UntypedStorage<8, 24> mUnk70535d;
    ::ll::UntypedStorage<8, 72> mUnkf36b3e;
    ::ll::UntypedStorage<8, 16> mUnkedd084;
    ::ll::UntypedStorage<1, 1>  mUnk52558d;
    ::ll::UntypedStorage<1, 1>  mUnk9866d4;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCache& operator=(WorldCache const&);
    WorldCache(WorldCache const&);
    WorldCache();
};

} // namespace Realms
