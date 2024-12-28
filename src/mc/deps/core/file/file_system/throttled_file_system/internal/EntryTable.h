#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

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
    ::ll::UntypedStorage<8, 64> mUnke23ec0;
    ::ll::UntypedStorage<8, 64> mUnk9c1801;
    ::ll::UntypedStorage<8, 24> mUnka5776a;
    ::ll::UntypedStorage<8, 64> mUnk77b312;
    // NOLINTEND

public:
    // prevent constructor by default
    EntryTable& operator=(EntryTable const&);
    EntryTable(EntryTable const&);
    EntryTable();
};

} // namespace Core::Internal
