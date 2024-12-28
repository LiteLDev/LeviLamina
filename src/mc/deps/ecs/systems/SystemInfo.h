#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/systems/Dependencies.h"

// auto generated forward declare list
// clang-format off
struct ComponentInfo;
struct Dependencies;
// clang-format on

struct SystemInfo {
    std::string  mName;
    Dependencies mDependencies;
    void*        mGenerateDetailedInfo;

public:
    // SystemInfo inner types define
    using GenerateComponentInfoVectorFunction = ::std::vector<::ComponentInfo> (*)();

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       mName;
    ::ll::TypedStorage<8, 152, ::Dependencies>                     mDependencies;
    ::ll::TypedStorage<8, 8, ::std::vector<::ComponentInfo> (*)()> mGenerateDetailedInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
    SystemInfo(SystemInfo const&);
    SystemInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SystemInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
