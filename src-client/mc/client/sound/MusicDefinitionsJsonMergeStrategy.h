#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonMergeStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MusicDefinitionsJsonMergeStrategy : public ::JsonMergeStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _preMergeObjectTransform(::Json::Value& root, ::Json::Value const& object) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_preMergeObjectTransform(::Json::Value& root, ::Json::Value const& object);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
