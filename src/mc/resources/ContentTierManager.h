#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentTierManager.h"

class ContentTierManager : public ::IContentTierManager {
public:
    // prevent constructor by default
    ContentTierManager& operator=(ContentTierManager const&);
    ContentTierManager(ContentTierManager const&);
    ContentTierManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContentTierManager();

    // vIndex: 1
    virtual class ContentTierInfo getContentTierInfo() const;

    MCAPI explicit ContentTierManager(std::function<bool()> isHardwareRayTracingCompatible);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::function<bool()> isHardwareRayTracingCompatible);

    MCAPI void dtor$();

    MCAPI class ContentTierInfo getContentTierInfo$() const;

    // NOLINTEND
};
