#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/entity/gamerefs_entity/EntityRegistry.h"

struct EntityRegistryConstRefTraits : SharePtrRefTraits<EntityRegistry const> {};
