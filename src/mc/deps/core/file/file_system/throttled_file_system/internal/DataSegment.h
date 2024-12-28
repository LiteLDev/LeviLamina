#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_base_hook.h"

namespace Core::Internal {

class DataSegment : public ::Bedrock::Intrusive::list_base_hook<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk213744;
    ::ll::UntypedStorage<8, 8>  mUnka09fff;
    ::ll::UntypedStorage<8, 8>  mUnk81cf47;
    // NOLINTEND

public:
    // prevent constructor by default
    DataSegment& operator=(DataSegment const&);
    DataSegment(DataSegment const&);
    DataSegment();
};

} // namespace Core::Internal
