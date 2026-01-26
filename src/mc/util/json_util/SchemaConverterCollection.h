#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonUtil {

class SchemaConverterCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd21b34;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterCollection& operator=(SchemaConverterCollection const&);
    SchemaConverterCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SchemaConverterCollection(::JsonUtil::SchemaConverterCollection const&);

    MCNAPI ::JsonUtil::SchemaConverterCollection&
    operator()(::std::string const& filterString, bool forceCaseInsensitive);

    MCNAPI ::JsonUtil::SchemaConverterCollection& operator()(uint64 minIndex, uint64 maxIndex, bool);

    MCNAPI ~SchemaConverterCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonUtil::SchemaConverterCollection const&);

    MCNAPI_C void* $ctor(::Json::Value& node);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonUtil
