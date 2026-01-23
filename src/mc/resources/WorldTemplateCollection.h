#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateData;
struct WorldTemplateInfo;
struct WorldTemplateMutableInfo;
// clang-format on

class WorldTemplateCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8c6f65;
    ::ll::UntypedStorage<8, 64> mUnkb4d91e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateCollection& operator=(WorldTemplateCollection const&);
    WorldTemplateCollection(WorldTemplateCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateCollection();

    MCNAPI void erase(uint64 index);

    MCNAPI ::WorldTemplateInfo const& getOrInvalid(uint64 index) const;

    MCNAPI ::WorldTemplateCollection& operator=(::WorldTemplateCollection&&);

    MCNAPI void push_back(::WorldTemplateData&& data, ::WorldTemplateMutableInfo&& mutableInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
