#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

namespace br::spawn {

class EntityTypeCache {
public:
    // EntityTypeCache inner types define
    enum class Token : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb96464;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityTypeCache& operator=(EntityTypeCache const&);
    EntityTypeCache(EntityTypeCache const&);
    EntityTypeCache();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::br::spawn::EntityTypeCache> from(::Level& level);
    // NOLINTEND
};

} // namespace br::spawn
