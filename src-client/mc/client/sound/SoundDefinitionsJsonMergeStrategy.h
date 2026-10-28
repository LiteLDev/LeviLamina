#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
namespace Json { class Value; }
// clang-format on

class SoundDefinitionsJsonMergeStrategy : public ::JsonMergeStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _preMergeTransform(::Json::Value& root, ::LoadedResourceData const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_preMergeTransform(::Json::Value& root, ::LoadedResourceData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
