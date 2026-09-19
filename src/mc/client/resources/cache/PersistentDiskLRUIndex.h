#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersistentDiskLRUIndex {
public:
    // PersistentDiskLRUIndex inner types declare
    // clang-format off
    struct DiskDocument;
    struct DiskEntry;
    struct Format;
    // clang-format on

    // PersistentDiskLRUIndex inner types define
    enum class ReconcileNewEntryTime : int {};

    struct DiskDocument {};

    struct DiskEntry {};

    struct Format {};
};
