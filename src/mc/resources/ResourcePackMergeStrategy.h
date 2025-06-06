#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
// clang-format on

class ResourcePackMergeStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackMergeStrategy() = default;

    // vIndex: 1
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
