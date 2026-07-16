#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct LevelSummary;
namespace Core { class FileStorageArea; }
// clang-format on

class IWorldSettingsStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldSettingsStorage() = default;

    virtual bool hasAvailableSpaceForLevel(::std::shared_ptr<::Core::FileStorageArea>) = 0;

    virtual void saveWorld() = 0;

    virtual ::LevelSummary& getLevelSummary() = 0;

    virtual ::LevelData& getLevelData() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
