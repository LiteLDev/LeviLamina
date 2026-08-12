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
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldsProvider() = default;

    virtual int getWorldCount(::WorldType worldType, ::NetworkWorldType networkType) const = 0;

    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const index) const = 0;

    virtual ::LocalWorldInfo const* getLocalWorldById(::std::string const& id) const = 0;

    virtual bool refresh(::WorldType tabType) = 0;

    virtual void startLocalWorld(::LocalWorldInfo worldInfo, ::LevelSettings const* settings) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
