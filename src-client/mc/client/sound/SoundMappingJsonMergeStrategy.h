#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
namespace Json { class Value; }
// clang-format on

class SoundMappingJsonMergeStrategy : public ::JsonMergeStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _preMergeTransform(::Json::Value& root, ::LoadedResourceData const& context) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_preMergeTransform(::Json::Value& root, ::LoadedResourceData const& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
