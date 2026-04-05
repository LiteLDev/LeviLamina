#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IDataStorageRequest; }
namespace cohtml { class IDataStorageResponse; }
// clang-format on

namespace cohtml {

class IDataStorageHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataStorageHandler() = default;

    virtual void OnDataStorageRead(::cohtml::IDataStorageRequest const*, ::cohtml::IDataStorageResponse*) = 0;

    virtual bool OnDataStorageWrite(char const*, char const*, char const*) = 0;

    virtual void OnDataStorageRemove(char const*, char const*) = 0;

    virtual void OnDataStorageClear(char const*) = 0;

    virtual ulong OnDataStorageCount(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
