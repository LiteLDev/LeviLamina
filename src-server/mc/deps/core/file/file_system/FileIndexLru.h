#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Core {

class FileIndexLru
: public ::Bedrock::EnableNonOwnerReferences,
  public ::Core::LRUCache<::Core::PathBuffer<::std::string>, nullptr_t, ::std::shared_ptr<nullptr_t>> {
public:
    // FileIndexLru inner types declare
    // clang-format off
    struct PriorityQueueElement;
    // clang-format on

    // FileIndexLru inner types define
    struct PriorityQueueElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9ee2f4;
        ::ll::UntypedStorage<8, 8>  mUnkef345e;
        ::ll::UntypedStorage<8, 32> mUnk731399;
        ::ll::UntypedStorage<8, 32> mUnkcd6ee1;
        // NOLINTEND

    public:
        // prevent constructor by default
        PriorityQueueElement& operator=(PriorityQueueElement const&);
        PriorityQueueElement(PriorityQueueElement const&);
        PriorityQueueElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk34410e;
    ::ll::UntypedStorage<8, 64> mUnkb2e90f;
    ::ll::UntypedStorage<8, 64> mUnk9f3357;
    ::ll::UntypedStorage<8, 64> mUnka81091;
    ::ll::UntypedStorage<8, 8>  mUnk303f06;
    ::ll::UntypedStorage<8, 24> mUnk84c1a5;
    // NOLINTEND

public:
    // prevent constructor by default
    FileIndexLru& operator=(FileIndexLru const&);
    FileIndexLru(FileIndexLru const&);
    FileIndexLru();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileIndexLru() /*override*/ = default;
    // NOLINTEND
};

} // namespace Core
