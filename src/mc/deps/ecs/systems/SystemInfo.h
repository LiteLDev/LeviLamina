#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/systems/Dependencies.h"

// auto generated forward declare list
// clang-format off
struct ComponentInfo;
struct Dependencies;
// clang-format on

struct SystemInfo {
public:
    // SystemInfo inner types define
    using GenerateComponentInfoVectorFunction = ::std::vector<::ComponentInfo> (*)();

public:
    // member variables
    // NOLINTBEGIN
    ::std::string                                                  mName;
    ::Dependencies                                                 mDependencies;
    ::ll::TypedStorage<8, 8, ::std::vector<::ComponentInfo> (*)()> mGenerateDetailedInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SystemInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
