#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IMinecraftEventing;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class IECSModulesCollection {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IECSModulesCollection() = default;

    // vIndex: 1
    virtual void init(
        ::WeakRef<::EntityRegistry>,
        ::VanillaSystemsRegistration::RegistrationOptions&,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
