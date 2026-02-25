#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace OreUI {

class IStorageInfoUpdater {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStorageInfoUpdater() = default;

    virtual bool update(bool&, uint64&, uint64&, bool&, bool&) = 0;

    virtual void addStateListener(::Core::StorageAreaStateListener*) = 0;

    virtual void removeStateListener(::Core::StorageAreaStateListener*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
