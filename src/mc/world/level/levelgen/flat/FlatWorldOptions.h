#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
namespace Json { class Value; }
// clang-format on

class FlatWorldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3e86f2;
    ::ll::UntypedStorage<8, 24> mUnkeb1112;
    ::ll::UntypedStorage<4, 4>  mUnkea797f;
    ::ll::UntypedStorage<8, 16> mUnk397123;
    ::ll::UntypedStorage<1, 1>  mUnkb4c0eb;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldOptions& operator=(FlatWorldOptions const&);
    FlatWorldOptions(FlatWorldOptions const&);
    FlatWorldOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _load(::Json::Value const& root, ::LevelData const& levelData);

    MCNAPI ~FlatWorldOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value _parseFlatWorldJson(::std::string_view json);

    MCNAPI static ::Json::Value getLayers(::LevelData const& levelData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
