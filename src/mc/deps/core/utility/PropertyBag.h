#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyBag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value> mJsonValue;
    ::ll::TypedStorage<4, 4, int>            mChangeVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyBag();

    MCAPI explicit PropertyBag(::Json::Value const& jsonValue);

    MCFOLD ::Json::Value const& toJsonValue() const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PropertyBag& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Json::Value const& jsonValue);
    // NOLINTEND
};
