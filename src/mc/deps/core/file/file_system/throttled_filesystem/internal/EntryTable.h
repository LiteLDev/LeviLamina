#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core::Internal {

class EntryTable {
public:
    // EntryTable inner types declare
    // clang-format off
    class QueuedRemovalRefCounter;
    // clang-format on

    // EntryTable inner types define
    class QueuedRemovalRefCounter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk8d885f;
        ::ll::UntypedStorage<8, 32> mUnk205102;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedRemovalRefCounter& operator=(QueuedRemovalRefCounter const&);
        QueuedRemovalRefCounter(QueuedRemovalRefCounter const&);
        QueuedRemovalRefCounter();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc28a95;
    ::ll::UntypedStorage<8, 16> mUnka0330b;
    ::ll::UntypedStorage<8, 24> mUnka2c199;
    ::ll::UntypedStorage<8, 16> mUnkbfc75d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntryTable& operator=(EntryTable const&);
    EntryTable(EntryTable const&);
    EntryTable();
};

} // namespace Core::Internal
