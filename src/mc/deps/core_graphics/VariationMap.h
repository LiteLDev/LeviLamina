#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

namespace cg {

struct VariationMap {
public:
    // VariationMap inner types define
    using MaterialJsonVariationMap = ::std::map<::std::string, ::cg::VariationMap>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::cg::VariationMap>> mMaterialJsonVariationMap;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                 mVariantJson;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::cg::VariationMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace cg
