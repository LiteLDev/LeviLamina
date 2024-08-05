#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct CodeScreenCapabilities {
public:
    // prevent constructor by default
    CodeScreenCapabilities& operator=(CodeScreenCapabilities const&);
    CodeScreenCapabilities(CodeScreenCapabilities const&);
    CodeScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeScreenCapabilities();

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
