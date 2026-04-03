#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::Poi {

struct RegionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::glm::ivec2>> mRegions;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionRegistry& operator=(RegionRegistry const&);
    RegionRegistry(RegionRegistry const&);
    RegionRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_130::Poi::RegionRegistry& operator=(::SharedTypes::v1_21_130::Poi::RegionRegistry&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Poi
