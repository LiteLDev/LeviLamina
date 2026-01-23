#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::Poi {

struct TypeRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<2, 2, ushort>         mType;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeRecord(TypeRecord const&);
    TypeRecord();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_130::Poi::TypeRecord& operator=(::SharedTypes::v1_21_130::Poi::TypeRecord&&);

    MCFOLD ::SharedTypes::v1_21_130::Poi::TypeRecord& operator=(::SharedTypes::v1_21_130::Poi::TypeRecord const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Poi
