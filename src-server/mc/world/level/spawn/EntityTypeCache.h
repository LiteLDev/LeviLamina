#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn {

class EntityTypeCache {
public:
    // EntityTypeCache inner types define
    enum class Token : uint {};
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::br::spawn::EntityType>> mEntityTypes;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::br::spawn::EntityTypeCache> from(::Level& level);
    // NOLINTEND

};

}
