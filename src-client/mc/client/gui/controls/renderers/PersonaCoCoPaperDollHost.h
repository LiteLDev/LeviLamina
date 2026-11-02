#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRenderer;
class DataDrivenRendererV2RequiredData;
class EntityRegistry;
class UniversalEntityRenderer;
namespace mce { struct BufferResourceService; }
// clang-format on

class PersonaCoCoPaperDollHost {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EntityRegistry>>                  mRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UniversalEntityRenderer>>          mUER;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererV2RequiredData>> mV2Data;
    ::ll::TypedStorage<8, 48, ::HashedString>                                       mEntityIdentifier;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityContext>>                          mEntity;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>>                mBakedRenderer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>>        mBakedBufferService;
    // NOLINTEND
};
