#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCAPI SchemaConverterCollection(::JsonUtil::SchemaConverterCollection const&);

    MCAPI ::JsonUtil::SchemaConverterCollection&
    operator()(::std::string const& filterString, bool forceCaseInsensitive);

    MCAPI ::JsonUtil::SchemaConverterCollection& operator()(uint64 maxIndex, uint64 minIndex, bool);

    MCAPI ~SchemaConverterCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JsonUtil::SchemaConverterCollection const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace JsonUtil
