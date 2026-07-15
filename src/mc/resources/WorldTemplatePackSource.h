#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/DirectoryPackSource.h"

// auto generated forward declare list
// clang-format off
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcf7de5;
    ::ll::UntypedStorage<8, 16> mUnk866f94;
    ::ll::UntypedStorage<1, 1>  mUnkedfcff;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&);
    WorldTemplatePackSource(WorldTemplatePackSource const&);
    WorldTemplatePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatePackSource() /*override*/ = default;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
