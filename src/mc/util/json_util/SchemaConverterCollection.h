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
    MCAPI SchemaConverterCollection(::JsonUtil::SchemaConverterCollection const&);

    MCAPI explicit SchemaConverterCollection(::Json::Value& node);

    MCAPI ::JsonUtil::SchemaConverterCollection copy() const;

    MCAPI ::JsonUtil::SchemaConverterCollection&
    operator()(::std::string const& filterString, bool forceCaseInsensitive);

    MCAPI ::JsonUtil::SchemaConverterCollection& operator()(uint64 minIndex, uint64 maxIndex, bool);

    MCAPI ~SchemaConverterCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JsonUtil::SchemaConverterCollection const&);

    MCAPI void* $ctor(::Json::Value& node);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace JsonUtil
