#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackSourceFactory;
struct WorldTemplateManagerInitDeps;
// clang-format on

struct WorldTemplateManagerInitData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk55eda7;
    ::ll::UntypedStorage<8, 24> mUnk917ae1;
    ::ll::UntypedStorage<8, 8>  mUnk26b27b;
    ::ll::UntypedStorage<8, 8>  mUnk728848;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitData& operator=(WorldTemplateManagerInitData const&);
    WorldTemplateManagerInitData(WorldTemplateManagerInitData const&);
    WorldTemplateManagerInitData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::WorldTemplateManagerInitDeps& deps);

    MCNAPI void initializePackSources(
        ::PackSourceFactory&                     packSourceFactory,
        ::Core::PathBuffer<::std::string> const& worldTemplatesPath
    );

    MCNAPI ::WorldTemplateManagerInitData& operator=(::WorldTemplateManagerInitData&&);

    MCNAPI ~WorldTemplateManagerInitData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
