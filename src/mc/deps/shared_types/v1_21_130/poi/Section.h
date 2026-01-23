#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::Poi { struct Record; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::Poi {

struct Section {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_130::Poi::Record>> mRecords;
    ::ll::TypedStorage<8, 8, uint64>                                                mId;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsValid;
    // NOLINTEND

public:
    // prevent constructor by default
    Section& operator=(Section const&);
    Section(Section const&);
    Section();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_130::Poi::Section& operator=(::SharedTypes::v1_21_130::Poi::Section&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Poi
