#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/WorldType.h"
#include "mc/client/world/NetworkWorldType.h"

// auto generated forward declare list
// clang-format off
class LevelSettings;
struct LocalWorldInfo;
// clang-format on

class IWorldsProvider {
public:
    // prevent constructor by default
    IWorldsProvider& operator=(IWorldsProvider const&);
    IWorldsProvider(IWorldsProvider const&);
    IWorldsProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWorldsProvider() = default;

    // vIndex: 1
    virtual int getWorldCount(::WorldType, ::NetworkWorldType) const = 0;

    // vIndex: 2
    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const) const = 0;

    // vIndex: 3
    virtual ::LocalWorldInfo const* getLocalWorldById(::std::string const&) const = 0;

    // vIndex: 4
    virtual bool refresh(::WorldType) = 0;

    // vIndex: 5
    virtual void startLocalWorld(::LocalWorldInfo, ::LevelSettings const*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
