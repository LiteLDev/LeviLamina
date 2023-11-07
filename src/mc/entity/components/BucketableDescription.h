#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class BucketableDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BucketableDescription& operator=(BucketableDescription const&);
    BucketableDescription(BucketableDescription const&);
    BucketableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BucketableDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1BucketableDescription@@UEAA@XZ
    virtual ~BucketableDescription();

    // NOLINTEND
};
