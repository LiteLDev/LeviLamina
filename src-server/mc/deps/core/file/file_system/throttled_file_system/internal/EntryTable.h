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
        ::ll::UntypedStorage<8, 32> mUnk215766;
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
    ::ll::UntypedStorage<8, 16> mUnkdcb8ef;
    ::ll::UntypedStorage<8, 16> mUnke899ea;
    ::ll::UntypedStorage<8, 24> mUnkbd3a8a;
    ::ll::UntypedStorage<8, 16> mUnk84e42d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntryTable& operator=(EntryTable const&);
    EntryTable(EntryTable const&);
    EntryTable();
};

} // namespace Core::Internal
